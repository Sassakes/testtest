#include "..\..\script_macros.hpp"
/*
    File: fn_bountyReceive.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Notifies the player he has received a bounty and gives him the cash.
*/
private ["_val","_total"];
_val = [_this,0,"",["",0]] call BIS_fnc_param;
_total = [_this,1,"",["",0]] call BIS_fnc_param;

if (_val == _total) then {
    titleText[format [localize "STR_Cop_BountyRecieve",[_val] call ALSG_fnc_numberText],"PLAIN"];
} else {
    titleText[format [localize "STR_Cop_BountyKill",[_val] call ALSG_fnc_numberText,[_total] call ALSG_fnc_numberText],"PLAIN"];
};

[_val] call ArmaLife_AC_Bank;
[1] call ALSG_fnc_updatePartial;