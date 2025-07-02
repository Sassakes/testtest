if(playerSide != west) exitWith {}; 
if(life_callBackup > time) exitWith {["You're not able to make a new call again so fast!",true,"slow"] call ALSG_fnc_notificationSystem;};

[player,120,false] remoteExec ["ALSG_fnc_backupCall",west];
life_callBackup = time + 300;

[false,"panicbutton",1] call ALSG_fnc_handleInv;
