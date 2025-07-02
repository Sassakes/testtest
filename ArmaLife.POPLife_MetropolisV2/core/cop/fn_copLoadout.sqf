/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn ALSG_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "AL_Police0";
player addBackpack "AL_PoliceBelt";
player addHeadGear "AL_PoliceHat";
player addWeapon "taser";
player addMagazines ["vvv_np_magazine_taser",5];

player linkItem "RoleplayRadio";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemGPS";

[true,"keyCard",1] call ALSG_fnc_handleInv;
[true,"panicbutton",1] call ALSG_fnc_handleInv;
[true,"toolkit",1] call ALSG_fnc_handleInv;
[true,"donuts",2] call ALSG_fnc_handleInv;
[true,"waterBottle",2] call ALSG_fnc_handleInv;
[true,"spikeStrip",1] call ALSG_fnc_handleInv;

player setVariable ["copLevel",1,true];
call ALSG_fnc_setFreq;
