#include "..\..\script_macros.hpp"
	
private ["_maxMembers","_slotUpgrade","_upgradePrice"];
_maxMembers = group player getVariable ["gang_maxMembers",50];
_slotUpgrade = _maxMembers + 4;

private _gangSettings = MAIN_SETTINGS("GameSettings","Gangs");
_upgradePrice = round(_slotUpgrade * (getNumber(_gangSettings >> "gang_upgradeBase")) / (getNumber(_gangSettings >> "gang_upgradeMultiplier")));

_action = [
    format [(localize "STR_GNOTF_MaxMemberMSG")+ "<br/><br/>" +(localize "STR_GNOTF_CurrentMax")+ "<br/>" +(localize "STR_GNOTF_UpgradeMax")+ "<br/>" +(localize "STR_GNOTF_Price")+ " <t color='#8cff9b'>$%3</t>",_maxMembers,_slotUpgrade,[_upgradePrice] call ALSG_fnc_numberText],
    localize "STR_Gang_UpgradeMax"
] call ALSG_fnc_sendWarning;

if (_action) then {
    if (BANK < _upgradePrice) exitWith {
        [parseText format[(localize "STR_GNOTF_NotEoughMoney_2")+ "<br/><br/>" +(localize "STR_GNOTF_Current")+ " <t color='#8cff9b'>$%1</t><br/>" +(localize "STR_GNOTF_Lacking")+ " <t color='#FF0000'>$%2</t>", [BANK] call ALSG_fnc_numberText, [_upgradePrice - BANK] call ALSG_fnc_numberText],true,"slow"] call ALSG_fnc_notificationSystem;
    };
    [_upgradePrice,true] call ArmaLife_AC_Bank;

    [1] call ALSG_fnc_updatePartial;
    group player setVariable ["gang_maxMembers",_slotUpgrade,true];

    [parseText format[localize "STR_GNOTF_UpgradeSuccess",_maxMembers,_slotUpgrade,[_upgradePrice] call ALSG_fnc_numberText],true,"slow"] call ALSG_fnc_notificationSystem;

    if (life_HC_isActive) then {
        [2,group player] remoteExec ["HC_fnc_updateGang",HC_Life];
    } else {
        [2,group player] remoteExec ["TON_fnc_updateGang",RSERV];
    };

} else {
    [localize "STR_GNOTF_UpgradeCancel",true,"slow"] call ALSG_fnc_notificationSystem;
};
