/*
    File: fn_medicRequest.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Notifies the medics that someone has requested emergency and prompts them
    if they want to take the request or not.
*/
params [["_caller",objNull,[objNull]]];
if (isNull _caller) exitWith {};

_player = _caller getVariable ["CorpsePlayer",objNull];
if (isNull _player) exitWith {};

[format["%1 is in need of you medical assistance, please check the map to find them.",name _player],false,"slow"] call ALSG_fnc_notificationSystem;