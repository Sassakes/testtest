#include "..\..\script_macros.hpp"
/*
    File: fn_virt_buy.sqf
    Author: Arma-Life

    Description:
    Buy a virtual item from the store.
*/
private _display = findDisplay 889922;
private _ctrlListItems = _display displayCtrl 83;
private _itemData = _ctrlListItems lnbData [lnbCurSelRow _ctrlListItems, 0];
_buyPrice = M_CONFIG(getNumber,"VirtualItems",_itemData,"buyPrice");

if (_itemData isEqualTo "") exitWith {["Item has no data, send this to a developer.",true,"slow"] call ALSG_fnc_notificationSystem};

// Make sure they cannot buy if the price is nothing
if (_buyPrice isEqualTo -1) exitWith {["You cannot purchase this item",true,"slow"] call ALSG_fnc_notificationSystem;};

private _amount = ctrlText 84;
_amount = parseNumber(_amount);
if (_amount >= 15) exitWith {["You can only purchase 15 items at a time.",true,"slow"] call ALSG_fnc_notificationSystem;};

private _successes = 0;
for "_i" from 1 to _amount do
{
    if ([_itemData,_amount,life_carryWeight,life_maxWeight] call ALSG_fnc_calWeightDiff > 0) then
    {
        _successes = _successes + 1;
    };
};

if (_successes >= 1) then
{
    private _displayName = localize (ITEM_NAME(_itemData));
    private _illegal = ITEM_ILLEGAL(_itemData);
    private _totalPurchasePrice = _buyPrice * _successes;
    if (CASH < _totalPurchasePrice) exitWith {["You do not have enough money to buy this item.",true,"slow"] call ALSG_fnc_notificationSystem;};

    [true,_itemData,_successes] call ALSG_fnc_handleInv;
    [_totalPurchasePrice,true] call ArmaLife_AC_Cash;
    [format["You bought %1x %3 for $%2",_successes,[_totalPurchasePrice] call ALSG_fnc_numberText,_displayName],false,"slow"] call ALSG_fnc_notificationSystem;
}
else
{
    ["Purchase was not successful.",true,"slow"] call ALSG_fnc_notificationSystem;
};

[] call ALSG_fnc_virt_update;
[0] call ALSG_fnc_updatePartial;