	

params [["_civ", Objnull, [Objnull]]];
if(isNull _civ) exitWith {};

	
[] spawn
{
	private["_time"];
	while {true} do
	{
		uisleep 5;
		
		if(!(player getVariable["blindfolded", false])) exitWith {};

		if(!(player getVariable["restrained", false])) exitwith {
			player setVariable["blindfolded", nil, true];
			["You managed to remove the blindfold!",true,"slow"] call ALSG_fnc_notificationSystem;
		};

		if(!([east,getPos player,50] call ALSG_fnc_nearUnits) && !([civilian,getPos player,50] call ALSG_fnc_nearUnits) && (player getVariable["blindfolded", false]) && isNull objectParent player) exitWith {

			player setVariable["blindfolded", nil, true];
			"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 1],  [0, 0, 0, 0.0]]; 
			"colorCorrections" ppEffectCommit 3;
			"colorCorrections" ppEffectEnable false;	
			["You managed to remove the blindfold!",true,"slow"] call ALSG_fnc_notificationSystem;
		};
	};
};

cutText ["Removed Blindfold!","PLAIN",2];	

cutText["You are blindfolded.","PLAIN",0,true];

"colorCorrections" ppEffectEnable true;			
"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 0.01],  [0, 0, 0, 0.0]]; 
"colorCorrections" ppEffectCommit 0.3;

removeHeadGear player;
player addheadgear "mgsr_headbag";

[] spawn {
	while {true} do
	{	
		if(!(player getvariable ["blindfolded", false])) exitWith {
			cutText ["You are no longer blind folded.!","PLAIN",2];	
			player setVariable ["blindfolded", nil, true];
		};
		if(deadPlayer) exitWith
		{
			cutText ["You are no longer blind folded.!","PLAIN",2];	
			player setVariable ["blindfolded", nil, true];
		};

		if !(isNull(objectParent player)) then
		{
			if(driver (objectParent player) == player) then {
				player action["eject",objectParent player];
			};
		};
		uiSleep 1;
		"colorCorrections" ppEffectEnable true;			
		"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 0.01],  [0, 0, 0, 0.0]]; 
		"colorCorrections" ppEffectCommit 0.3;
	};

	"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 1],  [0, 0, 0, 0.0]]; 
	"colorCorrections" ppEffectCommit 3;
	"colorCorrections" ppEffectEnable false;	

	removeHeadGear player;
	if(!deadPlayer) then
	{
		player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
		player setVariable ["blindfolded", nil, true];
		detach player;
	};
};