/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {
	class POPLife_MetropolisV2 {
        class Civilian {
			class Metropolis {
                displayName = "Metropolis City";
                description = "Metropolis City: The Main city of the island and the capitol of Metropolis, beware of low framerate here.";
                spawnMarker[] = {"civ_spawn_metropolis","civ_spawn_metropolis_1","civ_spawn_metropolis_2"};
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\spawn.paa";
                conditions = "";
            };
            class Lewlew {
                displayName = "DownTown";
                description = "DownTown: Located in the southwestern area of Metropolis, some say they can still hear the screaching of one Lewis Stewart in the late hours of the night.";
                spawnMarker = "civ_spawn_downtown";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\spawn.paa";
                conditions = "";
            };

            class NuevaEsperanza {
                displayName = "Nueva Esperanza";
                description = "Nueva Esperanza: The north western part of Metropolis, a dangerous area to be in controlled by the Mafia and the Cartel.";
                spawnMarker = "civ_spawn_lawless";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\spawn.paa";
                conditions = "(missionNamespace getVariable ['mav_ttm_var_north',0]) isEqualTo 1";
            };
        };

        class Cop {
            class MetropolisHQ {
                displayName = "Metropolis HQ";
                description = "Metropolis HQ for Police";
                spawnMarker = "cop_spawn_1";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "(call life_copdept) in [1,5,6,7]";
            };

            class MonkaHQ {
                displayName = "Monka Horizon HQ";
                description = "Monka HQ for Police";
                spawnMarker = "cop_spawn_2";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };

            class ClowntownHQ {
                displayName = "Clown Town HQ";
                description = "Clown Town HQ for Police";
                spawnMarker = "cop_spawn_3";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };

            class RiversideHQ {
                displayName = "Riverside HQ";
                description = "Riverside HQ for Police";
                spawnMarker = "cop_spawn_4";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };
        };

        class Medic {
            class MetropolisHospital {
                displayName = "Metropolis Hospital";
                description = "Metropolis HQ for EMS";
                spawnMarker = "medic_spawn_4";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };
            class MetropolisFireDepartment {
                displayName = "Metropolis Fire Department";
                description = "Metropolis HQ for FD";
                spawnMarker = "medic_spawn_1";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };
            class MonkaHospital {
                displayName = "Monka Horizon Hospital";
                description = "Monka HQ for EMS";
                spawnMarker = "medic_spawn_2";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };
            class RiversideHospital {
                displayName = "Riverside Hospital";
                description = "Riverside HQ for EMS";
                spawnMarker = "medic_spawn_3";
                icon = "\ArmalifeCore\images\displays\displaySpawns\TreeIcons\safehouse.paa";
                conditions = "";
            };
        };
    };
};
