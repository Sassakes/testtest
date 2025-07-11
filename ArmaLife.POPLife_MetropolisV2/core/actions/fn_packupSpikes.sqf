/*
    File: fn_packupSpikes.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Packs up a deployed spike strip.
*/
private ["_spikes"];
_spikes = nearestObjects[getPos player,["Land_Razorwire_F"],8] select 0;
if (isNil "_spikes") exitWith {};

if ([true,"spikeStrip",1] call ALSG_fnc_handleInv) then {
    titleText[localize "STR_NOTF_SpikeStrip","PLAIN"];
    deleteVehicle _spikes;
};