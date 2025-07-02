#include "..\..\script_macros.hpp"
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_Pos","_rndmrk","_mrkstring","_oldRob"];
params [
	["_shop",objNull,[objNull]],
	["_robber",objNull,[objNull]]
];

_oldRob = (_shop getVariable ["robbing", objNull]);
_blacklistedWeapons = MAIN_SETTINGS_TYPE(getArray,"MajorCrimes","blacklistedWeapons");
if ((west countSide playableUnits) < 1) exitWith {[format["There are %1 cop(s) online, 1 cop are needed." ,(west countSide playableUnits)],true,"slow"] call ALSG_fnc_notificationSystem;};
if(!(side _robber isEqualTo civilian)) exitWith {["What do you think you are doing?",true,"slow"] call ALSG_fnc_notificationSystem;};
if((_oldRob isEqualTo player) || !(_oldRob isEqualTo objNull)) exitWith {["This shop is already being robbed, no spam robbing!",true,"slow"] call ALSG_fnc_notificationSystem;};
if(_robber distance _shop > 10) exitWith {["You need to be within 10 meters to rob this shop!",true,"slow"] call ALSG_fnc_notificationSystem;};
if !(isNull (objectParent player)) exitWith {["Get out of your car!",true,"slow"] call ALSG_fnc_notificationSystem;};
if ((_shop getVariable ["robTime",0]) >= time) exitWith {["The store has recently been robbed!",true,"slow"] call ALSG_fnc_notificationSystem;};
if (currentWeapon _robber isEqualTo "") exitWith {["You cannot rob anyone without the proper equipment, get a gun first!",true,"slow"] call ALSG_fnc_notificationSystem;};
if ((currentWeapon _robber) in _blacklistedWeapons) exitWith {["You don't intimidate me with that, is this a joke?",true,"slow"] call ALSG_fnc_notificationSystem;};
if !(alive _robber) exitWith {};

_var = missionNamespace getVariable ["ArmaLife_StartTime",time];
if ((time - _var) < 600) exitWith {["My shop has just been setup, give me 10 minutes from uptime before robbing!",true,"slow"] call ALSG_fnc_notificationSystem;};

_distanceFromCapital = (player distance [8569,6598,0]) * 1.5;
_rand = (random [5000,20000,40000]);

_kassa = _rand - _distanceFromCapital;
if (_kassa < 0) then {
    _kassa = (random [5000,6000,8500]);
};

_kassa = round _kassa;
_shop setVariable ["robbing", player, true];

_getlocation = [_shop] call ArmaLife_Lib_GetNearestLocation;
[format["ALARM! - Robbery in progress near %1", _getlocation],false,"slow"] remoteExec ["ALSG_fnc_notificationSystem",west];

//Setup the progress bar
_title = "Robbing the Store, stay within 10m";
_icon = "\ArmalifeCore\images\displays\displayCommunicationTargets\police.paa";

disableSerialization;
"progressBar" cutRsc ["ArmaLife_Progress","PLAIN"];
_ui = uiNamespace getVariable "ArmaLife_Progress";
_controlsGroup = _ui displayCtrl 1;
_progress = _controlsGroup controlsGroupCtrl 3;
_pgText = _controlsGroup controlsGroupCtrl 2;
_pgText ctrlSetStructuredText parseText format ["<img image='%2' size='%4' shadow='0' align='left' /><t shadow='0' align='left'> </t><t shadow='0' font='RobotoCondensedLight' align='left'>%1</t><t shadow='0' font='RobotoCondensedLight' align='right'>%3</t>", _title, _icon, "1" + "%", (100 * (pixelH * pixelGrid * 0.50))];
_progress progressSetPosition 0.01;
_cP = 0.01;

