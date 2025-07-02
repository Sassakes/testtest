class cfgInteractions
{
	class OpenATM  {
		title = "Access ATM";
		action = "[] spawn ALSG_fnc_atmMenu;";
		check = "(call ALSG_fnc_nearATM || typeof cursorObject in ['Land_Atm_02_F','Land_ATM_01_malden_F','Land_ATM_02_malden_F','Land_Mattaust_ATM']) && player getVariable 'restrained' isEqualto false && player distance cursorobject < 5";
	};

	class OpenATMCom  {
		title = "Access ATM";
		action = "[] spawn ALSG_fnc_atmMenu;";
		check = "typeof cursorObject isEqualto 'Land_CommonwealthBank' && player getVariable 'restrained' isEqualto false && player distance cursorobject < 15";
	};

	class SpawnMenu  {
		title = "Spawn Menu";
		action = "[] call ALSG_fnc_spawnMenu;";
		check = "(vehicleVarName cursorObject) find 'SpawnMenu' > -1 && player getVariable 'restrained' isEqualto false && alive player";
	};
	
	class SetName  {
		title = "Set Name";
		action = "[] call ArmaLife_SetName;";
		check = "cursorObject isKindOf 'Man' && player distance cursorObject <= 5 && alive cursorobject && isPlayer cursorObject";
	};

	class Whitelist  {
		title = "Whitelist";
		action = "[playerSide] call ArmaLife_OpenWhitelist;";
		check = "cursorObject isKindOf 'Man' && player distance cursorObject <= 5 && alive cursorobject && !(cursorobject getVariable ['restrained',false]) && (playerSide isEqualto west || playerSide isEqualto independent) && (call(life_coplevel) >= 6 || call(life_mediclevel) >= 7) && isPlayer cursorObject";
	};

	class Unknown {
		title = "Unknown";
		action = "[cursorobject,'','','unknown'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Unknown' > -1 && playerSide isEqualto civilian";
	};

	class Market  {
		title = "Market";
		action = "[cursorobject,'','','market'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Supermarket' > -1 && playerSide isEqualto civilian";
	};

	class JailGoods  {
		title = "Sell/Buy Items";
		action = "[cursorobject,'','','jail'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'JailGoods' > -1 && playerSide isEqualto civilian && life_is_arrested";
	};

	class JailWeapons  {
		title = "Buy Weapons";
		action = "['jail'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'JailGoods' > -1 && playerSide isEqualto civilian && life_is_arrested";
	};

	class GoldCoinTrader  {
		title = "Coin Trader";
		action = "[cursorobject,'','','goldcoin'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GoldCoinTrader' > -1 && playerSide isEqualto civilian";
	};

	class GasMarket  {
		title = "Station Market";
		action = "[cursorobject,'','','f_station_coffee'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GasStation' > -1";
	};

	class LotteryTicket {
		title = "Buy Lotto Ticket";
		action = "[player] remoteExec [""ArmaLife_CheckTick"",2];";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GasStation' > -1";
	};

	class WongsMarket  {
		title = "Wongs Market";
		action = "[cursorobject,'','','wongs'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Wongs' > -1";
	};

	class FishMarket  {
		title = "Fish Market";
		action = "[cursorobject,'','','fishmarket'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Fish' > -1 && playerSide isEqualto civilian";
	};

	class BurglaryMarket  {
		title = "Burglary Market";
		action = "[cursorobject,'','','burglary'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Burglary' > -1 && playerSide isEqualto civilian";
	};

	class DrugDealer  {
		title = "Drug Dealer";
		action = "[cursorobject,'','','drugdealer'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (cursorobject distance player) < 7.5  && (vehicleVarName cursorObject) find 'DrugDealer' > -1 && playerSide isEqualto civilian";
	};

	class CartelDrugDealer  {
		title = "Cartel Drug Dealer";
		action = "[cursorobject,'','','drugdealer'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (cursorobject distance player) < 7.5  && (vehicleVarName cursorObject) find 'CartelDealer' > -1 && playerSide isEqualto civilian";
	};
	
	class RelicTurnIn  {
		title = "Turn in Relics";
		action = "[] spawn ALSG_fnc_relicReward";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RelicTrader' > -1 && player getVariable ['mav_ttm_var_relicReward',false] isEqualTo false";
	};

	class RelicTurnInFed  {
		title = "Turn in Fed Relic";
		action = "[] spawn ALSG_fnc_relicRewardFed";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RelicTrader' > -1 && player getVariable ['mav_ttm_var_relicReward2',false] isEqualTo false";
	};

	class RelicTurnInSat  {
		title = "Turn in Satellite";
		action = "[] spawn ALSG_fnc_satelliteReward";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RelicTrader' > -1 && player getVariable ['mav_ttm_var_satellite',false] isEqualTo false";
	};

	class Archeologist  {
		title = "Archeologist";
		action = "[cursorobject,'','','archeologist'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RelicTrader' > -1 && playerSide isEqualto civilian && player getVariable ['mav_ttm_var_relicReward2',false]";
	};

	class Relic1  {
		title = "Collect Relic";
		action = "[] spawn ALSG_fnc_relic1";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Relic1' > -1 &&  life_inv_relic1 isEqualto 0";
	};

	class Relic2  {
		title = "Collect Relic";
		action = "[] spawn ALSG_fnc_relic2";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Relic2' > -1 &&  life_inv_relic2 isEqualto 0";
	};

	class Relic3  {
		title = "Collect Relic";
		action = "[] spawn ALSG_fnc_relic3";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Relic3' > -1 &&  life_inv_relic3 isEqualto 0";
	};

	class Relic4 {
		title = "Collect Relic";
		action = "[] spawn ALSG_fnc_relic4";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Relic4' > -1 && life_inv_relic4 isEqualto 0";
	};

	class BailMan {
		title = "Post Bail";
		action = "[] spawn ALSG_fnc_postBail";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'BailMan' > -1 && playerSide isEqualto civilian && life_canpay_bail && life_is_arrested";
	};

	class GatherUnknown {
		title = "Gather Unknown";
		action = "[] spawn ALSG_fnc_gatherResearch";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GatherQuestion' > -1 && playerSide isEqualto civilian && isNull (objectParent player) && player distance cursorObject < 4";
	};

	class DestroySatellite {
		title = "Destroy Satellite";
		action = "[] spawn ALSG_fnc_destroySatellite";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'DestroySatellite' > -1 && playerSide isEqualto civilian && isNull (objectParent player) && player distance cursorObject < 4";
	};

	class GeneralStore  {
		title = "General Store";
		action = "['genstore'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Supermarket' > -1 && playerSide isEqualto civilian";
	};

	class GasGeneralStore  {
		title = "Station Store";
		action = "['f_station_store'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GasStation' > -1 && playerSide isEqualto civilian";
	};

	class RebelShop  {
		title = "Weapon Shop";
		action = "['rebel'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Rebel' > -1 && playerSide isEqualto civilian && player distance cursorobject < 5";
	};

	class RebelClothingShop  {
		title = "Rebel's Clothing";
		action = "['rebel'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Rebel' > -1 && playerSide isEqualto civilian";
	};

	class RebelMarket  {
		title = "Rebel Market";
		action = "[cursorobject,'','','rebel'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Rebel' > -1 && playerSide isEqualto civilian";
	};

	class WeaponShop  {
		title = "Weapon Shop";
		action = "['gun'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GunStore' > -1 && license_civ_gun && playerSide isEqualto civilian";
	};

	class GunClothing  {
		title = "Advanced Clothing";
		action = "['gun_clothing'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GunStore' > -1 && playerSide isEqualto civilian";
	};

	class WeaponShopLicense  {
		title = "Gun Lisc. - $10,000";
		action = "['','','','gun'] spawn ALSG_fnc_buyLicense;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GunStore' > -1 && !license_civ_gun && playerSide isEqualto civilian";
	};

	class ClothingShop  {
		title = "Bruce's Clothing";
		action = "['bruce'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'ClothingShop' > -1 && playerSide isEqualto civilian";
	};
	
	class ClothingShopCID  {
		title = "CID Clothing";
		action = "['bruce'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopShop' > -1 && playerSide isEqualto west";
	};
	
	class DivingGear  {
		title = "Diving Gear";
		action = "['dive'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Boat' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && license_civ_dive"; 
	};

	class ChopShop  {
		title = "Chop Shop";
		action = "['','','','chop_shop_3'] call ALSG_fnc_chopShopMenu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'ChopShop' > -1 && playerSide isEqualto civilian";
	};

	class VehicleShop  {
		title = "Vehicle Shop";
		action = "['civ_car','civ',""Travis' New & Used Auto's""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Car';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'VehicleShop' > -1 && (playerSide isEqualto civilian || (call life_copdept) in [6,7])";
	};

	class LuxuryVehicleShop  {
		title = "Luxury Vehicles";
		action = "['civ_car_luxury','civ',""Repentz's Lambo Dealership""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Car';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'LuxuryVehShop' > -1 && (playerSide isEqualto civilian || (call life_copdept) in [6,7])";
	};

	class TruckShop  {
		title = "Truck Shop";
		action = "['civ_truck','civ',""Fini's New & Used Trucks""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Truck';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'TruckShop' > -1 && isNull (objectParent player) && playerSide isEqualto civilian";
	};

	class BoatShop  {
		title = "Boat Shop";
		action = "['civ_ship','civ',""Lewis' Boat Rentals & Ownership""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Boat';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Boat' > -1 && isNull (objectParent player) && playerSide isEqualto civilian";
	};

	class BoatGarage  {
		title = "Garage";
		action = "['Boat'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Boat' > -1 && isNull (objectParent player) && playerSide isEqualto civilian";
	};

	class StoreBoat  {
		title = "Store Boat";
		action = "[] spawn ALSG_fnc_storeVehicle;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Boat' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_garage_store";
	};

	class AirShop  {
		title = "Air Shop";
		action = "['civ_air','civ','Airial Autos'] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Air';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'AirShop' > -1 && isNull (objectParent player) && playerSide isEqualto civilian";
	};

	class AirGarage  {
		title = "Air Garage";
		action = "['Air'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'AirShop' > -1 && isNull (objectParent player) && playerSide isEqualto civilian";
	};

	class StoreGarageAir  {
		title = "Store Vehicle";
		action = "[] spawn ALSG_fnc_storeVehicle;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'AirShop' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_garage_store";
	};

	class Garage  {
		title = "Vehicle Garage";
		action = "['Car'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Garage' > -1 && isNull (objectParent player) && playerSide isEqualto civilian";
	};

	class StoreGarage  {
		title = "Store Vehicle";
		action = "[] spawn ALSG_fnc_storeVehicle;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Garage' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_garage_store";
	};

	class DriverLicense  {
		title = "Driver Test";
		action = "[] spawn ALSG_fnc_licenseTestStart";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Licenses' > -1 && isNull (objectParent player) && !license_civ_driver && playerSide isEqualTo civilian";
	};

	class BoatLicense  {
		title = "Boat Lisc. - $100";
		action = "['','','','boat'] spawn ALSG_fnc_buyLicense;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Licenses' > -1 && isNull (objectParent player) && !license_civ_boat && playerSide isEqualTo civilian";
	};

	class TruckLicense  {
		title = "Truck Lisc. - $2,000";
		action = "['','','','trucking'] spawn ALSG_fnc_buyLicense;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Licenses' > -1 && isNull (objectParent player) && !license_civ_trucking && playerSide isEqualTo civilian";
	};

	class DivingLicense {
		title = "Dive Licence - $200";
		action = "['','','','dive'] spawn ALSG_fnc_buyLicense;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Boat' > -1 && isNull (objectParent player) && !license_civ_dive && playerSide isEqualTo civilian";
	};

	class ImpoundLot  {
		title = "Impound Lot";
		action = "['Impound'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'ImpoundLot' > -1 && isNull (objectParent player)";
	};

	class RobStore  {
		title = "Rob Store";
		action = "[cursorObject,player] spawn ALSG_fnc_robShops;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'GasStation' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian";
	};

	class RobCasino  {
		title = "Rob Casino";
		action = "[cursorObject,player,'','Casino'] spawn ALSG_fnc_majorGold";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CasinoVault' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian && player distance cursorObject < 5";
	};

	class RobFed {
		title = "Rob Fed";
		action = "[cursorObject,player,'','Fed'] spawn ALSG_fnc_majorGold";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'FedVault' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian && player distance cursorObject < 5";
	};

	class RobBank {
		title = "Rob Bank";
		action = "[cursorObject,player,'','Bank'] spawn ALSG_fnc_majorGold;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'BankVault' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian && player distance cursorObject < 5";
	};

	class MoneyLaunder  {
		title = "Launder Money";
		action = "[cursorObject] spawn ALSG_fnc_launderMoney;";
		check = "alive player && (vehicleVarName cursorObject) find 'MoneyLaunder' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian";
	};

	class TransportMissions  {
		title = "Start Mission";
		action = "['Update coming to this, please stand by for this.',true,'slow'] spawn ALSG_fnc_notificationSystem";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'TransportMission' > -1 && isNull (objectParent player) && playerSide isEqualTo civilian";
	};

	class ItemShopCop  {
		title = "Item Shop";
		action = "[cursorobject,'','','cop'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopShop' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class ClothingShopCop  {
		title = "Police Clothing";
		action = "['cop'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopShop' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class WeaponShopCop  {
		title = "Police Weapons";
		action = "['cop'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopShop' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class RefillMagsCop  {
		title = "Refill Mags";
		action = "[] spawn ALSG_fnc_refillMags;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopShop' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class RefillMagsCiv  {
		title = "Refill Mags";
		action = "[] spawn ALSG_fnc_refillMags;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'Rebel' > -1 && playerSide isEqualto civilian && player getVariable ['inHostage',false] isEqualTo false";
	};

	class VehicleShopCop  {
		title = "Vehicle Shop";
		action = "['cop_car','cop',""Police Vehicle Shop""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Car';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopGarage' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class VehicleShopCopUC  {
		title = "Undercover Shop";
		action = "['uc_car','cop',""Police UC Shop""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Car';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopGarage' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class GarageCop  {
		title = "Vehicle Garage";
		action = "['Car'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopGarage' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class StoreGarageCop  {
		title = "Store Vehicle";
		action = "[] spawn ALSG_fnc_storeVehicle;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopGarage' > -1 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && !life_garage_store";
	};

	class AirShopCop  {
		title = "Air Shop";
		action = "['cop_air','cop','Police Helis'] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Air';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopAir' > -1 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class AirGarageCop  {
		title = "Air Garage";
		action = "['Air'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopAir' > -1 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false";
	};
	
	class StoreGarageAirCop  {
		title = "Store Vehicle";
		action = "[] spawn ALSG_fnc_storeVehicle;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopAir' > -1 && isNull (objectParent player) && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && !life_garage_store";
	};

	class BoatShopCop  {
		title = "Boat Shop";
		action = "['cop_boat','cop',""Police's Boats and Watercraft""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Boat';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopBoat' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class BoatGarageCop  {
		title = "Garage";
		action = "['Boat'] spawn AL_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopBoat' > -1 && playerSide isEqualto west && player getVariable ['inHostage',false] isEqualTo false";
	};

	class CopDivingGear  {
		title = "Diving Gear";
		action = "['cop_boat'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CopBoat' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false"; 
	};

	class DropFishingNet  {
		title = "Drop Net";
		action = "[] spawn ALSG_fnc_dropFishingNet;";
		check = "(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf ""Ship"") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped";
	};

	class PlaceSpike  {
		title = "Place Spikestrip";
		action = "detach life_spikeStrip; life_spikeStrip = objNull;";
		check = "!isNull life_spikestrip && isNull (objectParent player)";
	};

	class PackupSpike  {
		title = "Packup Spikestrip";
		action = "[] spawn ALSG_fnc_packupSpikes";
		check = "_spikes = nearestObjects[getPos player,['Land_Razorwire_F'],8] select 0; !isNil ""_spikes"" && !isNil {(_spikes getVariable ""ArmaLife_DroppedItem"")}";
	};

	class HealHospital  {
		title = "Medical Assistance";
		action = "[cursorObject] spawn ALSG_fnc_healHospital";
		check = "(vehicleVarName cursorObject) find 'MedicAssist' > -1 && player distance cursorobject < 5";
	};

	class ItemShopMedic  {
		title = "Item Shop";
		action = "[cursorobject,'','','med_market'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MedicShop' > -1 && playerSide isEqualTo independent";
	};

	class WeaponShopMedic  {
		title = "Utility Shop";
		action = "['med_basic'] spawn ALSG_fnc_weaponShopMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MedicShop' > -1 && playerSide isEqualTo independent";
	};

	class ClothingShopMedic  {
		title = "Clothing Shop";
		action = "['med_clothing'] spawn ALSG_fnc_clothingMenu;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MedicShop' > -1 && playerSide isEqualTo independent";
	};

	class VehicleShopMedic  {
		title = "Vehicle Shop";
		action = "['med_shop','med',""Medic Vehicle Shop""] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Car';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MedicGarage' > -1 && playerSide isEqualTo independent";
	};

	class GarageMedic  {
		title = "Vehicle Garage";
		action = "['Car'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MedicGarage' > -1 && playerSide isEqualTo independent";
	};

	class StoreGarageMedic  {
		title = "Store Vehicle";
		action = "[] spawn ALSG_fnc_storeVehicle;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MedicGarage' > -1 && playerSide isEqualTo independent && !life_garage_store";
	};

	class AirMedShop  {
		title = "Air Shop";
		action = "['med_air_hs','med','Medic Helis'] spawn ALSG_fnc_vehicleShopMenu; AL_CurrentVehicleShop = 'Air';";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'AirMedShop' > -1 && playerSide isEqualTo independent";
	};

	class AirGarageMed  {
		title = "Air Garage";
		action = "['Air'] spawn ArmaLife_Garage;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'AirMedShop' > -1 && playerSide isEqualto independent";
	};

	class MafiaPerk  {
		title = "Hack Wanted List";
		action = "[] spawn ArmaLife_MafiaWantedList;";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MafiaPerk' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((group player) getVariable ['gang_id',-1]) isEqualto (missionNameSpace getVariable ['ArmaLife_Cartel',0])";
	};

	class TakeHostage  {
		title = "Take Hostage";
		action = "[cursorobject] spawn ArmaLife_TakeHostage;";
		check = "isNil 'ArmaLife_EnableHostage' && isPlayer CursorObject && (handgunWeapon player != """") && cursorobject getVariable ['inHostage',false] isEqualto false && player getVariable ['inHostage',false] isEqualto false && (currentWeapon player != """") && currentWeapon player != primaryWeapon player && isPlayer cursorobject && (player distance cursorobject < 2) && (([cursorobject, player] call BIS_fnc_relativeDirTo) < 220) && (([cursorobject, player] call BIS_fnc_relativeDirTo) > 130) && cursorObject getVariable [""life_is_alive"",true] && playerSide isEqualto civilian && player getVariable 'restrained' isEqualto false";
	};

	class ReleaseHostage  {
		title = "Release Hostage";
		action = "ArmaLife_EnableHostage = false;";
		check = "!isNil 'ArmaLife_EnableHostage'";
	};

	class PointGunForward  {
		title = "Point Gun Forward";
		action = "ArmaLife_HostageMode = 'shoot';";
		check = "!isNil 'ArmaLife_EnableHostage' && ArmaLife_HostageMode isEqualto 'hostage'";
	};

	class PointGunHostage  {
		title = "Point Gun at Hostage";
		action = "ArmaLife_HostageMode = 'hostage';";
		check = "!isNil 'ArmaLife_EnableHostage' && ArmaLife_HostageMode isEqualto 'shoot'";
	};

	class OpenPump  {
		title = "Use Pump";
		action = "[] spawn ALSG_fnc_fuelStatOpen;";
		check = "player distance cursorObject < 15 && typeof cursorObject in ['land_pop_gasolinera','Land_FuelStation_01_pump_F','Land_FuelStation_02_pump_F']";
	};

	class CaptureMafia  {
		title = "Capture Mafia Base";
		action = "['Mafia',cursorObject] spawn ArmaLife_CaptureBase";
		check = "playerSide isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'MafiaBase' > -1 && ((cursorobject getVariable [""owner"",0]) != (group player getVariable [""gang_id"",0])) && (group player getVariable [""gang_role"",[]] select 0) == 1 && (!(cursorobject getVariable [""inCapture"",false]))";
	};

	class DecaptureMafia  {
		title = "Decap Mafia Base";
		action = "['Mafia',cursorObject] spawn ArmaLife_DecaptureBase";
		check = "playerSide isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'MafiaBase' > -1 && (missionNamespace getVariable [""ArmaLife_Mafia"",0]) > 0 && ((cursorobject getVariable [""owner"",0]) != (group player getVariable [""gang_id"",0])) && (group player getVariable [""gang_role"",[]] select 0) != 1 && (!(cursorobject getVariable [""inCapture"",false]))";
	};

	class CaptureCartel  {
		title = "Capture Cartel Base";
		action = "['Cartel',cursorObject] spawn ArmaLife_CaptureBase";
		check = "playerSide isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'CartelBase' > -1 && ((cursorobject getVariable [""owner"",0]) != (group player getVariable [""gang_id"",0])) && (group player getVariable [""gang_role"",[]] select 0) == 2 && (!(cursorobject getVariable [""inCapture"",false]))";
	};

	class DecaptureCartel  {
		title = "Decap Cartel Base";
		action = "['Cartel',cursorObject] spawn ArmaLife_DecaptureBase";
		check = "playerSide isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'CartelBase' > -1 && (missionNamespace getVariable [""ArmaLife_Cartel"",0]) > 0 && ((cursorobject getVariable [""owner"",0]) != (group player getVariable [""gang_id"",0])) && (group player getVariable [""gang_role"",[]] select 0) != 2 && (!(cursorobject getVariable [""inCapture"",false]))";
	};

	class TurninTruckMissionCartel {
		title = "Unload Truck";
		action = "['Cartel',cursorObject] spawn ArmaLife_HandIn";
		check = "playerSide isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'CartelStorageBox' > -1 && (missionNamespace getVariable [""ArmaLife_Cartel"",0]) > 0 && (group player getVariable [""gang_role"",[]] select 0) == 2 &&  !(isNull truckMissionVeh) && ((cursorobject distance truckMissionVeh) <= 40)";
	};

	class TurninTruckMissionMafia {
		title = "Unload Truck";
		action = "['Mafia',cursorObject] spawn ArmaLife_HandIn";
		check = "playerSide isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'MafiaStoragebox' > -1 && (missionNamespace getVariable [""ArmaLife_Cartel"",0]) > 0 && (group player getVariable [""gang_role"",[]] select 0) == 1 && !(isNull truckMissionVeh) && ((cursorobject distance truckMissionVeh) <= 40)";
	};

	class TurninTruckMissionCop {
		title = "Unload Truck";
		action = "['Cop',cursorObject] spawn ArmaLife_HandIn";
		check = "playerSide isEqualTo west && player distance cursorobject < 5 && (vehicleVarName cursorObject) find 'evidencelocker' > -1 && !(isNull truckMissionVeh) && ((cursorobject distance truckMissionVeh) <= 40)";
	};

	class JobMenu  {
		title = "Job Menu";
		action = "closeDialog 0; [] call ArmaLife_JobMenu;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && (typeof cursorObject isEqualTo 'Land_Centrelink') && {player distance cursorObject <= 6}";
	};

	class PickupPaycheck  {
		title = "Pickup Paycheck";
		action = "[] call ArmaLife_PickupPaycheck";
		check = "typeOf cursorObject isEqualto 'Land_CommonwealthBank' && player distance cursorobject < 15";
	};

	class PickupItem  {
		title = "Pickup Item";
		action = "CB = true; cbitem = cursorObject; cbitem enableSimulationGlobal true; cbitem attachTo [player,[0.2,2.2,1.3]]; cbitem setpos [getpos cbitem select 0,getpos cbitem select 1,0];";
		check = "player isKindOf 'Man' && alive player && player distance cursorObject <= 5 && cursorObject getVariable 'CB_Item_Owner' isEqualTo getPlayerUID player && CB isEqualTo false";
	};

	class PlaceItem  {
		title = "Place Item";
		action = "[getPosATL cbitem,vectorUp cbitem,vectorDir cbitem,typeOf cbitem] remoteExec ['ArmaLife_PlaceItem',2]; deleteVehicle cbitem; CB=false;";
		check = "player isKindOf 'Man' && alive player && CB";
	};

	class RemoveItem  {
		title = "Remove Item";
		action = "[cursorobject] call ArmaLife_CheckpointBuilderRemove;";
		check = "player isKindOf 'Man' && alive player && player distance cursorObject <= 5 && cursorObject getVariable 'CB_Item_Owner' isEqualto getPlayerUID player && CB isEqualTo false";
	};

	class SeizeItems  {
		title = "Seize Items";
		action = "[] spawn ALSG_fnc_seizeWeapon;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && !(player getVariable ['inHostage',false]) && (count(nearestObjects [player,['weaponholder'],3])>0) && !(player getVariable ['playerSurrender',false]) && !(player getVariable ['restrained',false])";
	};

	class OpenDoor  {
		title = "Lockpick Door";
		action = "[] spawn ArmaLife_OpenDoor;";
		check = "playerSide isEqualTo civilian && player getVariable ['restrained',false] isEqualTo false && player getVariable ['inHostage',false] isEqualTo false && life_inv_lockpick > 0 && (typeOf cursorObject) in ['Land_MainSection','Land_PoliceStation','Land_Gaol_Main'] && !([cursorObject] call ArmaLife_GetDoor isEqualto '')";
	};
	class SearchEvidenceCop  {
		title = "Search through Evidence";
		action = "[cursorObject] spawn ArmaLife_SEARCHEVIDENCE;";
		check = "call(life_coplevel) > 0 && cursorObject getVariable ['isEvidence',false] && player distance cursorObject < 10 && ((playerSide) isEqualTo west)";
	};

	class SearchEvidenceCiv  {
		title = "Destroy Evidence";
		action = "[cursorObject] spawn ArmaLife_SEARCHEVIDENCE;";
		check = "cursorObject getVariable ['isEvidence',false] && player distance cursorObject < 10 && ((playerSide) isEqualTo civilian)";
	};

	class FixMajorSafe  {
		title = "Fix Safe";
		action = "closeDialog 0;[cursorObject] spawn ALSG_fnc_safeFix;";
		check = "cursorObject getVariable ['bankOpen',false] && player distance cursorObject < 10 && ((playerSide) isEqualTo west)";
	};

	class RobEvidenceLocker  {
		title = "Break Open Evidence Locker";
		action = "[cursorObject] spawn ArmaLife_RobEvidence;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && life_inv_boltcutter > 0 && typeOf cursorObject isEqualTo ""C_IDAP_supplyCrate_F"" && player distance cursorObject < 3 && cursorObject getVariable [""Robbed"",false] isEqualto false";
	};

	class LockEvidence  {
		title = "Lock Evidence Locker";
		action = "['You have locked up the evidence locker.',true,'slow'] call ALSG_fnc_notificationSystem; cursorObject setVariable ['Robbed',false,true];";
		check = "playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && typeOf cursorObject isEqualTo ""C_IDAP_supplyCrate_F"" && player distance cursorObject < 3 && cursorObject getVariable [""Robbed"",false]";
	};

	class SearchGarbage  {
		title = "Search Through Garbage";
		action = "[] spawn ArmaLife_SearchGarbage;";
		check = "playerSide isEqualTo civilian && player getVariable ['restrained', false] isEqualTo false && player getVariable ['inHostage',false] isEqualTo false && player distance cursorObject < 3 && alive cursorobject && (vehicleVarName cursorObject) find 'ArmaLife_Garbage' > -1";
	};

	class BreakDownDoor {
		title = "Break Down Door";
		action = "[cursorObject] spawn ALSG_fnc_copBreakDoor; closeDialog 0;";
		check = "cursorObject isKindOf 'House' && call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && !isNil {cursorObject getVariable 'house_owner'} && player distance cursorObject <= 10";
	};

	class SearchHouse {
		title = "Search House";
		action = "[cursorObject] call ALSG_fnc_raidHouse; closeDialog 0;";
		check = "cursorObject isKindOf 'House' && call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && !isNil {cursorObject getVariable 'house_owner'} && player distance cursorObject <= 10";
	};

	class LockupHouse {
		title = "Lockup House";
		action = "[cursorObject] call ALSG_fnc_lockupHouse; closeDialog 0;";
		check = "cursorObject isKindOf 'House' && call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && !isNil {cursorObject getVariable 'house_owner'} && player distance cursorObject <= 10";
	};

	class BuyHouse {
		title = "Buy House";
		action = "closeDialog 0; [cursorObject] spawn ALSG_fnc_buyHouse;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && isNil {cursorObject getVariable 'house_owner'} && !(cursorObject in life_vehicles) && player distance cursorObject <= 12 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject)))";
	};

	class SellHouse {
		title = "Sell House";
		action = "closeDialog 0; [cursorObject] spawn ALSG_fnc_sellHouse;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject)))";
	};

	class PayHouse {
		title = "Pay Property Tax";
		action = "closeDialog 0; [cursorObject] remoteExec ['ArmaLife_PropertyTaxCheck',2];";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject))) && cursorobject getVariable ['house_tax',7] < 7";
	};

	class AccessGarageHouse {
		title = "Access Garage";
		action = "['Car'] spawn ArmaLife_Garage;";
		check = "(isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject))) && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && player distance cursorObject <= 15";
	};

	class StoreGarageHome {
		title = "Store Vehicle";
		action = "[cursorObject, player] spawn ALSG_fnc_storeVehicle; closeDialog 0;";
		check = "(isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject))) && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && player distance cursorObject <= 15";
	};

	class UnlockStorage {
		title = "Unlock Storage";
		action = "[cursorObject] spawn ALSG_fnc_lockHouse; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && cursorObject getVariable['locked',true] && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject)))";
	};

	class LockStorage {
		title = "Lock Storage";
		action = "[cursorObject] spawn ALSG_fnc_lockHouse; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && !(cursorObject getVariable ['locked',true]) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject)))";
	};

	class LightsOn {
		title = "Turn Lights On";
		action = "[cursorObject] spawn ALSG_fnc_lightHouseAction; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && isNull (cursorObject getVariable ['lightSource',ObjNull]) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject)))";
	};

	class LightsOff {
		title = "Turn Lights Off";
		action = "[cursorObject] spawn ALSG_fnc_lightHouseAction; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && ((cursorObject getVariable 'house_owner') select 0) isEqualTo (getPlayerUID player) && !isNull (cursorObject getVariable ['lightSource',ObjNull]) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject)))";
	};

	class MutePlayer  {
		title = "Mute Player";
		action = "['Mute',cursorObject] spawn ArmaLife_PlayerVoice;";
		check = "player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && player distance cursorObject <= 6 && isNull (objectParent player) && cursorObject getVariable ['ArmaLife_Muted',false] isEqualto false";
	};

	class UnmutePlayer  {
		title = "Unmute Player";
		action = "['Unmute',cursorObject] spawn ArmaLife_PlayerVoice;";
		check = "player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && player distance cursorObject <= 6 && isNull (objectParent player) && cursorObject getVariable ['ArmaLife_Muted',false]";
	};	
	
	class StabilizePlayer {
		title = "Stabilize Player";
		action = "closeDialog 0; [cursorObject] spawn ArmaLife_StabilizePlayer";
		check = "life_inv_stabilizer > 0 && player getVariable ['inHostage',false] isEqualTo false && !(alive cursorObject) && player distance cursorObject <= 3 && isNull (objectParent player)";
	};
	
	class RevivePlayer {
		title = "Revive";
		action = "closeDialog 0; [cursorObject] call ArmaLife_BleedoutRevivePlayer";
		check = "cursorObject getVariable ['incapacitated', false] && playerSide isEqualto independent && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && player distance cursorObject <= 3 && isNull (objectParent player)";
	};

	class TiePerson {
		title = "Tie Player";
		action = "[] spawn ALSG_fnc_tieingAction; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && !(cursorObject getVariable ['restrained', false]) && player distance cursorObject <= 3.5 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && life_inv_zipties > 0 && ((animationState cursorObject) == 'Incapacitated' || (animationState cursorObject) == 'unconscious' || (animationState cursorObject) == 'unconsciousoutprone' || cursorObject getVariable 'playerSurrender')";
	};

	class Unrestrain {
		title = "Unrestrain Player";
		action = "[cursorObject] spawn ALSG_fnc_unrestrain;";
		check = "((call(life_coplevel) > 0 && playerSide isEqualTo west) || (playerSide isEqualTo civilian && playerSide isEqualTo (cursorObject getVariable ['restrainType',sideEmpty]))) && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && cursorObject getVariable ['restrained',false] && player distance cursorObject <= 6 && isNull (objectParent player) && !(player getVariable ['restrained',false])";
	};

	class CheckLicences {
		title = "Check Licenses";
		action = "[player] remoteExec [""ALSG_fnc_licenseCheck"",cursorObject]";
		check = "((call(life_coplevel) > 0 && playerSide isEqualTo west) || (playerSide isEqualTo civilian && playerSide isEqualTo (cursorObject getVariable ['restrainType',sideEmpty]))) && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && cursorObject getVariable ['restrained',false] && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class SearchPlayer {
		title = "Strip Search Player";
		action = "[cursorObject] spawn ALSG_fnc_searchAction; closeDialog 0;";
		check = "(call(life_coplevel)) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && cursorObject getVariable ['restrained',false] && player distance cursorObject <= 6 && isNull (objectParent player)  && !(player getVariable ['restrained',false])";
	};

	class SearchPlayerCiv {
		title = "Strip Search Player";
		action = "[] remoteExecCall ['ALSG_fnc_removeWeaponAction',cursorObject]; closeDialog 0;";
		check = " playerSide isEqualTo civilian && (playerSide isEqualTo (cursorObject getVariable ['restrainType',sideEmpty])) && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && cursorObject getVariable ['restrained',false] && player distance cursorObject <= 6 && isNull (objectParent player)  && !(player getVariable ['restrained',false])";
	};

	class EscortPlayer {
		title = "Escort Player";
		action = "[cursorObject] spawn ALSG_fnc_escortAction; closeDialog 0;";
		check = "((call(life_coplevel) > 0 && playerSide isEqualTo west) || (playerSide isEqualTo civilian && playerSide isEqualTo (cursorObject getVariable ['restrainType',sideEmpty]))) && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && !(cursorObject getVariable ['Escorting',false]) && player distance cursorObject <= 6 && isNull (objectParent player) && ((cursorObject getVariable['restrained',false]))  && !(player getVariable ['restrained',false])";
	};

	class StopEscortPlayer {
		title = "Stop Player Escort";
		action = "[] call ALSG_fnc_stopEscorting; closeDialog 0;";
		check = "player getVariable ['inHostage',false] isEqualTo false && player getVariable ['isEscorting',false] && isNull (objectParent player)";
	};

	class TicketPlayer {
		title = "Ticket Player";
		action = "closeDialog 0; [cursorObject] call ALSG_fnc_ticketAction;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class ArrestPlayer {
		title = "Arrest Player";
		action = "closeDialog 0; [cursorObject] spawn ALSG_fnc_openArrestMenu;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && cursorObject getVariable ['restrained',false] && player distance cursorObject <= 6 && isNull (objectParent player) && player distance (getMarkerPos 'jail_marker') < 500 && !(player getVariable ['restrained',false])";
	};

	class PutInCar {
		title = "Put Player In Car";
		action = "[cursorObject] call ALSG_fnc_putInCar;";
		check = "((call(life_coplevel) > 0 && playerSide isEqualTo west) || (playerSide isEqualTo civilian && playerSide isEqualTo (cursorObject getVariable ['restrainType',sideEmpty]))) && player getVariable ['inHostage',false] isEqualTo false && alive cursorObject && isPlayer cursorObject && cursorObject getVariable ['restrained',false] && player distance cursorObject <= 5 && !(player getVariable ['restrained',false])";
	};

	class RobPerson {
		title = "Rob Player";
		action = "call ALSG_fnc_robAction;";
		check = "alive cursorObject && isPlayer cursorObject && !(cursorObject getVariable ['robbed',false]) && player distance cursorObject <= 3.5 && ((animationState cursorObject) == 'Incapacitated' || (animationState cursorObject) == 'unconscious' || (animationState cursorObject) == 'unconsciousoutprone' || cursorObject getVariable ['playerSurrender',false] || (playerSide isEqualTo civilian && playerSide isEqualTo (cursorObject getVariable ['restrainType',sideEmpty]))) && !(player getVariable ['restrained',false])";
	};
	
	class PushVehicle {
		title = "Push Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_pushVehicle; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && local cursorObject && isNull (objectParent player)";
	};

	class RepairVehicle {
		title = "Repair Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_repairTruck; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && isNull (objectParent player)";
	};

	class LockpickVehicle {
		title = "Lockpick Vehicle";
		action = "[] spawn ALSG_fnc_lockpick; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && life_inv_lockpick > 0 && isNull (objectParent player) && alive cursorObject && locked cursorObject isEqualTo 2";
	};

	class GPSVehicle {
		title = "Track Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_gpsTracker; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && life_inv_gpstracker > 0 && isNull (objectParent player) && alive cursorObject";
	};
	
	class FillVehicle {
		title = "Fill Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_gangConvoyFill; closeDialog 0;";
		check = "cursorObject isKindOf 'Car' && player distance cursorObject <= 8 && typeOf cursorObject isEqualto 'C_Truck_02_covered_F' && isNull (objectParent player) && alive cursorObject && cursorObject getVariable 'convoyFilled' isEqualto false && cursorObject getVariable 'notFilled' && cursorObject getVariable 'convoyFinished' isEqualto false && cursorObject getVariable 'convoyMid'";
	};

	class DeliverSupplies {
		title = "Deliver Suppplies";
		action = "[cursorObject] spawn ALSG_fnc_gangConvoyFinish; closeDialog 0;";
		check = "cursorObject isKindOf 'Car' && player distance cursorObject <= 8 && typeOf cursorObject isEqualto 'C_Truck_02_covered_F' && isNull (objectParent player) && alive cursorObject && cursorObject getVariable 'convoyFilled' && cursorObject getVariable 'notFilled' isEqualto false && cursorObject getVariable 'convoyFinished' && cursorObject getVariable 'convoyEnd' isEqualto false";
	};

	class Registration {
		title = "Registration";
		action = "[cursorObject] spawn ALSG_fnc_searchVehAction; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) &&  !(cursorobject isEqualTo truckMissionVeh)";
	};

	class SearchVehicle {
		title = "Search Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_vehInvSearch; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class PulloutPlayers {
		title = "Pullout Players";
		action = "[cursorObject] spawn ALSG_fnc_pulloutAction; closeDialog 0;";
		check = "playerSide in [west,independent] && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && count crew cursorObject > 0 && !(player getVariable ['restrained',false])";
	};

	class ImpoundVehicle {
		title = "Impound Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_impoundAction; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && !(cursorobject isEqualTo truckMissionVeh) && !(player getVariable ['restrained',false])";
	};

	class PulloutPlayersCiv {
		title = "Pullout Players";
		action = "[cursorObject] spawn ALSG_fnc_pulloutAction; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && cursorObject in life_vehicles && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && count crew cursorObject > 0 && !(player getVariable ['restrained',false])";
	};

	class ImpoundVehicleMed {
		title = "Impound Vehicle";
		action = "[cursorObject] spawn ALSG_fnc_impoundAction; closeDialog 0;";
		check = "call(life_mediclevel) > 0 && playerSide isEqualTo independent && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && !(cursorobject isEqualTo truckMissionVeh)";
	};
	
	class UnflipVehicle {
		title = "Unflip Vehicle";
		action = "[cursorObject] call ALSG_fnc_unFlip; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && !(player getVariable ['restrained',false])";
	};

	class CheckLicenceInCar {
		title = "Check Licence of Driver";
		action = "[player] remoteExec [""ALSG_fnc_licenseCheck"",cursorObject]; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class TicketDriverInCar {
		title = "Ticket The Driver";
		action = "closeDialog 0; [cursorObject] call ALSG_fnc_ticketAction;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && cursorobject getVariable 'isTicketed' isEqualto 0";
	};

	class RemoveContainer  {
		title = "Remove Container";
		action = "cursorObject spawn ALSG_fnc_removeContainer;";
		check = "typeOf cursorObject isEqualto 'B_supplyCrate_F' && {player distance cursorObject < 3} || typeOf cursorObject isEqualTo 'Box_IND_Grenades_F' && {player distance cursorObject < 3}";
	};

	class SearchContainer  {
		title = "Search Container";
		action = "[life_container_activeObj] spawn ALSG_fnc_containerInvSearch;";
		check =  "typeOf cursorObject isEqualto 'B_supplyCrate_F' && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && call (life_coplevel) > 0 || typeOf cursorObject isEqualto 'Box_IND_Grenades_F' && playerSide isEqualTo west && player getVariable ['inHostage',false] isEqualTo false && call (life_coplevel) > 0";
	};

	class CoalProcessing  {
		title = "Process Coal";
		action = "closeDialog 0; [cursorobject,'coal'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CoalProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_coalOre > 0";
	};

	class IronProcessing  {
		title = "Process Iron";
		action = "closeDialog 0; [cursorobject,'iron'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'IronProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_ironOre > 0";
	};

	class DiamondProcessing  {
		title = "Process Diamond";
		action = "closeDialog 0; [cursorobject,'diamond'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'DiamondProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_diamondOre > 0";
	};

	class OilProcessing  {
		title = "Process Oil";
		action = "closeDialog 0; [cursorobject,'oil'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'OilProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_oil_unprocessed > 0";
	};

	class RubberProcessing  {
		title = "Process Rubber";
		action = "closeDialog 0; [cursorobject,'rubber'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RubberProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_rubberU > 0";
	};

	class ClothProcessing  {
		title = "Process Wool";
		action = "closeDialog 0; [cursorobject,'cloth'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'ClothProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_wool > 0";
	};

	class LSDProcessing  {
		title = "Process Mushrooms";
		action = "closeDialog 0; [cursorobject,'lsd'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'LSDProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_mushrooms > 0";
	};

	class RubyProcessing  {
		title = "Cut Ruby";
		action = "closeDialog 0; [cursorobject,'ruby'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RubyProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_rubyU > 0";
	};

	class UraniumProcessing  {
		title = "Process Uranium";
		action = "closeDialog 0; [cursorobject,'uranium'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'UraniumProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_uraniumU > 0";
	};

	class MarijuanaProcessing  {
		title = "Process Cannabis";
		action = "closeDialog 0; [cursorobject,'marijuana'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'MarijuanaProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_cannabis > 0";
	};

	class CocaineProcessing  {
		title = "Process Cocaine";
		action = "closeDialog 0; [cursorobject,'cocaine'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CocaineProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_cocaine_unprocessed > 0";
	};

	class HeroinProcessing  {
		title = "Process Heroin";
		action = "closeDialog 0; [cursorobject,'heroin'] spawn ALSG_fnc_processAction";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'HeroinProcess' > -1 && playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && !life_is_processing && !life_action_inUse && life_inv_heroin_unprocessed > 0";
	};

	class IronTrader  {
		title = "Trader";
		action = "[cursorobject,'','','iron'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'IronTrader' > -1 && playerSide isEqualTo civilian";
	};

	class CoalTrader  {
		title = "Trader";
		action = "[cursorobject,'','','coal'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'CoalTrader' > -1 && playerSide isEqualTo civilian";
	};

	class DiamondTrader  {
		title = "Trader";
		action = "[cursorobject,'','','diamond'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'DiamondTrader' > -1 && playerSide isEqualTo civilian";
	};

	class OilTrader  {
		title = "Trader";
		action = "[cursorobject,'','','oil'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'OilTrader' > -1 && playerSide isEqualTo civilian";
	};

	class RubyTrader  {
		title = "Trader";
		action = "[cursorobject,'','','jeweler'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'RubyTrader' > -1 && playerSide isEqualTo civilian";
	};

	class UraniumTrader  {
		title = "Trader";
		action = "[cursorobject,'','','uranium'] spawn ALSG_fnc_virt_menu";
		check = "alive cursorobject && (vehicleVarName cursorObject) find 'UraniumTrader' > -1 && playerSide isEqualTo civilian";
	};

	class PickupItems  {
		title = "Pickup Item(s)";
		action = "[] spawn ALSG_fnc_pickupItems;";
		check = "alive player && player getVariable ['inHostage',false] isEqualTo false && ((typeOf cursorObject) == 'Land_Suitcase_F') && !(player getVariable ['restrained',false])";
	};

	class PickupMoney  {
		title = "Pickup Money";
		action = "closeDialog 0; if (cursorObject getVariable [""inUse"",false] isEqualto false) then {[cursorObject,player,true] remoteExecCall [""TON_fnc_pickupAction"",2]};";
		check = "alive player && player getVariable ['inHostage',false] isEqualTo false && ((typeOf cursorObject) == ""Land_Money_F"") && {!(cursorObject getVariable [""inUse"",false])} && player distance cursorObject < 5";
	};

	class RobHouse {
		title = "Break Into House";
		action = "[cursorObject] spawn ALSG_fnc_breakDownHouse; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && cursorObject getVariable['locked',true] && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'POPLife_MetropolisV2' >> (typeOf cursorObject))) && (!(getPlayerUID player IN (cursorObject getVariable ['house_owner',[]]))) && cursorObject getVariable ['ArmaLife_HouseRobbed',false] isEqualTo false";
	};
	
	class RobHouseCrate {
		title = "Lockpick Chest";
		action = "[cursorObject] spawn ALSG_fnc_lockpickChest; closeDialog 0;";
		check = "playerSide isEqualTo civilian && player getVariable ['inHostage',false] isEqualTo false && cursorObject getVariable['ArmaLife_HouseRobberyCrate',false] && cursorObject getVariable ['ArmaLife_HouseRobberyCrateRobbed',false] isEqualto false && player distance cursorObject <= 5 && typeOf cursorObject isEqualTo 'Land_jbad_chest'";
	};

	class PlaceC4Charge {
		title = "Place Explosive Charge";
		action = "[cursorObject] spawn ArmaLife_SWATRaid; closeDialog 0;";
		check = "!(player getVariable ['inHostage',false]) && (((toLower ([cursorobject] call ArmaLife_GetDoor)) find 'door') > -1) && !(cursorobject getVariable [format ['%1c4charge',([cursorobject] call ArmaLife_GetDoor)],false]) && life_inv_doorc4 >= 1 && !(player getVariable ['restrained',false])";
	};

	class DoorBolt {
		title = "Bolt Door";
		action = "[cursorObject] spawn ArmaLife_BoltLock; closeDialog 0;";
		check = "!(player getVariable ['inHostage',false]) && (((toLower ([cursorobject] call ArmaLife_GetDoor)) find 'door') > -1) && !(cursorobject getVariable [format ['%1boltLocked',([cursorobject] call ArmaLife_GetDoor)],false]) && life_inv_boltLocker >= 1";
	};

	class RemoveDoorBolt {
		title = "Remove Door Bolt";
		action = "[cursorObject] spawn ArmaLife_RemoveBoltLock; closeDialog 0;";
		check = "!(player getVariable ['inHostage',false]) && (((toLower ([cursorobject] call ArmaLife_GetDoor)) find 'door') > -1) && (cursorobject getVariable [format ['%1boltLocked',([cursorobject] call ArmaLife_GetDoor)],false]) && life_inv_boltcutter >= 1";
	};

};
