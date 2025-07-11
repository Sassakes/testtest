#include "..\..\script_macros.hpp"
/*
    File: fn_robReceive.sqf
    Author: Bryan "Tonic" Boardwine

    Description:

*/
params [
    ["_cash",0,[0]],
    ["_victim",objNull,[objNull]],
    ["_robber",objNull,[objNull]]
];

if (isNull _victim || isNull _robber) exitWith {};
if (_robber isEqualTo _victim) exitWith {};
if (_cash isEqualTo 0) exitWith {[localize "STR_Civ_RobFail",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_cash >= 1000000) exitWith {};

[_cash] call ArmaLife_AC_Cash;

[0] call ALSG_fnc_updatePartial;
[format[localize "STR_Civ_Robbed",[_cash] call ALSG_fnc_numberText],true,"slow"] call ALSG_fnc_notificationSystem;