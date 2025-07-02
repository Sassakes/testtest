#include "..\..\script_macros.hpp"
params [
	["_playerWhoReved",objNull,[objNull]]
];
private ["_dir"];
player setVariable ["life_is_alive", true, true];
[life_save_gear] spawn ALSG_fnc_loadDeadGear;
_dir = getDir life_corpse;

1 cutFadeOut 1;
["ArmaLife_Bleedout_efHandle", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
ArmaLife_BleedoutStart = nil;
ArmaLife_BleedoutDuration = nil;
ArmaLife_Bleedout_efHandle = nil;
life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

player setDir _dir;
player setPosATL (getPosATL _playerWhoReved);
life_corpse setVariable ["Revive",nil,true];
deleteVehicle life_corpse;

life_action_inUse = false;
EM_climbing = false;
EM_enable = [true, true];

player setVariable ["Revive",nil,true];
player setVariable ["Reviving",nil,true];
if (player getVariable "ArmaLife_Stabilized" > 0) then {
	player setVariable ["ArmaLife_Stabilized",0,true];
};

[] call ALSG_fnc_playerSkins;
[] call ALSG_fnc_hudUpdate;
[] call ALSG_fnc_updateRequest;

player setDamage (_playerWhoReved getVariable ["mav_ttm_var_cprFull",0.6]);

[] spawn {
	sleep 5;
	[] call ALSG_fnc_updateRequest;
};
