params [["_target", ObjNull, [ObjNull]]];

life_antispamactive = true;
	
[] spawn {
	uiSleep 0.5;
	life_antispamactive = false;
};

_pos = (getPosASL player);;
if(surfaceIsWater _pos) exitwith {};
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};
if(player distance _target > 3) exitWith {};

_degrees = getDir player; 
_degreesu = getDir _target;
_totald = _degrees - _degreesu;

if(_totald >= -90 && _totald < 1 || _totald <= 90 && _totald > -1 || _totald >= 270 || _totald <= -270) then {

	life_knockout = true;

	player attachTo [_target, [0, -0.4, 0.1] ]; 
	detach player; 
	_obj = "Land_ClutterCutter_small_F" createVehicle (getPosATL player); 
	player switchmove "AmovPpneMstpSnonWnonDnon";
	_obj setPosATL (getPosATL player);  
	player attachTo [_obj,[0,-0.3,0.7]]; 
	detach player;	
	[_target,profileName] remoteExecCall ["ALSG_fnc_crashTackled",_target];
	uiSleep 3;
	life_knockout = false;
	deleteVehicle _obj;

} else {
	["You must be behind your target to tackle them.",false,"slow"] call ALSG_fnc_notificationSystem;
};





