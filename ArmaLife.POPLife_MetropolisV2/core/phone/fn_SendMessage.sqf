params [
	["_number", "", [""]]
];

if (isNil "ArmaLife_Phone_MessageLastSent") then {
	ArmaLife_Phone_MessageLastSent = 0;
};

if (_number isEqualTo "") exitWith {};

if (serverTime <= (ArmaLife_Phone_MessageLastSent + 1)) exitWith {
	["You can't messages that quickly.",true,"slow"] call ALSG_fnc_notificationSystem;
};

private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];

if (isNull _display) exitWith {};

private _messageToObject = objNull;
{
	if ((_x getVariable ["ArmaLife_PhoneNumber", ""]) isEqualTo _number) exitWith {
		_messageToObject = _x;
	};
} forEach playableUnits;

if (isNull _messageToObject) exitWith {
	["The number you are trying to send a message to is currently unavailable.",true,"slow"] call ALSG_fnc_notificationSystem;
};

private _messageBox = _display displayCtrl 230005;
private _message = ctrlText _messageBox;

private _temp = _message splitString "";
private _newArr = [];
{
	if !(_x isEqualTo '"') then {
		_newArr pushBack _x;
	};
} forEach _temp;

private _message = _newArr joinString "";
private _messageToLowerTemp = toLower (ctrlText _messageBox);

if (_messageToLowerTemp isEqualTo "message sent!") exitWith {};
if (_messageToLowerTemp isEqualTo "") exitWith {};
if (([_messageToLowerTemp] call ALSG_fnc_bannedWords)) exitWith {
	["You have some banned words in your message, please check and try again.",true,"slow"] call ALSG_fnc_notificationSystem;
};

private _messageIndex = ArmaLife_Phone_Messages findIf {((_x select 0) isEqualTo _number)};
if (_messageIndex isEqualTo -1) then {
	ArmaLife_Phone_Messages pushBack [_number, [[_message, (ArmaLife_Phone_profileSettings select 2)]],0]; 
} else {
	((ArmaLife_Phone_Messages select _messageIndex) select 1) pushBack [_message, (ArmaLife_Phone_profileSettings select 2)];
};

_messageBox ctrlSetText "";
ArmaLife_Phone_MessageLastSent = serverTime;
[player, _messageToObject, _message, (ArmaLife_Phone_profileSettings select 2)] remoteExec ["ALSG_fnc_Server_MessageRelay", 2];
[_number] call ALSG_fnc_LoadMessages;
