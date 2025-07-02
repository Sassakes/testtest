#include "..\..\script_macros.hpp"

private ["_value","_unit","_tax"];
if(life_antispamactive isEqualTo true) exitWith {closeDialog 0; ["You must wait 3 seconds in between bank transfers.",true,"slow"] call ALSG_fnc_notificationSystem};

_value = parseNumber (ctrlText 123);
_unit = call compile format ["%1",(lbData[122,(lbCurSel 122)])];
if (isNull _unit) exitWith {};
if ((lbCurSel 122) isEqualTo -1) exitWith {[localize "STR_ATM_NoneSelected",true,"slow"] call ALSG_fnc_notificationSystem;};
if (isNil "_unit") exitWith {[localize "STR_ATM_DoesntExist",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_value > 999999) exitWith {[localize "STR_ATM_TransferMax",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_value < 0) exitWith {};
if (!([str(_value)] call ALSG_fnc_isNumber)) exitWith {[localize "STR_ATM_notnumeric",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_value > BANK) exitWith {[localize "STR_ATM_NotEnoughFunds",true,"slow"] call ALSG_fnc_notificationSystem;};

private _gameSettings = MAIN_SETTINGS("GameSettings","Player"); 
_tax = _value * getNumber(_gameSettings >> "bank_transferTax");
_tax = ceil _tax;
if ((_value + _tax) > BANK) exitWith {[format[localize "STR_ATM_SentMoneyFail",_value,_tax],true,"slow"] call ALSG_fnc_notificationSystem;};
life_antispamactive = true;

_value = (_value + _tax);
[_value,true] call ArmaLife_AC_Bank;

_valueToSend = (_value - _tax);
[_valueToSend,player] remoteExecCall ["ALSG_fnc_wireTransfer",_unit];
[] call ALSG_fnc_atmMenu;
[1] call ALSG_fnc_updatePartial;
[format[localize "STR_ATM_SentMoneySuccess",[_valueToSend] call ALSG_fnc_numberText,name _unit,[_tax] call ALSG_fnc_numberText],true,"slow"] call ALSG_fnc_notificationSystem;
[format["%1/%2 transfered %3/%4 $%5",profileName,(getPlayerUID player),name _unit,getPlayerUID _unit,_valueToSend], "money.log"] remoteExec ["AH_LogInterface",2];
	
[] spawn {
	sleep 3;
	life_antispamactive = false;
};
