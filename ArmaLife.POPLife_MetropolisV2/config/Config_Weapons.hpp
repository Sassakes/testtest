/*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Description): Description of item
*        2: SCALAR (Buy price): Cost of item
*        3: STRING (Conditions): Same as above conditions string
*        4: STRING (Nickname): Nickname that will appear purely in the shop dialog
*/

class WeaponShops {
  class cop {
    name = "Cop Weapon Shop";
    conditions = "call life_coplevel >= 1";
    side = "cop";
    weapons[] = {
      { "HandGrenade_Stone", "Blind your suspects and get the upper hand.", 3500, "call life_copdept in [6,7]", "Flashbang"},
      { "SmokeShellBlue", "", 2500, "call life_copdept in [6,7]", ""},
      { "taser", "A gun that will drop your target", 50, "call life_coplevel >= 1", ""},
      { "hlc_Pistol_M11", "", 580, "true", ""},
      { "hlc_pistol_Mk25", "", 570, "true", ""},
      { "hlc_pistol_P226WestGerman", "", 670, "true", ""},
      { "hlc_Pistol_P228", "", 670, "true", ""},
      { "hlc_Pistol_M11A1", "", 680, "true", ""},
      { "hlc_Pistol_M11A1D", "", 680, "true", ""},
      { "hlc_pistol_Mk25D", "", 670, "true", ""},
      { "hlc_pistol_Mk25TR", "", 670, "true", ""},
      { "arifle_SDAR_F", "", 6000, "call life_coplevel >= 3 || call life_copdept in [5,6,7]", ""},
      { "hlc_smg_mp5a3", "", 4000, "call life_coplevel >= 2 || call life_copdept in [5,6,7]", ""},
      { "hlc_rifle_M4", "", 25000, "call life_coplevel >= 3 || call life_copdept in [5,6,7]", ""},
      { "hlc_rifle_CQBR", "", 20000, "call life_coplevel >= 3 || call life_copdept in [5,6,7]", ""},
      { "hlc_rifle_RU556", "", 22000, "call life_coplevel >= 3 || call life_copdept in [5,6,7]", ""},
      { "hlc_rifle_SAMR", "", 25000, "call life_coplevel >= 4 || call life_copdept in [5,6,7]", ""},
      { "SMA_AUG_A3_F", "", 15000, "call life_coplevel >= 4 || call life_copdept in [5,6,7]", ""},
      { "hlc_rifle_ACR68_mid_black", "", 35000, "call life_coplevel >= 6 || call life_copdept in [5,6,7]", ""},
      { "arifle_SPAR_01_blk_F", "", 20000, "call life_coplevel >= 6 || call life_copdept in [5,6,7]", ""},
      { "SMA_SAR21_F", "", 30000, "call life_coplevel >= 6 || call life_copdept in [5,6,7]", ""},
      { "SMA_MK18MOE_SM", "", 35000, "call life_coplevel >= 6 || call life_copdept in [5,6,7]", ""},
      { "SMA_M4afg_SM", "", 34000, "call life_coplevel >= 6 || call life_copdept in [5,6,7]", ""},
      { "SMA_L85RIS", "", 40000, "call life_coplevel >= 6 || call life_copdept in [5,6,7]", ""},
      { "hlc_rifle_FN3011", "", 40000, "call life_coplevel >= 5 && call life_copdept in [6,7]", ""},
      { "launch_B_Titan_F", "This will launch fuel rockets at heli when locking on.", 60000, "call life_copdept in [5,7]", "Fuel Rocket Launcher"}
    };
    
