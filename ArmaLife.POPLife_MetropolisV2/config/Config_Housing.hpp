#define true 1
#define false 0

class Housing {
	class POPLife_MetropolisV2 {

        class Land_i_Garage_V1_F {
            price = 150000;
            numberCrates = 0;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

		class Land_i_House_Big_02_V1_F {
            price = 780000;
            numberCrates = 2;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };
        
        class Land_i_House_Big_02_V2_F : Land_i_House_Big_02_V1_F{};
        class Land_i_House_Big_02_V3_F : Land_i_House_Big_02_V1_F{};

        class Land_i_House_Big_01_V1_F {
            price = 800000;
            numberCrates = 3;
            restrictedPos[] = {2,3};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_V2_F : Land_i_House_Big_01_V1_F{};
        class Land_i_House_Big_01_V3_F : Land_i_House_Big_01_V1_F{};

        class Land_i_House_Small_01_V1_F {
            price = 510000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1.5,0,2};
        };

        class Land_i_House_Small_01_V2_F : Land_i_House_Small_01_V1_F{};
        class Land_i_House_Small_01_V3_F : Land_i_House_Small_01_V1_F{};

        class Land_i_House_Small_02_V1_F {
            price = 570000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,2.4};
        };

        class Land_i_House_Small_02_V2_F : Land_i_House_Small_02_V1_F{};
        class Land_i_House_Small_02_V3_F : Land_i_House_Small_02_V1_F{};

        class Land_i_House_Small_03_V1_F {
            price = 650000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class Land_i_House_Small_03_V3_F : Land_i_House_Small_03_V1_F{};

        class Land_i_Stone_HouseSmall_V1_F {
            price = 650000;
            numberCrates = 1;
            restrictedPos[] = {0,1,3,4};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0.90,2.3,4};
        };

        class Land_i_Stone_HouseSmall_V2_F : Land_i_Stone_HouseSmall_V1_F{};
        class Land_i_Stone_HouseSmall_V3_F : Land_i_Stone_HouseSmall_V1_F{};

        class Land_HouseA { 
        	price = 410000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };
        
        class Land_HouseB : Land_HouseA {};
		class Land_HouseB1 : Land_HouseA {};

        class Land_deox_House_C2 { 
        	price = 410000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class Land_Ranch_DED_Ranch_01_F { 
        	price = 350000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class Land_Ranch_DED_Ranch_02_F : Land_Ranch_DED_Ranch_01_F {};

        class Land_Home6b_DED_Home6b_01_F { 
        	price = 420000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

		class Land_Home3r_DED_Home3r_01_F : Land_Home6b_DED_Home6b_01_F {};

        class land_pop_mansion { 
        	price = 540000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class land_modern7 { 
        	price = 940000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5}; 
        };
        class land_POP_Mansion_4 : land_modern7 {};
        class land_pop_chalet : land_modern7 {};

        class land_modern6 : land_modern7 {};

        class land_pop_caravana { 
        	price = 250000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5}; 
        };
        class land_pop_caravana2 : land_pop_caravana {};
        class land_pop_caravana1 : land_pop_caravana {};

        class Land_pop_mansion_deluxe { 
        	price = 1400000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5}; 
        }; 

        class land_mansion01 { 
        	price = 600000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5}; 
        }; 

        class land_9 { 
        	price = 400000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5}; 
        }; 
    };
};
