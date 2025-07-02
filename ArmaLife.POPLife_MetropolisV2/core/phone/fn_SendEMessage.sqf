params [
	["_type", "", [""]]
];

if (_type isEqualTo "") exitWith {["FUCK",true,"slow"] call ALSG_fnc_notificationSystem;};

private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];

if (isNull _display) exitWith {};

private _sideToNotify = if (_type isEqualto "cop") then {WEST} else {INDEPENDENT};
private _messageBox = _display displayCtrl 800005;
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
if (_messageToLowerTemp isEqualTo "type message here") exitWith {};
if (([_messageToLowerTemp] call ALSG_fnc_bannedWords)) exitWith {
	["You have some banned words in your message, please check and try again",true,"slow"] call ALSG_fnc_notificationSystem;
};

private _toTitle = if (_type isEqualto "cop") then {"Cop"} else {"Medic"};

ArmaLife_Phone_eMessages pushBack [_toTitle, serverTime, _message];
private _name = (name player);
private _pos = (position player);
private _timeSent = serverTime;

private _toArr = [_toTitle, (ArmaLife_Phone_profileSettings select 2), _name, _message, _pos, _timeSent];
[_toArr] remoteExec ["ALSG_fnc_ReceiveEMessage", _sideToNotify];
_messageBox ctrlSetText "Message Sent!";
