#include "..\..\script_macros.hpp"

private _npc = nearestObjects [player, ["Land_InfoStand_V1_F"], 5];
private _tags = [];

{
    _cansee = (([objNull, "VIEW"] checkVisibility [eyePos player, eyePos _x]) > 0) && (!isObjectHidden _x) && (life_settings_tagson);
    private _shop = "No Name";
    if (_cansee) then
    {   
        if (isNil {vehicleVarName _x}) exitWith {};
        switch (!(isNil {vehicleVarName _x})) do { 
            case (vehicleVarName _x find "Supermarket" > -1): {_shop = "Supermarket"}; 
            case (vehicleVarName _x find "Rebel" > -1): {_shop = "Rebel Supplies"}; 
            case (vehicleVarName _x find "GunStore" > -1): {_shop = "Gun Store"}; 
            case (vehicleVarName _x find "Licenses" > -1): {_shop = "DMV"}; 
            case (vehicleVarName _x find "Wongs" > -1): {_shop = "Wongs Shop"}; 
            case (vehicleVarName _x find "Fish" > -1): {_shop = "Fish Shop"}; 
            case (vehicleVarName _x find "GasStation" > -1): {_shop = "Gas Station"}; 
            case (vehicleVarName _x find "ClothingShop" > -1): {_shop = "Clothing Shop"}; 
            case (vehicleVarName _x find "Garage" > -1): {_shop = "Garage"}; 
            case (vehicleVarName _x find "VehicleShop" > -1): {_shop = "Vehicle Shop"}; 
            case (vehicleVarName _x find "LuxuryVehicleShop" > -1): {_shop = "Luxury Vehicle Shop"}; 
            case (vehicleVarName _x find "AirShop" > -1): {_shop = "Air Shop"}; 
            case (vehicleVarName _x find "TruckShop" > -1): {_shop = "Truck Shop"}; 
            case (vehicleVarName _x find "ImpoundLot" > -1): {_shop = "Impound Lot"}; 
            case (vehicleVarName _x find "DrugDealer" > -1): {_shop = "Scary Drug Dealer"}; 
            case (vehicleVarName _x find "Chopshop" > -1): {_shop = "Chop Shop"}; 
            case (vehicleVarName _x find "Boat" > -1): {_shop = "Boat Shop"}; 
            case (vehicleVarName _x find "TransportMission" > -1): {_shop = "Transport Missions"}; 
            case (vehicleVarName _x find "CopShop" > -1): {_shop = "Cop Shop"}; 
            case (vehicleVarName _x find "CopGarage" > -1): {_shop = "Cop Vehicle Shop"}; 
            case (vehicleVarName _x find "CopBoat" > -1): {_shop = "Cop Boat Shop"}; 
            case (vehicleVarName _x find "CopAir" > -1): {_shop = "Cop Air Shop"}; 
            case (vehicleVarName _x find "MedicAssist" > -1): {_shop = "Medic's Assistant"}; 
            case (vehicleVarName _x find "MedicShop" > -1): {_shop = "Medic's Shop"}; 
            case (vehicleVarName _x find "MedicGarage" > -1): {_shop = "Medic's Vehicle Shop"}; 
            case (vehicleVarName _x find "AirMedShop" > -1): {_shop = "Medic's Air Shop"}; 
            case (vehicleVarName _x find "Process" > -1): {_shop = "Processer"}; 
            case (vehicleVarName _x find "Trader" > -1): {_shop = "Trader"}; 
            case (vehicleVarName _x find "Burglary" > -1): {_shop = "Burglary Shop"}; 
            case (vehicleVarName _x find "MoneyLaunder" > -1): {_shop = "Money Launderer"}; 
            case (vehicleVarName _x find "RelicTrader" > -1): {_shop = "Archeologist"}; 
            case (vehicleVarName _x find "BailMan" > -1): {_shop = "Post Bail"}; 
            case (vehicleVarName _x find "Unknown" > -1): {_shop = "Unknown Shop"}; 
        };
        _shop;

        private _displayshit = format["%1",_shop];
        _tags pushback [_x,_displayshit];
    };
} foreach _npc;

ALSG_TagsArray = _tags;