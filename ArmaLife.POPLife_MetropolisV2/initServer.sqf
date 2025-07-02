/*
    File: initServer.sqf
    Author:

    Description:
    Starts the initialization of the server.
*/
if (!(_this select 0)) exitWith {}; //Not server

[] call compile preprocessFile "\ArmaLife_Server\init.sqf";
missionNamespace setVariable ["ArmaLife_MajorCrime",time,true];
missionNamespace setVariable ["ArmaLife_StartTime",time,true];