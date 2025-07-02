#include "..\..\script_macros.hpp"

private _display = uiNamespace getVariable ["ArmaLife_Phone",displayNull];
if (isNull _display) exitWith {};


private _itemList = _display displayCtrl 130002;
private _itemSelection = lbCurSel _itemList;
if(player getVariable ["restrained",false]) exitWith {["Wow cmonbruh?? Are you not restrained?",true,"slow"] call ALSG_fnc_notificationSystem;};

if (_itemSelection isEqualto -1) exitWith {[localize "STR_ISTR_SelectItemFirst",true,"slow"] call ALSG_fnc_notificationSystem;};
private _item = _itemList lbData _itemSelection;

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull","pepsi","cocacola","monsterEnergy"]): {
        if ([false,_item,1] call ALSG_fnc_handleInv) then {
            life_thirst = 100;
            private _reduce = switch (_item) do {
            	case "redgull" : { 0.3 };
            	case "monsterEnergy" : { 0.3 };
            	case "coffee" : { 0.2 };
            	default { 0.05 };
            };
            private _aimCoef = (getCustomAimCoef player);
            player setCustomAimCoef (_aimCoef - (_aimCoef * _reduce));

            if (_item isEqualTo "redgull" || _item isEqualTo "monsterEnergy") then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};

                    _ownsDependency = [life_currentExpPerks, "functions_stamina_1"] call mav_ttm_fnc_hasPerk;
                    if (_ownsDependency) then {
                        player enableFatigue false;
                    } else {
                        player enableFatigue true;
                    };
                };
            };
        };
    };

	case (_item isEqualTo "cyanideCapsule"): {
		if (player getVariable ["restrained",false]) exitWith {["You can not use this when you are restrained.",true,"slow"] call ALSG_fnc_notificationSystem;};

		if(([false,_item,1] call ALSG_fnc_handleInv)) then {
			[] spawn {
				["Goodbye cruel world...",true,"slow"] call ALSG_fnc_notificationSystem;
				player setVariable["ArmaLife_UsedCyanide",true,true];
				sleep 3;
                player setHit ["head",1];
			};
		};
	};

    case (_item isEqualTo "storagesmall"): {
        [false] call ALSG_fnc_storageBox;
    };

    case (_item isEqualTo "stabilizer"): {
        if (player getVariable ['inHostage',false] isEqualTo false && !(alive cursorObject) && player distance cursorObject <= 3) then {
            [cursorObject] spawn ArmaLife_StabilizePlayer;
        };
    };

    case (_item isEqualTo "storagebig"): {
        [true] call ALSG_fnc_storageBox;
    };
    
    case (_item isEqualTo "gpstracker"): {
		[cursorTarget] spawn ALSG_fnc_gpsTracker; closeDialog 0;
	};

    case (_item isEqualTo "enginedisable"): {
		[cursorTarget] spawn ALSG_fnc_engineDisable; closeDialog 0;
	};

    case (_item isEqualTo "doorc4"): {
        [cursorTarget] spawn ArmaLife_SWATRaid; closeDialog 0;
    };

    case (_item isEqualTo "protest"):
	{
		if(([false,_item,1] call ALSG_fnc_handleInv)) then
		{
			[] spawn ALSG_fnc_protest;
		};
	};

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {[localize "STR_ISTR_SpikesDeployment",true,"slow"] call ALSG_fnc_notificationSystem; closeDialog 0};
        if !(isNull(objectParent player)) exitWith {["You can not use this in a vehicle.",true,"slow"] call ALSG_fnc_notificationSystem; closeDialog 0};
        if ([false,_item,1] call ALSG_fnc_handleInv) then {
            [] spawn ALSG_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if !(isNull objectParent player) exitWith {[localize "STR_ISTR_RefuelInVehicle",true,"slow"] call ALSG_fnc_notificationSystem;};
        [] spawn ALSG_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn ALSG_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn ALSG_fnc_lockpick;
        closeDialog 0;
    };

	case (_item isEqualTo "bandage"):
	{
		[] spawn ALSG_fnc_bandage;
	};

    case (_item isEqualTo "marijuana"):
	{
		if(playerSide in [west,independent]) exitWith {["You can't take drugs on duty!",false,"slow"] call ALSG_fnc_notificationSystem;};
		if(([false,_item,1] call ALSG_fnc_handleInv)) then
		{
			[] spawn ALSG_fnc_weed;
		};
    };

    case (_item isEqualTo "cocaine_processed"):
	{
		if(playerSide in [west,independent]) exitWith {["You can't take drugs on duty!",false,"slow"] call ALSG_fnc_notificationSystem;};
		if(([false,_item,1] call ALSG_fnc_handleInv)) then
		{
			[] spawn ALSG_fnc_cocaine;
		};
	};

    case (_item isEqualTo "heroin_processed"):
	{
		if(playerSide in [west,independent]) exitWith {["You can't take drugs on duty!",false,"slow"] call ALSG_fnc_notificationSystem;};
		if(([false,_item,1] call ALSG_fnc_handleInv)) then
		{
			[] spawn ALSG_fnc_heroin;
		};
	};

    case (_item isEqualTo "morphine"):
    {
        if(([false,_item,1] call ALSG_fnc_handleInv)) then
		{
			[] call ALSG_fnc_morphine;
		};
    };

    case (_item isEqualTo "keyCard"): 
    {
        player setVariable ["copLevel",1];
    };

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach","doritos","shittynoodles","kfc"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
            if ([false,_item,1] call ALSG_fnc_handleInv) then {
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                closedialog 0;
                player playAction "Gesture_eat";
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;};
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
            };
        };
    };

    default {
        [localize "STR_ISTR_NotUsable",true,"slow"] call ALSG_fnc_notificationSystem;
    };
};

[3] call ALSG_fnc_updatePartial;
[] call ALSG_fnc_LoadInventory;
[] spawn ALSG_fnc_hudUpdate
