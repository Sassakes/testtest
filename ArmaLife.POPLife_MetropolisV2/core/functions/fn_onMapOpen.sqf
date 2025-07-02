params ["_mapIsOpened", "_mapIsForced"];

if (_mapIsOpened) then {
    if ( playerSide isEqualTo independent ) then {[] spawn ALSG_fnc_medicMarkers;};
};