    magazines[] = {
      { "vvv_np_magazine_taser", "Magazine for tazer", 5, "call life_coplevel >= 1", ""},
      { "8Rnd_9x19_Magazine", "", 10, "true", ""},
      { "hlc_13Rnd_9x19_B_P228", "", 10, "true", ""},
      { "hlc_15Rnd_9x19_B_P226", "", 10, "true", ""},
      { "8Rnd_45GAP_Magazine", "", 10, "true", ""},
      { "6Rnd_357M_Magazine", "", 10, "true", ""},
      { "20Rnd_556x45_UW_mag", "", 50, "true", ""},
      { "hlc_30Rnd_9x19_B_MP5", "", 100, "true", ""},
      { "hlc_30rnd_556x45_EPR", "", 100, "true", ""},
      { "30Rnd_556x45_Stanag", "", 100, "true", ""},
      { "hlc_30rnd_556x45_SOST", "", 100, "true", ""},
      { "hlc_30rnd_68x43_FMJ", "", 110, "true", ""},
      { "SMA_30Rnd_556x45_Mk262", "", 100, "true", ""},
      { "hlc_10Rnd_762x51_mk316_fal", "", 100, "true", ""},
      { "Titan_AA", "This will drain the helis fuel when rocket hits.", 1000, "call life_copdept in [5,7]", "Fuel Rocket"}
    };

    items[] = {
      {"Binocular", "Use these to see stuff at furthur distances", 250, "call life_coplevel >= 1", ""},
      {"ItemGPS", "Use this to not get lost", 500, "call life_coplevel >= 1", ""},
      {"ItemMap", "Use this to find the local shops", 10, "call life_coplevel >= 1", ""},
      {"ItemCompass", "Use this to find directions", 10, "call life_coplevel >= 1", ""},
      {"RoleplayRadio", "Use this to communicate from distance", 15, "call life_coplevel >= 1", ""},
    };

    attachments[] = {
      { "optic_Hamr", "", 50, "true", ""},
      { "SMA_MICRO_T2_3XUP", "", 50, "true", ""},
      { "SMA_eotech552_kf", "", 50, "true", ""},
      { "SMA_BARSKA", "", 50, "true", ""},
      { "optic_MRCO", "", 50, "true", ""},
      { "optic_Arco_blk_F", "", 50, "true", ""},
      { "optic_ERCO_blk_F", "", 50, "true", ""},
      { "optic_MRD", "", 50, "true", ""},
      { "HLC_optic228_ATT", "", 20, "true", ""},
      { "HLC_optic228_VTAC", "", 20, "true", ""},
      { "HLC_Optic_Romeo1_RX", "", 50, "true", ""},
      { "HLC_optic228_stavenhagen", "", 50, "true", ""},
      { "hlc_optic_Kern_3011", "", 50, "true", ""},
      { "acc_flashlight", "", 50, "true", ""}
    };
  };

  class gun {
    name = "Metropolis Firearms";
    conditions = "license_civ_gun";
    side = "civ";
    weapons[] = {
        { "hlc_Pistol_M11", "", 11600, "true", ""},
        { "hlc_pistol_Mk25", "", 11400, "true", ""},
        { "hlc_pistol_P226WestGerman", "", 13400, "true", ""},
        { "hlc_Pistol_P228", "", 13400, "true", ""},
        { "hlc_Pistol_M11A1", "", 13600, "true", ""},
        { "hlc_Pistol_M11A1D", "", 13600, "true", ""},
        { "hlc_pistol_Mk25D", "", 13500, "true", ""},
        { "hlc_pistol_Mk25TR", "", 13500, "true", ""},
  	    { "hgun_Pistol_heavy_01_F", "", 13500, "true", ""},
  	    { "hgun_Rook40_F", "", 13500, "true", ""}
    };
      
    magazines[] = {
        { "hlc_13Rnd_9x19_B_P228", "", 30, "true", ""},
        { "hlc_15Rnd_9x19_B_P226", "", 40, "true", ""},
        { "8Rnd_45GAP_Magazine", "", 50, "true", ""},
        { "6Rnd_357M_Magazine", "", 100, "true", ""},
        { "hlc_30rnd_556x45_EPR", "", 30, "true", ""},
  	    { "11Rnd_45ACP_Mag", "", 30, "true", ""},
  	    { "16Rnd_9x21_Mag", "", 30, "true", ""}
    };

