params [["_amount", -1, [-1]], ["_pos", [], [[]]]];

// Error checks
if (count _pos != 3) exitWith {};
if (_amount isEqualTo -1) exitWith {};
if (_amount < 1) exitWith {};

private _moneyStack = createSimpleObject ["Land_money_F", [0,0,0]];
_moneyStack setPosATL _pos;
_moneyStack setVariable ["ArmaLife_DroppedItem",["ArmaLife_DroppedMoney",_amount],true];
_moneyStack setVariable ["ArmaLife_ItemOwner", [profileName, getPlayerUID player], true];
[_moneyStack] remoteExecCall ["ALSG_fnc_simDisable",0];

[_amount,true] call ArmaLife_AC_Cash;
[0] call ALSG_fnc_updatePartial;