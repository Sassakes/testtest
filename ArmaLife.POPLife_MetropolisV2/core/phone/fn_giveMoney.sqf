#include "..\..\script_macros.hpp"

private _display = uiNamespace getVariable ["ArmaLife_Phone",displayNull];

	
if (isNull _display) exitWith {};

if !(life_use_atm) exitWith {["You cannot do that you just commited a crime!",true,"slow"] call ALSG_fnc_notificationSystem;};

private _plist = _display displayCtrl 120002;
private _amountCtrl = _display displayCtrl 120003;

private _amountStr = ctrlText _amountCtrl;

private _isNumber = [_amountStr] call ALSG_fnc_isNumber;

if !(_isNumber) exitWith {
	["You must enter a number for this to work!",true,"slow"] call ALSG_fnc_notificationSystem;
};

if (CASH < (parseNumber _amountStr)) exitWith {
	["You do not have enough cash on you to complete this transaction!",true,"slow"] call ALSG_fnc_notificationSystem;
};

private _plistSelection = lbCurSel _plist;
private _plistData = _plist lbData _plistSelection;

if (_plistData isEqualTo "") exitWith {};

private _unit = call (compile _plistData);

if (isNil "_unit") exitWith {};
if (isNull _unit) exitWith {};

_value = (parseNumber _amountStr);
[_value,true] call ArmaLife_AC_Cash;

[format["You have given $%1 to %2",([(parseNumber _amountStr)] call ALSG_fnc_numberText), name _unit],true,"slow"] call ALSG_fnc_notificationSystem;
[player, (parseNumber _amountStr)] remoteExec ["ALSG_fnc_ReceiveMoney", _unit];

[format["%1/%2 gave $%3 to %4/%5",(name player),(getPlayerUID player),_value,(name _unit), (getPlayerUID _unit)], "money.log"] remoteExec ["AH_LogInterface",2];

[] call ALSG_fnc_LoadMoneyMenu;
[6] call ALSG_fnc_updatePartial;