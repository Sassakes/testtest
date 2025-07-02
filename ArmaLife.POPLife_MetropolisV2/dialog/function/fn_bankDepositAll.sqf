#include "..\..\script_macros.hpp"
private ["_value"];

_value = CASH;
if (_value <= 0) exitWith {["Nothing to deposit.",true,"slow"] call ALSG_fnc_notificationSystem;};

[_value,true] call ArmaLife_AC_Cash;
[_value] call ArmaLife_AC_Bank;

[format[localize "STR_ATM_DepositSuccess",[_value] call ALSG_fnc_numberText],true,"slow"] call ALSG_fnc_notificationSystem;
[] call ALSG_fnc_atmMenu;
[] spawn ALSG_fnc_hudUpdate;
[6] call ALSG_fnc_updatePartial;