    attachments[] = {
        { "optic_Yorris", "", 50, "true", ""},
        { "optic_MRD", "", 50, "true", ""},
        { "HLC_optic228_ATT", "", 20, "true", ""},
        { "HLC_optic228_VTAC", "", 20, "true", ""},
        { "HLC_Optic_Romeo1_RX", "", 50, "true", ""},
        { "HLC_optic228_stavenhagen", "", 50, "true", ""}
    };
    items[] = {
  		{ "RoleplayRadio", "Use this to communicate from distance", 150, "true", ""},
  		{ "Binocular", "Use these to see stuff at furthur distances", 250, "true", ""},
  		{ "ItemGPS", "Use this to not get lost", 500, "true", ""},
  		{ "ItemMap", "Use this to find the local shops", 10, "true", ""},
  		{ "ItemCompass", "Use this to find directions", 10, "true", ""}
   	};
  };

  class jail {
    name = "Jail Firearms";
    conditions = "life_is_arrested";
    side = "civ";
    weapons[] = {
		{ "hgun_Pistol_heavy_01_F", "", 6000, "true", ""},
		{ "hgun_Rook40_F", "", 7000, "true", ""}
    };
      
    magazines[] = {
		{ "11Rnd_45ACP_Mag", "", 500, "true", ""},
		{ "16Rnd_9x21_Mag", "", 750, "true", ""}
    };

    attachments[] = {
		{ "optic_Yorris", "", 50, "true", ""},
		{ "optic_MRD", "", 50, "true", ""},
		{ "HLC_optic228_ATT", "", 20, "true", ""},
		{ "HLC_optic228_VTAC", "", 20, "true", ""},
		{ "HLC_Optic_Romeo1_RX", "", 50, "true", ""},
		{ "HLC_optic228_stavenhagen", "", 50, "true", ""}
    };
    items[] = {
		{ "RoleplayRadio", "Use this to talk to others out of jail", 250, "true", ""},
		{ "Binocular", "Use these to see cops at furthur distances", 250, "true", ""},
		{ "ItemGPS", "Let others find you if you are in a gang", 750, "true", ""},
		{ "ItemMap", "Use this to find your way out", 100, "true", ""}
    };
  };

  class rebel {
    name = "rebel";
    conditions = "(missionNamespace getVariable ['mav_ttm_var_rebel',0]) isEqualTo 1";
    side = "civ";
    weapons[] = {
      { "hlc_smg_mp5k", "", 30000, "true", ""},
      { "arifle_AKS_F", "", 40000, "true", ""},
      { "hlc_rifle_CQBR", "", 43000, "true", ""},
  	  { "hlc_rifle_RPK12", "", 50000, "true", ""},
  	  { "hlc_smg_mp510", "", 50000, "true", ""},        
      { "arifle_CTAR_hex_F", "", 50000, "true", ""},
      { "FHQ_arifle_Galil_556_black", "", 65000, "true", ""},
      { "hlc_rifle_RU556", "", 65000, "true", ""},
      { "hlc_rifle_aek971_mtk", "", 65000, "true", ""},
      { "hlc_rifle_ACR_SBR_tan", "", 70000, "true", ""},
      { "hlc_rifle_SG553LB_RIS", "", 70000, "true", ""},
      { "SMA_HK416afg", "", 70000, "true", ""},
      { "SMA_SAR21_F", "", 72000, "true", ""},
      { "SMA_MK18MOE_SM", "", 75000, "true", ""},
      { "hlc_rifle_SAMR", "", 75000, "true", ""},
      { "arifle_SPAR_01_blk_F", "", 80000, "true", ""}
    };