_rndmrk = random(1000);
_mrkstring = format ["wrgMarker_%1", _rndmrk];
[_mrkstring,[0,0,0],"Robbery"] remoteExec ["ArmaLife_Lib_CreateMarker", 2];
while {true} do
{
	uiSleep 3.00;
	_cP = _cP + (0.01 * (missionNamespace getVariable ["mav_ttm_var_robbingMultiplier", 1]));
	_progress progressSetPosition _cP;
    _precentage = str round(_cP * 100) + "%";
    _pgText ctrlSetStructuredText parseText format ["<img image='%2' size='%4' shadow='0' align='left' /><t shadow='0' align='left'> </t><t shadow='0' font='RobotoCondensedLight' align='left'>%1</t><t shadow='0' font='RobotoCondensedLight' align='right'>%3</t>", _title, _icon, _precentage, (100 * (pixelH * pixelGrid * 0.50))];
    
	if (_cP >= 1) exitWith {};
    if (player getVariable ["inHostage",false]) exitWith {};
	if (!alive _robber) exitWith {};
	if (_robber distance _shop > 10) exitWith {};
	if ((_robber getVariable["restrained",false])) exitWith {};
	if (!((_shop getVariable ["robbing", objNull]) isEqualTo player)) exitWith {};
	if (life_istazed) exitWith {};
	if (currentWeapon _robber isEqualTo "" || (currentWeapon _robber) in _blacklistedWeapons) exitWith {};
	if !(isNull objectParent player) exitWith {};
};

"progressBar" cutText ["","PLAIN"];
if (!((_shop getVariable ["robbing", objNull]) isEqualTo player)) exitWith { ["You are not robbing the store.",false,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call ALSG_fnc_hudUpdate;};
_shop setVariable ["robbing", objNull, true];
if!(alive _robber) exitWith {  call ALSG_fnc_hudUpdate;  };
if(_robber distance _shop > 10) exitWith {  ["You are too far away, robbery failed!",false,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"];call ALSG_fnc_hudUpdate; };
if(_robber getVariable "restrained") exitWith {  ["You have been arrested!",false,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call ALSG_fnc_hudUpdate; };
if(life_istazed) exitWith { ["You have been downed!",false,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call ALSG_fnc_hudUpdate; };
if (_robber getVariable ["inHostage",false]) exitWith {["You have been taken hostage, action canceled.",true,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"];call ALSG_fnc_hudUpdate;};
if !(isNull objectParent player) exitWith {[localize "STR_NOTF_ActionInVehicle",true,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call ALSG_fnc_hudUpdate;};
if (currentWeapon _robber isEqualTo "") exitWith {["You cannot rob anyone without the proper equipment, get a gun first!",true,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call ALSG_fnc_hudUpdate;};
if ((currentWeapon _robber) in _blacklistedWeapons) exitWith {["You don't intimidate me with that, is this a joke?",true,"slow"] call ALSG_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call ALSG_fnc_hudUpdate;};

_shop setVariable ["robTime", time + 600, true];

_noATMTime = MAIN_SETTINGS_TYPE(getNumber,"MajorCrimes","noatm_timer");
[_noATMTime] spawn {
    params["_noATMTime",5,[5]];
	life_use_atm = false;
	sleep 60 * _noATMTime;
	life_use_atm = true;
};

[format["You have recieved $%1 from the robbery, run!!",[_kassa] call ALSG_fnc_numberText],false,"slow"] call ALSG_fnc_notificationSystem;
[_kassa] call ArmaLife_AC_Cash;

["robshop"] spawn mav_ttm_fnc_addExp;
[] call ALSG_fnc_hudSetup;
[0] call ALSG_fnc_updatePartial;

playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
if!(alive _robber) exitWith {};

[format["Police News: A store has just been robbed: the stolen ammount of money was $%1!",[_kassa] call ALSG_fnc_numberText],false,"slow"] remoteExec ["ALSG_fnc_notificationSystem",west];
[_robber,13] spawn ArmaLife_CREATEEVIDENCE;

if (!isNil {(group player) getVariable ["gang_name",""]}) then {
    _oldamm = (group player) getVariable ["ArmaLife_GasRobberys",0];
    _ammedit = _oldamm + 1;
    (group player) setVariable ["ArmaLife_GasRobberys",_ammedit,true];

    if ((group player) getVariable ["ArmaLife_GasRobberys",0] >= 19) then {
        _gangrole = (group player) getVariable ["gang_role",[]];
        if (_gangrole isEqualTo []) exitWith {};
            
        _gangselect = _gangrole select 0;
        if (_gangselect != 0) then {
            _task = "Armed Robbery";
            _check = [_task,_gangselect] call ArmaLife_Lib_CheckTask;
            if (!_check) then {
                [_task] remoteExec ["ArmaLife_UnlockTask",2];
                (group player) setVariable ["ArmaLife_GasRobberys",nil,true];
            };
        };
    };
};