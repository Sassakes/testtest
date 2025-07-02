params [
	["_arr", [], [[]]]
];

if (_arr isEqualTo []) exitWith {};

if (isNil "ArmaLife_EMS_Messages") then {
  ArmaLife_EMS_Messages = [];
};

_arr params [
	"_side",
	"_number",
	"_name",
	"_message",
	"_pos",
	"_timeSent"
];

private _prefix = getText (missionconfigfile >> "ArmaLife_Core_Settings" >> "phoneNumberPrefix");
private _numberTemp = format ["%1%2", _prefix, _number];

[format["There is a new %1 request from %2 (%3), Check the Dispatch!",_side, _name, _numberTemp],true,"slow"] call ALSG_fnc_notificationSystem;

ArmaLife_EMS_Messages pushBack _arr;

if (isNil "ArmaLife_Phone_CurrentlyOpen") then {ArmaLife_Phone_CurrentlyOpen = ""};
if (ArmaLife_Phone_CurrentlyOpen == "ArmaLife_MessagesEmergency") then {
	{
		ctrlDelete _x;
	} forEach ArmaLife_EMS_Messages_controls;
	[] spawn ALSG_fnc_OpenEmergencyMessage;
};
