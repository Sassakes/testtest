scriptName "RscDisplayTalentOverview";

disableSerialization;

try {	
	params [
		["_mode", "", [""]],
		["_parameters", [], [[]]],
		["_display", displayNull, [displayNull]]
	];	
	if !(missionNamespace getVariable ["life_perksInitialized", false]) exitWith {};	
	_ctrlStrucTextCurrentRank = _display displayCtrl 3;
	_ctrlTextRankName = _display displayCtrl 4;
	_ctrlTextStatusInfo = _display displayCtrl 5;
	_ctrlProgress = _display displayCtrl 6;
	_ctrlTreeOverview = _display displayCtrl 7;
	_ctrlTextPerkName = _display displayCtrl 8;
	_ctrlTextPerkSubtitle = _display displayCtrl 9;
	_ctrlBtnPurchase = _display displayCtrl 10;
	_ctrlStrucTextDescription = _display displayCtrl 11;

	_updateGUI = {
		private _currentLevelConfig = missionConfigFile >> "Maverick_TTM" >> "Levels" >> format["Level_%1", life_currentExpLevel];
		private _nextLevelConfig = missionConfigFile >> "Maverick_TTM" >> "Levels" >> format["Level_%1", life_currentExpLevel + 1];
		private _currentLevelBottomExp = getNumber (_currentLevelConfig >> "expRequired");
		private _currentLevelTopExp = getNumber (_nextLevelConfig >> "expRequired");
		private _currentLevelRelativeExp = (life_currentExp - _currentLevelBottomExp);
		private _currentLevelProgress = if (_currentLevelRelativeExp != 0) then {((life_currentExp - _currentLevelBottomExp) / (_currentLevelTopExp - _currentLevelBottomExp))} else {0};	
		_ctrlStrucTextCurrentRank ctrlSetStructuredText parseText format ["<t size='3' shadow='0' align='center'>%1</t>", life_currentExpLevel];
		_ctrlTextRankName ctrlSetText getText (_currentLevelConfig >> "displayName");

		if (isClass _nextLevelConfig) then {
			_ctrlTextStatusInfo ctrlSetText format ["XP: %1/%2, Perk Points Available: %3", life_currentExp - _currentLevelBottomExp, _currentLevelTopExp - _currentLevelBottomExp, life_currentPerkPoints];
			_ctrlProgress progressSetPosition _currentLevelProgress;
		} else {
			_ctrlTextStatusInfo ctrlSetText format ["XP: %1, Maximum Level, Perk Points Available: %2", life_currentExp - _currentLevelBottomExp, life_currentPerkPoints];
			_ctrlProgress progressSetPosition 1;
		};
	};	
	switch (_mode) do
	{
		case "onLoad":
		{	
			if (!life_perksInitialized) exitWith {
				["Your perks are still being loaded by the server, please try again later",true,"slow"] call ALSG_fnc_notificationSystem;
			};	
			private _generateTreeView = {
				params [
					["_content", [], [[]]],
					["_path", [], [[]]]
				];

				private _index = 0;

				{
					private _first = _x param[0];
					if (_first isEqualType []) then {
						private _perkConfig = missionConfigFile >> "Maverick_TTM" >> "Perks" >> ((_x param [0]) param [0]);
						private _limitedToFactions = getArray (_perkConfig >> "limitToSides");	
						if ((str playerSide) in _limitedToFactions || {count _limitedToFactions == 0}) then {	
							private _color = getArray (_perkConfig >> "color");
							private _indexAddedAt = _ctrlTreeOverview tvAdd [_path, getText (_perkConfig >> "displayName")];
							private _newPath = _path + [_indexAddedAt];
							_ctrlTreeOverview tvSetData [_newPath, ((_x param [0]) param [0])];

							if (count _color == 4) then {
								_ctrlTreeOverview tvSetColor [_newPath, _color];
							};

							private _childPerkArray = _x param [1];
							[_childPerkArray, _newPath] call _generateTreeView;

							_index = _index + 1;
						};
					} else {
						private _perkConfig = missionConfigFile >> "Maverick_TTM" >> "Perks" >> _first;
						private _limitedToFactions = getArray (_perkConfig >> "limitToSides");	
						if ((str playerSide) in _limitedToFactions || {count _limitedToFactions == 0}) then {	
							private _color = getArray (_perkConfig >> "color");
							private _indexAddedAt = _ctrlTreeOverview tvAdd [_path, getText (_perkConfig >> "displayName")];
							private _newPath = _path + [_indexAddedAt];
							_ctrlTreeOverview tvSetData [_newPath, _first];

							if (count _color == 4) then {
								_ctrlTreeOverview tvSetColor [_newPath, _color];
							};

							_index = _index + 1;
						};
					};

					true;
				} count _content;
			};	
			[life_currentExpPerks, []] call _generateTreeView;	
			[] call _updateGUI;	
			_ctrlTreeOverview tvSetCurSel [0];
		};

		case "onTreeSelectionChanged":
		{
			private _selectedPerkConfig = missionConfigFile >> "Maverick_TTM" >> "Perks" >> (_ctrlTreeOverview tvData (_parameters select 1));

			_ctrlTextPerkName ctrlSetText getText (_selectedPerkConfig >> "displayName");
			_ctrlTextPerkSubtitle ctrlSetText getText (_selectedPerkConfig >> "subtitle");
			_ctrlStrucTextDescription ctrlSetStructuredText parseText getText (_selectedPerkConfig >> "description");

			private _iterate = {
			    {
			    	private _ret = false;
			        private _first = _x param[0];
			        if (_first isEqualType []) then {
			            if (_first param[0] isEqualTo _toFind) then {
			                _ownsPerk = _first param[1];
			            } else {
			                if (_first param[1]) then {
			                    (_x param[1]) call _iterate;
			                };
			            };
			        } else {
			            if (_first isEqualTo _toFind) then {
			                _ownsPerk = _x param[1];;
			            };
			        };
			    } forEach _this;
			};

			private _toFind = configName _selectedPerkConfig;
			private _ownsPerk = false;
			private _requiredPerk = getText (_selectedPerkConfig >> "requiredPerk");
			private _hasRequiredLevel = ((getNumber (_selectedPerkConfig >> "requiredLevel")) <= life_currentExpLevel);
			private _limitedToFactions = getArray (_selectedPerkConfig >> "limitToSides");
			private _hasParents = if (_requiredPerk != "") then {[life_currentExpPerks, getText (_selectedPerkConfig >> "requiredPerk")] call mav_ttm_fnc_hasPerk;} else {true};

			life_currentExpPerks call _iterate;

			if (((count _limitedToFactions) == 0) || {(str playerSide) in _limitedToFactions}) then {
				if (_hasRequiredLevel) then {
					if (_hasParents) then {
						if (!_ownsPerk) then {
							if ((getNumber (_selectedPerkConfig >> "requiredPerkPoints")) > life_currentPerkPoints) then {
								_ctrlBtnPurchase ctrlSetText "INSUFFICIENT POINTS";
								_ctrlBtnPurchase ctrlEnable false;
							} else {
								_ctrlBtnPurchase ctrlSetText "PURCHASE";
								_ctrlBtnPurchase ctrlEnable true;
							};
						} else {
							_ctrlBtnPurchase ctrlSetText "ALREADY UNLOCKED";
							_ctrlBtnPurchase ctrlEnable false;
						};
					} else {
						_ctrlBtnPurchase ctrlSetText "NOT PURCHASABLE";
						_ctrlBtnPurchase ctrlEnable false;
					};
				} else {
					_ctrlBtnPurchase ctrlSetText "HIGHER LEVEL REQ.";
					_ctrlBtnPurchase ctrlEnable false;
				};
			} else {
				_ctrlBtnPurchase ctrlSetText "WRONG FACTION";
				_ctrlBtnPurchase ctrlEnable false;
			};
		};

		case "onButtonPurchaseClick":
		{
			private _selectedPerkConfig = missionConfigFile >> "Maverick_TTM" >> "Perks" >> (_ctrlTreeOverview tvData (tvCurSel _ctrlTreeOverview));

			_perkPoints = getNumber (_selectedPerkConfig >> "requiredPerkPoints");

			if ((life_currentPerkPoints - _perkPoints) < 0) exitWith {};


			private _toFind = configName _selectedPerkConfig;

			private _exit = false;
			private _iterate = {
			    {
			        private _first = _x param[0];
			        if (_first isEqualType []) then {
			            if (_first param[0] isEqualTo _toFind) then {
			                _first set [1, true];
			                _exit = true;
			            } else {
			                if (_first param[1]) then {
			                    (_x param[1]) call _iterate;
			                };
			            };
			        } else {
			            if (_first isEqualTo _toFind) then {
			                _x set [1, true];
			                _exit = true;
			            };
			        };
			        if (_exit) exitWith {};
			        true
			    } count _this;
			};

			life_currentExpPerks call _iterate;

			["Perk purchased",true,"slow"] call ALSG_fnc_notificationSystem;
			_ctrlBtnPurchase ctrlSetText "PURCHASED!";
			_ctrlBtnPurchase ctrlEnable false;	
			life_currentPerkPoints = life_currentPerkPoints - (getNumber (_selectedPerkConfig >> "requiredPerkPoints"));	
			[] call _updateGUI;	
			[_selectedPerkConfig] call TTM_GUI_function_perkUnlocked;	
		    private _initScriptPath = getText (_selectedPerkConfig >> "initScript");
		    if (_initScriptPath != "") then {
		        [] spawn (compileFinal preprocessFileLineNumbers _initScriptPath);
		    };	
			[2] call mav_ttm_fnc_clientSendUpdateToServer;
			[3] call mav_ttm_fnc_clientSendUpdateToServer;
		};
	};
} catch {
	[format ["[%1] %2", "RscDisplayTalentOverview.sqf", _exception]] call BIS_fnc_error;
};