private _display = uiNamespace getVariable ["ArmaLife_Phone",displayNull];
if (life_antispam isEqualTo 1) exitWith {["You must wait 1 second before pulling your phone out again.",true,"slow"] call ALSG_fnc_notificationSystem};

if (isNull _display) then {
  createDialog "ArmaLife_Phone";
  _display = uiNamespace getVariable ["ArmaLife_Phone",displayNull];
};

if (isNil "ArmaLife_Phone_CurrentlyOpen") then {ArmaLife_Phone_CurrentlyOpen = ""};

if (isNil "ArmaLife_EMS_Messages") then {
  ArmaLife_EMS_Messages = [];
};

private _backgroundConfig = "true" configClasses (missionconfigfile >> "ArmaLife_Backgrounds");
private _curBackground = profileNamespace getVariable ["ArmaLife_Phone_Background",""];

if (_curBackground isEqualto "") then {
  _curBackground = configName (_backgroundConfig select 0);
  profileNamespace setVariable ["ArmaLife_Phone_Background", _curBackground];
};

ArmaLife_OldDisplays = [];
if (isNil "ArmaLife_Phone_eMessages") then {
  ArmaLife_Phone_eMessages = [];
};

private _backgroundConfig = (missionconfigfile >> "ArmaLife_Backgrounds");
private _thisConfig = (_backgroundConfig >> _curBackground);
private _backgroundImage = getText(_thisConfig >> "image");
private _imagePath = format ["%1",_backgroundImage];

private _backgroundImage = _display displayCtrl 987;
private _background2Image = _display displayCtrl 988;

_background2Image ctrlSetText _imagePath;
_backgroundImage ctrlSetText _imagePath;

ArmaLife_Phone_BackgroundControlMouseup = false;

private _serverTag = getText (missionconfigfile >> "ArmaLife_Core_Settings" >> "ServerTag");
ArmaLife_Phone_profileSettings = profileNamespace getVariable [format ["%1_ArmaLife_Phone_profileSettings", _serverTag], []];

if (ArmaLife_Phone_profileSettings isEqualto []) exitWith {
  [] spawn ALSG_fnc_StartSetup;
};

player setVariable ["ArmaLife_PhoneNumber", (ArmaLife_Phone_profileSettings select 2), true];

['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;
playSound "openphone";

// life_antispam = 1;

// [] spawn {
//     _phone = "The_Programmer_Iphone_Model" createVehicle (position player);
//     _phone attachTo [player,[-0.034,0.02,0.075],"righthandmiddle1"];
//     _phone setVectorDirAndUp [[0,0.66,-0.33],[0,0.33,0.66]];
//     player playAction "The_Programmer_Holdphone";
//     waituntil {uisleep 1; ((isNull (findDisplay 19931)));};
//     deleteVehicle _phone;
//     player playAction "gesturenod";
//     sleep 1; 
//     life_antispam = 0;
// };