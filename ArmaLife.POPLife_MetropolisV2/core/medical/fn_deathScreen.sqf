#include "..\..\script_macros.hpp"
/*
    File: fn_deathScreen.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles stuff being displayed on the death screen while
    it is currently active.
*/
params [["_killer",objNull,[objNull]],["_unit",objNull,[objNull]]];

disableSerialization;
1 cutRsc ["ArmaLife_Deathscreen","PLAIN"];
[_killer] call ALSG_fnc_writeDeathScreen;

ArmaLife_BleedoutStart = diag_tickTime;

if (MAIN_SETTINGS_TYPE(getNumber,"Medical","bleedoutDuration") < 5) then {
    ArmaLife_BleedoutDuration = 200;
} else {
    ArmaLife_BleedoutDuration = MAIN_SETTINGS_TYPE(getNumber,"Medical","bleedoutDuration");
};


["ArmaLife_Bleedout_efHandle", "onEachFrame", {
	params [["_player",objNull,[objNull]],["_killer",objNull,[objNull]],["_unit",objNull,[objNull]]];

    private _display = uiNamespace getVariable ["ArmaLife_Deathscreen", displayNull];
    if (isNull _display) then {1 cutFadeOut 0; 1 cutRsc ["ArmaLife_Deathscreen","PLAIN"]; [_killer,_unit] call ALSG_fnc_writeDeathScreen;};

    private _ctrlProgress = _display displayCtrl 1;
    private _ctrlNearestMedic = _display displayCtrl 2;
    private _ctrlBleedoutText = _display displayCtrl 4;
    private _medics = {side group _x isEqualTo independent && {_x != _player}} count playableUnits;
    private _progress = (diag_tickTime - ArmaLife_BleedoutStart) / ArmaLife_BleedoutDuration;

    _reviver = _player getVariable ["Reviving", objNull];
    if (!isNull _reviver) then {
        _ctrlProgress ctrlSetTextColor [0, 0.67, 0.14, 1];
        _ctrlBleedoutText ctrlSetText format ["%2 in progress by: %1", name _reviver, ["Cpr","Revival"] select ((side _reviver) isEqualTo independent)];
        _ctrlProgress progressSetPosition 1;
    } else {
        private _percentage = round (100 - (_progress * 100));
        _ctrlProgress ctrlSetTextColor [0.59, 0, 0, 1];
        _ctrlBleedoutText ctrlSetText format ["Bleeding Out - %1%2 Blood Left", _percentage, "%"];
        _ctrlProgress progressSetPosition (1 - _progress);
    };

    // If medics on server are more than 0
    if (_medics > 0) then {
        private _medics = playableUnits select {side group _x isEqualTo independent && {_x != _player}};
        
	    _nearby = 99999;
	    {
            _distance = 99999;
            if (isNil "life_corpse") then {
                _distance = (getPosATL _player) distance _x;
            } else {
                _distance = (getPosATL life_corpse) distance _x;
            };
            if (_distance < _nearby) then { _nearby = _distance; };
	    } count _medics;

        _ctrlNearestMedic ctrlSetText format ["MEDICAL SERVICES [%1m]", [(round _nearby)] call ALSG_fnc_numberText];
    } else {
        _ctrlNearestMedic ctrlSetText "MEDICAL SERVICES [UNAVAILABLE]";
    };

    // Bled out, so kill
    if (_progress >= 1 && isNull _reviver && !(_player getVariable ["Revive",false])) exitWith {
        life_respawned = true;
        [] call ALSG_fnc_spawnMenu;

        1 cutFadeOut 1;
        ["ArmaLife_Bleedout_efHandle", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
        ArmaLife_BleedoutStart = nil;
        ArmaLife_BleedoutDuration = nil;
        ArmaLife_Bleedout_efHandle = nil;
    };
}, [player,_killer,_unit]] call BIS_fnc_addStackedEventHandler;