#include "..\..\script_macros.hpp"
/*
    File: fn_bankWithdraw.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Withdraws money from the players account
*/
private _value = parseNumber (ctrlText 123);

if (_value > 999999) exitWith {[localize "STR_ATM_WithdrawMax",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_value < 0) exitWith {};
if (!([str(_value)] call ALSG_fnc_isNumber)) exitWith {[localize "STR_ATM_notnumeric",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_value > BANK) exitWith {[localize "STR_ATM_NotEnoughFunds",true,"slow"] call ALSG_fnc_notificationSystem;};
if (_value < 100 && BANK > 20000000) exitWith {[localize "STR_ATM_WithdrawMin",true,"slow"] call ALSG_fnc_notificationSystem;}; //Temp fix for something.

[_value] call ArmaLife_AC_Cash;
[_value,true] call ArmaLife_AC_Bank;
[format[localize "STR_ATM_WithdrawSuccess",[_value] call ALSG_fnc_numberText],true,"slow"] call ALSG_fnc_notificationSystem;
[] call ALSG_fnc_atmMenu;
[] spawn ALSG_fnc_hudUpdate;
[6] call ALSG_fnc_updatePartial;