    magazines[] = {
      { "hlc_30Rnd_9x19_B_MP5", "", 100, "true", ""},
      { "hlc_30rnd_556x45_EPR", "", 100, "true", ""},
      { "30Rnd_545x39_Mag_F", "", 100, "true", ""},
      { "hlc_30Rnd_10mm_B_MP5", "", 100, "true", ""},
      { "30Rnd_556x45_Stanag", "", 100, "true", ""},
      { "30Rnd_580x42_Mag_F", "", 100, "true", ""},
      { "hlc_30Rnd_556x45_SPR_sg550", "", 100, "true", ""},
      { "hlc_30Rnd_545x39_t_ak", "", 100, "true", ""},
      { "SMA_30Rnd_556x45_Mk262", "", 100, "true", ""},
      { "FHQ_35Rnd_556x45_Mag", "", 100, "true", ""},
      { "hlc_30Rnd_545x39_B_AK", "", 100, "true", ""}
    };
    
    attachments[] = {
      { "optic_Arco_blk_F", "", 50, "true", ""},
      { "optic_ERCO_blk_F", "", 50, "true", ""},
      { "optic_MRCO", "", 20, "true", ""},
      { "optic_Hamr", "", 20, "true", ""},
      { "optic_Holosight", "", 20, "true", ""},
      { "SMA_MICRO_T2_3XUP", "", 20, "true", ""},
      { "SMA_eotech552_kf", "", 20, "true", ""},
      { "SMA_BARSKA", "", 20, "true", ""}
    };

    items[] = {
      { "RoleplayRadio", "Use this to communicate from distance", 150, "true", ""},
      { "Binocular", "Use these to see stuff at furthur distances", 250, "true", ""},
      { "ItemGPS", "Use this to not get lost", 500, "true", ""},
      { "ItemMap", "Use this to find the local shops", 10, "true", ""},
      { "ItemCompass", "Use this to find directions", 10, "true", ""}
    };
  };

  class genstore {
    name = "Metropolis General Store";
    conditions = "";
    side = "civ";
    weapons[] = {
      { "TR8_Mining_Drill", "Used to mine more ore", 1000, "true", ""},
      { "Mr_Camera_News", "Used to record the news.", 1000, "true", ""},
      { "Mr_Micro_News", "Used to record audio.", 1000, "true", ""}
    };

    magazines[] = {
      { "10_TR8_Drill_Fuel", "Fuel for the drill", 100, "true", ""}
    };

    items[] = {
      { "RoleplayRadio", "Use this to communicate from distance", 150, "true", ""},
      { "Binocular", "Use these to see stuff at furthur distances", 250, "true", ""},
      { "ItemGPS", "Use this to not get lost", 500, "true", ""},
      { "ItemMap", "Use this to find the local shops", 10, "true", ""},
      { "ItemCompass", "Use this to find directions", 10, "true", ""}    
    };
  };

  class f_station_store {
    name = "Metropolis Fuel Station Store";
    conditions = "";
    side = "civ";
    items[] = {
      { "RoleplayRadio", "Use this to communicate from distance", 150, "true", ""},
      { "Binocular", "Use these to see stuff at furthur distances", 250, "true", ""},
      { "ItemGPS", "Use this to not get lost", 500, "true", ""},
      { "ItemMap", "Use this to find the local shops", 10, "true", ""},
      { "ItemCompass", "Use this to find directions", 10, "true", ""}
    };
  };

  class med_basic {
    name = "Medic Shop";
    conditions = "call life_medicLevel >= 1";
    side = "med";
    items[] = {
      { "RoleplayRadio", "Use this to communicate from distance", 50, "call(life_medicLevel) >= 1", ""},
      { "Medikit", "Use this to heal to full health", 50, "call(life_medicLevel) >= 1", ""},
      { "FirstAidKit", "Use this to heal players", 50, "call(life_medicLevel) >= 1", ""},
      { "Binocular", "Use this to communicate from distance", 50, "call(life_medicLevel) >= 1", ""},
      { "ItemGPS", "Use this to not get lost", 50, "call(life_medicLevel) >= 1", ""},
      { "ItemMap", "Use this to find the local shops", 10, "call(life_medicLevel) >= 1", ""},
      { "ItemCompass", "Use this to find directions", 10, "call(life_medicLevel) >= 1", ""}
    };
  };
};