#include "..\..\script_macros.hpp"
/*
    File: fn_putInCar.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Finds the nearest vehicle and loads the target into the vehicle.
*/
private ["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !isPlayer _unit) exitWith {};

_nearestVehicle = nearestObjects[player,["Car","Ship","Submarine","Air"],10] select 0;
if (isNil "_nearestVehicle") exitWith {[localize "STR_NOTF_VehicleNear",true,"slow"] call ALSG_fnc_notificationSystem;};

detach _unit;
[_nearestVehicle] remoteExecCall ["ALSG_fnc_moveIn",_unit];
_unit setVariable ["Escorting",false,true];