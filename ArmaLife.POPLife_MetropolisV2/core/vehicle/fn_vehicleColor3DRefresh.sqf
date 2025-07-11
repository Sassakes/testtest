/*
    File: fn_vehicleColor3DRefresh.sqf
    Author: 
    Modified: NiiRoZz

    Description:
    Called when a new selection is made in the rsc box and paint the vehicle with the color selected.
*/
disableSerialization;
_display = findDisplay 2300;
_colorIndex = lbValue[2304,(lbCurSel 2304)];
if (isNull life_preview_3D_vehicle_object) exitWith {};

[life_preview_3D_vehicle_object,_colorIndex] call ALSG_fnc_colorVehicle;