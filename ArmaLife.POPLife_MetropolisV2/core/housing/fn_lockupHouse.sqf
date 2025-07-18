#include "..\..\script_macros.hpp"
/*
    File: fn_lockupHouse.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Locks up the entire house and closes all doors.
*/
private ["_house"];
_house = param [0,objNull,[objNull]];
if (isNull _house || !(_house isKindOf "House_F")) exitWith {};

_numberOfDoors = FETCH_CONFIG2(getNumber,"CfgVehicles",(typeOf _house), "numberOfDoors");

if (_numberOfDoors isEqualTo -1 || _numberOfDoors isEqualTo 0) exitWith {}; //MEH

titleText [localize "STR_House_LockingUp","PLAIN"];

for "_i" from 1 to _numberOfDoors do {
    _house animateSource [format ["Door_%1_source", _i], 0];
    _house setVariable [format ["bis_disabled_Door_%1",_i],1,true];
};

_house setVariable ["locked",true,true];
[localize "STR_House_LockedUp",true,"slow"] call ALSG_fnc_notificationSystem;
