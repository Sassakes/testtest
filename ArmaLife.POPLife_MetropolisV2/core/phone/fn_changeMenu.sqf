params [
  ["_menuToOpen", "", [""]]
];

private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];
if (isNull _display) exitWith {};
private _lastOpenDisplay = "";
if (isNil "ArmaLife_Phone_CurrentlyOpen") then {ArmaLife_Phone_CurrentlyOpen = ""};
if (isNil "ArmaLife_Phone_LastOpenDisplays") then {ArmaLife_Phone_LastOpenDisplays = []};
if (isNil "ArmaLife_Phone_OldDisplayCtrls") then {ArmaLife_Phone_OldDisplayCtrls = []};

if (_menuToOpen isEqualTo "last") then {
  _menuToOpen = ArmaLife_Phone_LastOpenDisplays select ((count ArmaLife_Phone_LastOpenDisplays) - 2);
  if (_menuToOpen isEqualTo "ArmaLife_ContactEdit") then {_menuToOpen = "ArmaLife_Buttons"};
  if (_menuToOpen isEqualTo "ArmaLife_ContactAdd") then {_menuToOpen = "ArmaLife_Buttons"};
  ArmaLife_Phone_LastOpenDisplays deleteAt ((count ArmaLife_Phone_LastOpenDisplays) - 1);
  ArmaLife_Phone_LastOpenDisplays deleteAt ((count ArmaLife_Phone_LastOpenDisplays) - 1);
  private _lastOpenDisplay = if !(ArmaLife_Phone_LastOpenDisplays isEqualto []) then {ArmaLife_Phone_LastOpenDisplays select ((count ArmaLife_Phone_LastOpenDisplays) - 1)} else {""};
} else {
  private _lastOpenDisplay = if !(ArmaLife_Phone_LastOpenDisplays isEqualto []) then {ArmaLife_Phone_LastOpenDisplays select ((count ArmaLife_Phone_LastOpenDisplays) - 1)} else {""};
};

if (_menuToOpen isEqualTo "ArmaLife_Buttons") then {ArmaLife_Phone_LastOpenDisplays = []};

private _newControls = [_menuToOpen] call ALSG_fnc_LoadNewMenu;

[_menuToOpen] spawn {
  params ["_menuToOpen"];
  waitUntil {ArmaLife_Phone_CurrentlyOpen isEqualTo _menuToOpen};
  private _onload = getText (missionconfigfile >> "ArmaLife_onLoads" >> _menuToOpen >> "onload");
  if !(_onload isEqualTo "") then {
    call (compile _onload);
  };
};

ArmaLife_Phone_CurrentlyOpen = _menuToOpen;
ArmaLife_Phone_LastOpenDisplays pushBack ArmaLife_Phone_CurrentlyOpen;

private _handle = [ArmaLife_Phone_OldDisplayCtrls] spawn ALSG_fnc_DeleteOldMenu;
waitUntil {scriptDone _handle};
ArmaLife_Phone_OldDisplayCtrls = _newControls;
