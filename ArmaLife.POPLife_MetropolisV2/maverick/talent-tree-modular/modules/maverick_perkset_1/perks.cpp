class perk_civilian_master {
	displayName = "Civilian Perks";
	requiredPerkPoints = 1;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "1 point required to unlock this tree";
	description = "Learn and improve on civilian specific perks";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {0,0.6,0,1};
};

class perk_processing_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "perk_civilian_master";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 13;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 13 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_4 {
	displayName = "Processing Speed 4";
	requiredPerkPoints = 5;
	requiredLevel = 17;
	requiredPerk = "perk_processing_3";
	subtitle = "Level 17 Required, 5 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+40% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_5 {
	displayName = "Processing Speed 5";
	requiredPerkPoints = 7;
	requiredLevel = 24;
	requiredPerk = "perk_processing_4";
	subtitle = "Level 24 Required, 7 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+55% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_6 {
	displayName = "Processing Speed 6";
	requiredPerkPoints = 12;
	requiredLevel = 35;
	requiredPerk = "perk_processing_5";
	subtitle = "Level 35 Required, 12 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+75% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_6.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_air_1 {
	displayName = "Aviation Training";
	requiredPerkPoints = 2;
	requiredLevel = 6;
	requiredPerk = "perk_civilian_master";
	subtitle = "Level 6 Required, 2 Perk Points";
	description = "Gain access to the air shops to buy aircraft";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_air_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_home_1 {
	displayName = "Home Ownership";
	requiredPerkPoints = 2;
	requiredLevel = 9;
	requiredPerk = "perk_civilian_master";
	subtitle = "Level 9 Required, 2 Perk Points";
	description = "Gain the ability to own your own house";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_home_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_north {
	displayName = "North Spawn";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_civilian_master";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Gain the ability to spawn in the Nueva Esperanza";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_north.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_police_master {
	displayName = "Police Perks";
	requiredPerkPoints = 1;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "1 point required to unlock this tree";
	description = "Learn and improve on police specific perks";
	initScript = "";
	limitToSides[] = {"WEST"};
	color[] = {0,0,0.6,1};
};

class functions_impoundSpeed_1 {
	displayName = "Impounding";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_police_master";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>100% faster impounding</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_impoundSpeed_1.sqf";
	limitToSides[] = {"WEST"};
	color[] = {1,1,1,1};
};

class functions_impoundSpeed_2 {
	displayName = "Impounding 2";
	requiredPerkPoints = 5;
	requiredLevel = 12;
	requiredPerk = "functions_impoundSpeed_1";
	subtitle = "Level 12 Required, 5 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>200% faster impounding</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_impoundSpeed_2.sqf";
	limitToSides[] = {"WEST"};
	color[] = {1,1,1,1};
};

class perk_global_master {
	displayName = "Global Perks";
	requiredPerkPoints = 1;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "1 point required to unlock this tree";
	description = "General perks for everyone to level up";
	initScript = "";
	limitToSides[] = {};
	color[] = {0.2,0.5,0.3,1};
};

class kill_feed {
	displayName = "Kill Feed";
	color[] = {1,1,1,1};
	requiredPerkPoints = 7;
	requiredLevel = 14;
	requiredPerk = "perk_global_master";
	subtitle = "Level 14 Required, 7 Perk Points";
	description = "You will get a kill feed when you kill someone.";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_kill_feed.sqf";
};

class perk_evidence_1 {
	displayName = "Evidence 25% Faster";
	color[] = {1,1,1,1};
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_global_master";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "You will be able to pickup/destroy evidence 25% faster.";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_evidence_1.sqf";
};

class perk_evidence_2 {
	displayName = "Evidence 50% Faster";
	color[] = {1,1,1,1};
	requiredPerkPoints = 7;
	requiredLevel = 13;
	requiredPerk = "perk_evidence_1";
	subtitle = "Level 13 Required, 7 Perk Points";
	description = "You will be able to pickup/destroy evidence 50% faster.";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_evidence_2.sqf";
};

class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "perk_global_master";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+20% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+35% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+75% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_4 {
	displayName = "Paycheck 4";
	requiredPerkPoints = 12;
	requiredLevel = 33;
	requiredPerk = "perk_paycheck_3";
	subtitle = "Level 33 Required, 12 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_5 {
	displayName = "Direct Deposit";
	requiredPerkPoints = 6;
	requiredLevel = 35;
	requiredPerk = "perk_paycheck_4";
	subtitle = "Level 35 Required, 6 Perk Points";
	description = "All paychecks will get direct deposit'd into your bank account.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_directdeposit.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_repairSpeed_1 {
	displayName = "Repairing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_global_master";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "You can repair vehicles more efficiently<br/><br/><t color='#10FF45'>40% faster repairing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_repairSpeed_2 {
	displayName = "Repairing Speed 2";
	requiredPerkPoints = 4;
	requiredLevel = 9;
	requiredPerk = "functions_repairSpeed_1";
	subtitle = "Level 9 Required, 4 Perk Points";
	description = "You can repair vehicles more efficiently<br/><br/><t color='#10FF45'>75% faster repairing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_stamina_1 {
	displayName = "Unlimited Stamina";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_global_master";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Stamina<br/><br/><t color='#10FF45'>No longer run out of stamina, ever. If purchased, relog to see effect take place.</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_stamina_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_medical {
	displayName = "Medical Perks";
	color[] = {0.75,0.04,0.19,1};
	requiredPerkPoints = 1;
	requiredLevel = 1;
	requiredPerk = "";
	limitToSides[] = {};
	subtitle = "1 point required to unlock this tree";
	description = "Learn and improve on medical specific perks";
};

class perk_cpr_1 {
	displayName = "25% Cpr Chance";
	color[] = {1,1,1,1};
	requiredPerkPoints = 7;
	requiredLevel = 5;
	requiredPerk = "perk_medical";
	subtitle = "Level 5 Required, 7 Perk Points";
	description = "Increase your CPR chance from 15% to 25%";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_cpr_one.sqf";
};

class perk_cpr_2 {
	displayName = "50% Cpr Chance";
	color[] = {1,1,1,1};
	requiredPerkPoints = 7;
	requiredLevel = 15;
	requiredPerk = "perk_cpr_1";
	subtitle = "Level 15 Required, 7 Perk Points";
	description = "Increase your CPR chance from 25% to 50%";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_cpr_two.sqf";
};

class perk_cpr_full {
	displayName = "Full CPR HP";
	color[] = {1,1,1,1};
	requiredPerkPoints = 7;
	requiredLevel = 21;
	requiredPerk = "perk_cpr_2";
	subtitle = "Level 21 Required, 7 Perk Points";
	description = "When you CPR someone they will be on full hp.";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_cpr_full.sqf";
};

class perk_stabalizeLength_1 {
	displayName = "Stabalize Length 1";
	color[] = {1,1,1,1};
	requiredPerkPoints = 3;
	requiredLevel = 9;
	requiredPerk = "perk_medical";
	subtitle = "Level 9 Required, 3 Perk Points";
	description = "Increase your stabalize length from 1 minute to 2 minutes";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_stabalizeLength_one.sqf";
};

class perk_stabalizeLength_2 {
	displayName = "Stabalize Length 2";
	color[] = {1,1,1,1};
	requiredPerkPoints = 5;
	requiredLevel = 11;
	requiredPerk = "perk_stabalizeLength_1";
	subtitle = "Level 11 Required, 5 Perk Points";
	description = "Increase your stabalize length from 2 minute to 3 minutes";	
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_stabalizeLength_two.sqf";
};

class perk_gunsspecialist_master {
	displayName = "Weapon Perks";
	requiredPerkPoints = 1;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "1 point required to unlock this tree";
	description = "Learn and improve on your weapon skills";
	initScript = "";
	limitToSides[] = {"CIV","WEST"};
	color[] = {0.85,0.7,0,1};
};

class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "perk_gunsspecialist_master";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 21;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 21 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_4 {
	displayName = "Recoil Compensation 4";
	requiredPerkPoints = 9;
	requiredLevel = 30;
	requiredPerk = "perk_gunsspecialist_lessRecoil_3";
	subtitle = "Level 30 Required, 9 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-25% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_5 {
	displayName = "Recoil Compensation 5";
	requiredPerkPoints = 12;
	requiredLevel = 40;
	requiredPerk = "perk_gunsspecialist_lessRecoil_4";
	subtitle = "Level 40 Required, 12 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-30% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_5.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_1 {
	displayName = "Weapon Sway Control";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "perk_gunsspecialist_master";
	subtitle = "Level 7 Required, 5 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-15% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_2 {
	displayName = "Weapon Sway Control 2";
	requiredPerkPoints = 6;
	requiredLevel = 17;
	requiredPerk = "perk_weaponSway_1";
	subtitle = "Level 17 Required, 6 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-25% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_3 {
	displayName = "Weapon Sway Control 3";
	requiredPerkPoints = 7;
	requiredLevel = 28;
	requiredPerk = "perk_weaponSway_2";
	subtitle = "Level 28 Required, 7 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-30% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_4 {
	displayName = "Weapon Sway Control 4";
	requiredPerkPoints = 10;
	requiredLevel = 40;
	requiredPerk = "perk_weaponSway_3";
	subtitle = "Level 40 Required, 10 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-40% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_illegal_master {
	displayName = "Illegal Perks";
	requiredPerkPoints = 1;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3/1 point required to unlock this tree";
	description = "Learn and improve on perks focused around illegal activities";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {0.6,0,0,1};
};

class perk_lsd_1 {
	displayName = "LSD Gathering";
	requiredPerkPoints = 3;
	requiredLevel = 6;
	requiredPerk = "perk_illegal_master";
	subtitle = "Level 6 Required, 3 Perk Points";
	description = "Learn to gather mushrooms to make LSD<br/><br/><t color='#10FF45'>Estimated at 15% more profit than cocaine</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lsd_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_uranium_1 {
	displayName = "Uranium Gathering";
	requiredPerkPoints = 8;
	requiredLevel = 20;
	requiredPerk = "perk_lsd_1";
	subtitle = "Level 20 Required, 8 Perk Points";
	description = "Learn to gather uranium to process and sell for major profit<br/><br/><t color='#10FF45'>Estimated at 45% more profit than cocaine</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_uranium_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_illegal_master";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 5;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 7;
	requiredLevel = 23;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 23 Required, 7 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_4 {
	displayName = "Locksmith 4";
	requiredPerkPoints = 9;
	requiredLevel = 29;
	requiredPerk = "perk_locksmith_3";
	subtitle = "Level 28 Required, 9 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+45% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_5 {
	displayName = "Locksmith 5";
	requiredPerkPoints = 12;
	requiredLevel = 36;
	requiredPerk = "perk_locksmith_4";
	subtitle = "Level 36 Required, 12 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+75% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_rebel_1 {
	displayName = "Become a Rebel";
	requiredPerkPoints = 3;
	requiredLevel = 10;
	requiredPerk = "perk_illegal_master";
	subtitle = "Level 10 Required, 3 Perk Points";
	description = "Get access to a weapon shop and illegal items to make sure you are one step ahead of your enemies.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gasrobbery_1 {
	displayName = "Armed Robbery";
	requiredPerkPoints = 6;
	requiredLevel = 17;
	requiredPerk = "perk_illegal_master";
	subtitle = "Level 17 Required, 6 Perk Points";
	description = "Learn to intimidate gas station clerks and banks more efficiently<br/><br/><t color='#10FF45'>+50% faster robbing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gasrobbery_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_policecheck_1 {
	displayName = "Checkpoint Detection";
	requiredPerkPoints = 6;
	requiredLevel = 35;
	requiredPerk = "perk_illegal_master";
	subtitle = "Level 35 Required, 6 Perk Points";
	description = "Get a notification and a mark on your map when police set up a checkpoint, be one step ahead of them with this perk.";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_quests {
	displayName = "Quests";
	requiredPerkPoints = 5;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3/5 points required to unlock this tree";
	description = "Begin your journey with questing, quests give good xp and allow you to do things others cant!";
	initScript = "";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};

class functions_relicReward {
	displayName = "Quest: Collecting Relics";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_quests";
	subtitle = "Collecting Hidden Relics";
	description = "Bring all the hidden relics around the map (4) to the archeologist <br/><br/><t color='#10FF45'>Reward: 2375 xp</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_relicReward2 {
	displayName = "Quest: Collecting Relics 2";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_relicReward";
	subtitle = "Federal Reserve Relic";
	description = "Rob the federal reserve, gather the relic from the reward and bring it to the archeologist <br/><br/><t color='#10FF45'>Reward: 3900 xp and ability to loot oil rig cargo</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_satellite {
	displayName = "Quest: Secrets of the depths";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_relicReward2";
	subtitle = "????????";
	description = "345723.47456Researchasd.234Facilityad234s.csdfSatellite.resdf<br/><br/><t color='#10FF45'>Reward: 3000 xp and the ability to gather ????????</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_satellite.sqf";
	limitToSides[] = {};
	color[] = {0.38,0.05,0,1};
};