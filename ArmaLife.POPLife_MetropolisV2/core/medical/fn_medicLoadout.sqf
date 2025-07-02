#include "..\..\script_macros.hpp"
/*
    File: fn_medicLoadout.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Loads the medic out with the default gear.
*/
private ["_handle"];
_handle = [] spawn ALSG_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player forceAddUniform "travis_emsemtuniform";
player addBackpack "B_TacticalPack_blk";
player addHeadgear "H_Cap_marshal";
player linkItem "RoleplayRadio";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player addItem "Medikit";

[true,"cprKit",1] call ALSG_fnc_handleInv;
[true,"personallight",1] call ALSG_fnc_handleInv;
[true,"toolkit",1] call ALSG_fnc_handleInv;
[true,"donuts",2] call ALSG_fnc_handleInv;
[true,"waterBottle",2] call ALSG_fnc_handleInv;

[] call ALSG_fnc_saveGear;