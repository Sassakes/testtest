#include "..\..\script_macros.hpp"
/*
    File: fn_dataQuery.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the 'authentication' process and sends a request out to
    the server to check for player information.
*/
private ["_uid","_side","_sender"];
if (life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
_sender = player;
_uid = getPlayerUID _sender;
_side = playerSide;

if (life_HC_isActive) then {
    [_uid,_side,_sender] remoteExec ["HC_fnc_queryRequest",HC_Life];
} else {
    [_uid,_side,_sender] remoteExec ["ALSG_fnc_queryRequest",RSERV];
};
