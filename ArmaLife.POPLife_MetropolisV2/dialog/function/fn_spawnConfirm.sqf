/*
    File: fn_spawnConfirm.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Spawns the player where he selected.
*/
closeDialog 0;
cutText ["","BLACK IN"];
player cameraEffect ["terminate","back"];
camDestroy _camera;
showCinemaBorder false;

// Switch player to 3rd person view
player switchCamera "EXTERNAL";

// Remove splash noise
"SPLASHNOISE" cutText ["", "PLAIN"];

[] spawn {
	5 fadeMusic 0;
	sleep 5;
	playMusic ""; 
};

[] call ALSG_fnc_hudSetup;
[] remoteExec ["ArmaLife_PropertyTaxCheckLogin",2];
[] remoteExec ["ArmaLife_WealthTaxCheckLogin",2];