#include "..\..\script_macros.hpp"
/*
    File: fn_buyLicense.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called when purchasing a license. May need to be revised.
*/
private ["_type","_varName","_displayName","_sideFlag","_price"];
_type = _this select 3;

if (!isClass (missionConfigFile >> "Licenses" >> _type)) exitWith {}; //Bad entry?
_displayName = M_CONFIG(getText,"Licenses",_type,"displayName");
_price = M_CONFIG(getNumber,"Licenses",_type,"price");
_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
_varName = LICENSE_VARNAME(_type,_sideFlag);

if (CASH < _price) exitWith {[format [localize "STR_NOTF_NE_1",[_price] call ALSG_fnc_numberText,localize _displayName],true,"slow"] call ALSG_fnc_notificationSystem;};
[_price,true] call ArmaLife_AC_Cash;

[0] call ALSG_fnc_updatePartial;

titleText[format [localize "STR_NOTF_B_1", localize _displayName,[_price] call ALSG_fnc_numberText],"PLAIN"];
missionNamespace setVariable [_varName,true];

[2] call ALSG_fnc_updatePartial;
