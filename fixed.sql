-- --------------------------------------------------------
-- Host:                         74.91.114.97
-- Server version:               10.1.38-MariaDB - mariadb.org binary distribution
-- Server OS:                    Win64
-- HeidiSQL Version:             10.1.0.5464
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


-- Dumping database structure for armalife
CREATE DATABASE IF NOT EXISTS `armalife` /*!40100 DEFAULT CHARACTER SET utf8mb4 */;
USE `armalife`;

-- Dumping structure for table armalife.access
CREATE TABLE IF NOT EXISTS `access` (
  `accessID` int(11) NOT NULL AUTO_INCREMENT,
  `date_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `address` varchar(64) DEFAULT NULL,
  `failed` int(11) NOT NULL,
  PRIMARY KEY (`accessID`),
  UNIQUE KEY `accessID` (`accessID`),
  KEY `accessID_1` (`accessID`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

-- Dumping data for table armalife.access: ~2 rows (approximately)
/*!40000 ALTER TABLE `access` DISABLE KEYS */;
INSERT INTO `access` (`accessID`, `date_time`, `address`, `failed`) VALUES
	(3, '2019-04-23 13:24:18', '162.158.158.126', 0),
	(4, '2019-04-23 16:27:51', '141.101.99.36', 0),
	(5, '2019-04-23 17:32:02', '141.101.107.49', 0);
/*!40000 ALTER TABLE `access` ENABLE KEYS */;

-- Dumping structure for table armalife.armalife_phonemessages
CREATE TABLE IF NOT EXISTS `armalife_phonemessages` (
  `sender` varchar(50) DEFAULT NULL,
  `receiver` varchar(50) DEFAULT NULL,
  `message` text,
  `timesent` timestamp NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.armalife_phonemessages: ~0 rows (approximately)
/*!40000 ALTER TABLE `armalife_phonemessages` DISABLE KEYS */;
/*!40000 ALTER TABLE `armalife_phonemessages` ENABLE KEYS */;

-- Dumping structure for table armalife.armalife_phonenumbers
CREATE TABLE IF NOT EXISTS `armalife_phonenumbers` (
  `number` varchar(50) DEFAULT NULL,
  `uid` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.armalife_phonenumbers: ~0 rows (approximately)
/*!40000 ALTER TABLE `armalife_phonenumbers` DISABLE KEYS */;
INSERT INTO `armalife_phonenumbers` (`number`, `uid`) VALUES
	('7186010929', '76561198207240099'),
	('7465819678', '76561198137248966');
/*!40000 ALTER TABLE `armalife_phonenumbers` ENABLE KEYS */;

-- Dumping structure for table armalife.containers
CREATE TABLE IF NOT EXISTS `containers` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `classname` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `dir` varchar(128) DEFAULT NULL,
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `owned` tinyint(1) DEFAULT '0',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=54 DEFAULT CHARSET=utf8mb4 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.containers: ~0 rows (approximately)
/*!40000 ALTER TABLE `containers` DISABLE KEYS */;
/*!40000 ALTER TABLE `containers` ENABLE KEYS */;

-- Dumping structure for procedure armalife.deleteDeadVehicles
DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteDeadVehicles`()
BEGIN
  DELETE FROM `vehicles` WHERE `alive` = 0;
END//
DELIMITER ;

-- Dumping structure for procedure armalife.deleteOldContainers
DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldContainers`()
BEGIN
  DELETE FROM `containers` WHERE `owned` = 0;
END//
DELIMITER ;

-- Dumping structure for procedure armalife.deleteOldGangs
DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldGangs`()
BEGIN
  DELETE FROM `gangs` WHERE `active` = 0;
END//
DELIMITER ;

-- Dumping structure for procedure armalife.deleteOldHouses
DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldHouses`()
BEGIN
  DELETE FROM `houses` WHERE `owned` = 0;
END//
DELIMITER ;

-- Dumping structure for procedure armalife.deleteUnpaidHouses
DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteUnpaidHouses`()
BEGIN
  DELETE FROM `houses` WHERE `property_tax` = 0;
END//
DELIMITER ;

-- Dumping structure for table armalife.gangs
CREATE TABLE IF NOT EXISTS `gangs` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `owner` varchar(32) DEFAULT NULL,
  `name` varchar(32) DEFAULT NULL,
  `members` text,
  `maxmembers` int(3) DEFAULT '50',
  `bank` int(100) DEFAULT '0',
  `active` tinyint(1) DEFAULT '1',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `tasks` text,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE KEY `name_UNIQUE` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=133 DEFAULT CHARSET=utf8mb4 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.gangs: ~0 rows (approximately)
/*!40000 ALTER TABLE `gangs` DISABLE KEYS */;
INSERT INTO `gangs` (`id`, `owner`, `name`, `members`, `maxmembers`, `bank`, `active`, `insert_time`, `tasks`) VALUES
	(132, '76561198319377968', 'The Monkarellos', '"[[`Lewie Petrewie`,`76561198319377968`,4]]"', 50, 0, 1, '2019-04-23 19:49:10', '[1,[0,0,0,0,0,0]]');
/*!40000 ALTER TABLE `gangs` ENABLE KEYS */;

-- Dumping structure for table armalife.houses
CREATE TABLE IF NOT EXISTS `houses` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `owned` tinyint(1) DEFAULT '0',
  `garage` tinyint(1) NOT NULL DEFAULT '0',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `property_tax` int(1) NOT NULL DEFAULT '7',
  PRIMARY KEY (`id`,`pid`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=123 DEFAULT CHARSET=utf8mb4 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.houses: ~0 rows (approximately)
/*!40000 ALTER TABLE `houses` DISABLE KEYS */;
INSERT INTO `houses` (`id`, `pid`, `pos`, `owned`, `garage`, `insert_time`, `property_tax`) VALUES
	(122, '76561198319377968', '[2733.19,9789.1,0]', 1, 0, '2019-04-23 19:38:00', 7);
/*!40000 ALTER TABLE `houses` ENABLE KEYS */;

-- Dumping structure for table armalife.log
CREATE TABLE IF NOT EXISTS `log` (
  `logid` int(11) NOT NULL AUTO_INCREMENT,
  `date_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `user` varchar(64) DEFAULT NULL,
  `action` varchar(255) DEFAULT NULL,
  `level` int(11) NOT NULL,
  PRIMARY KEY (`logid`),
  UNIQUE KEY `logid` (`logid`),
  KEY `logid_2` (`logid`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

-- Dumping data for table armalife.log: ~1 rows (approximately)
/*!40000 ALTER TABLE `log` DISABLE KEYS */;
INSERT INTO `log` (`logid`, `date_time`, `user`, `action`, `level`) VALUES
	(1, '2019-04-23 16:28:28', 'elitepsi', 'Admin elitepsi has sent a global message (test)', 1),
	(2, '2019-04-23 17:32:21', 'elitepsi', 'Admin elitepsi has sent a global message (test)', 1),
	(3, '2019-04-23 17:33:04', 'elitepsi', 'Admin elitepsi has sent a global message (tes)', 1);
/*!40000 ALTER TABLE `log` ENABLE KEYS */;

-- Dumping structure for table armalife.messages
CREATE TABLE IF NOT EXISTS `messages` (
  `uid` int(12) NOT NULL AUTO_INCREMENT,
  `fromID` varchar(50) NOT NULL,
  `toID` varchar(50) NOT NULL,
  `message` text,
  `fromName` varchar(32) NOT NULL,
  `toName` varchar(32) NOT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`) USING BTREE
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.messages: ~0 rows (approximately)
/*!40000 ALTER TABLE `messages` DISABLE KEYS */;
/*!40000 ALTER TABLE `messages` ENABLE KEYS */;

-- Dumping structure for table armalife.notes
CREATE TABLE IF NOT EXISTS `notes` (
  `note_id` int(11) NOT NULL AUTO_INCREMENT COMMENT 'auto incrementing note_id of each user, unique index',
  `uid` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `staff_name` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `name` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `alias` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `note_text` varchar(255) NOT NULL,
  `warning` enum('1','2','3','4') NOT NULL,
  `note_updated` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`note_id`),
  UNIQUE KEY `note_id` (`note_id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

-- Dumping data for table armalife.notes: ~0 rows (approximately)
/*!40000 ALTER TABLE `notes` DISABLE KEYS */;
/*!40000 ALTER TABLE `notes` ENABLE KEYS */;

-- Dumping structure for table armalife.players
CREATE TABLE IF NOT EXISTS `players` (
  `uid` int(6) NOT NULL AUTO_INCREMENT,
  `name` varchar(32) NOT NULL,
  `aliases` text NOT NULL,
  `pid` varchar(17) NOT NULL,
  `exp_total` int(11) NOT NULL DEFAULT '0',
  `exp_level` int(11) NOT NULL DEFAULT '0',
  `cash` int(100) NOT NULL DEFAULT '20',
  `bankacc` int(100) NOT NULL DEFAULT '0',
  `wealth_tax` int(11) NOT NULL,
  `last_wealth` int(100) NOT NULL DEFAULT '0',
  `taxamount` int(100) NOT NULL DEFAULT '0',
  `adminlevel` enum('0','1','2') NOT NULL DEFAULT '0',
  `coplevel` enum('0','1','2','3','4','5','6','7') NOT NULL DEFAULT '0',
  `copdept` enum('0','1','2','3','4','5','6','7') NOT NULL DEFAULT '0',
  `mediclevel` enum('0','1','2','3','4','5','6','7','8','9') NOT NULL DEFAULT '0',
  `medicdept` enum('0','1','2') NOT NULL DEFAULT '0',
  `donorlevel` enum('0','1') NOT NULL DEFAULT '0',
  `civ_licenses` text NOT NULL,
  `cop_licenses` text NOT NULL,
  `med_licenses` text NOT NULL,
  `civ_gear` text NOT NULL,
  `cop_gear` text NOT NULL,
  `med_gear` text NOT NULL,
  `civ_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `cop_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `med_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `arrested` tinyint(1) NOT NULL DEFAULT '0',
  `blacklist` tinyint(1) NOT NULL DEFAULT '0',
  `civ_alive` tinyint(1) NOT NULL DEFAULT '0',
  `civ_position` varchar(64) NOT NULL DEFAULT '"[]"',
  `playtime` varchar(32) NOT NULL DEFAULT '"[0,0,0]"',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `last_seen` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `exp_perkPoints` int(11) NOT NULL DEFAULT '0',
  `exp_perks` text,
  `jail_time` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`uid`) USING BTREE,
  UNIQUE KEY `pid` (`pid`) USING BTREE,
  KEY `name` (`name`) USING BTREE,
  KEY `blacklist` (`blacklist`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=2652 DEFAULT CHARSET=utf8mb4 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.players: ~2 rows (approximately)
/*!40000 ALTER TABLE `players` DISABLE KEYS */;
INSERT INTO `players` (`uid`, `name`, `aliases`, `pid`, `exp_total`, `exp_level`, `cash`, `bankacc`, `wealth_tax`, `last_wealth`, `taxamount`, `adminlevel`, `coplevel`, `copdept`, `mediclevel`, `medicdept`, `donorlevel`, `civ_licenses`, `cop_licenses`, `med_licenses`, `civ_gear`, `cop_gear`, `med_gear`, `civ_stats`, `cop_stats`, `med_stats`, `arrested`, `blacklist`, `civ_alive`, `civ_position`, `playtime`, `insert_time`, `last_seen`, `exp_perkPoints`, `exp_perks`, `jail_time`) VALUES
	(2646, 'Lewie Petrewie', '"[`Lewis Wheels`]"', '76561198319377968', 90000, 50, 0, 9035289, 0, 0, 0, '2', '7', '7', '0', '0', '1', '"[[`license_civ_driver`,1],[`license_civ_boat`,1],[`license_civ_trucking`,1],[`license_civ_gun`,1],[`license_civ_dive`,0],[`license_civ_home`,0]]"', '"[]"', '"[]"', '"[[[`hlc_rifle_SAMR`,``,``,`optic_Hamr`,[`hlc_30rnd_556x45_EPR`,30],[],``],[],[`hlc_Pistol_M11A1D`,``,``,`HLC_optic228_ATT`,[`hlc_15Rnd_9x19_B_P226`,15],[],``],[`TRYK_U_B_BLKTAN_CombatUniform`,[[`hlc_15Rnd_9x19_B_P226`,6,15]]],[`AL_CivHeavyVest4`,[[`hlc_15Rnd_9x19_B_P226`,6,15],[`SMA_30Rnd_556x45_Mk262`,11,30],[`hlc_30rnd_556x45_EPR`,12,30],[`hlc_30rnd_556x45_EPR`,1,25],[`hlc_30rnd_556x45_EPR`,1,22]]],[`travis_InvisibeCarryall`,[]],`d3s_CAP_Headgear`,`d3s_Glasses_scarf2_e`,[],[`ItemMap`,`ItemGPS`,`RoleplayRadio_6`,`ItemCompass`,``,``]],[[`redgull`,9],[`tbacon`,5],[`cprKit`,1],[`bandage`,5],[`toolkit`,1]]]"', '"[[[`SMA_MK18MOE_SM`,``,``,`optic_Hamr`,[`SMA_30Rnd_556x45_Mk262`,30],[],``],[],[`taser`,``,``,``,[`vvv_np_magazine_taser`,1],[],``],[`AL_Corrections2`,[[`vvv_np_magazine_taser`,2,1],[``,1,0]]],[`AL_PoliceHeavyVest`,[[`vvv_np_magazine_taser`,7,1],[`SMA_30Rnd_556x45_Mk262`,12,30]]],[`AL_PoliceBelt`,[]],`AL_PoliceHat`,``,[],[`ItemMap`,`ItemGPS`,`RoleplayRadio_5`,`ItemCompass`,``,``]],[[`gpstracker`,2],[`keyCard`,1],[`waterBottle`,2],[`donuts`,2],[`panicbutton`,5],[`toolkit`,1]]]"', '"[[],[]]"', '"[70,60]"', '"[100,90]"', '"[100,100,0]"', 0, 0, 1, '"[9890.94,11552.2,46.7137]"', '"[0,0,0]"', '2019-04-23 16:33:07', '2019-04-23 20:00:46', 723, '[[["perk_civilian_master",1],[[["perk_processing_1",1],[[["perk_processing_2",1],[[["perk_processing_3",1],[[["perk_processing_4",1],[[["perk_processing_5",1],[["perk_processing_6",1]]]]]]]]]]],["functions_air_1",1],["functions_home_1",1],["functions_north",1]]],[["perk_police_master",1],[[["functions_impoundSpeed_1",1],[["functions_impoundSpeed_2",1]]]]],[["perk_global_master",1],[["kill_feed",1],[["perk_evidence_1",1],[["perk_evidence_2",1]]],[["perk_paycheck_1",1],[[["perk_paycheck_2",1],[[["perk_paycheck_3",1],[[["perk_paycheck_4",1],[["perk_paycheck_5",1]]]]]]]]],[["functions_repairSpeed_1",1],[["functions_repairSpeed_2",1]]],["functions_stamina_1",1]]],[["perk_medical",1],[[["perk_cpr_1",1],[[["perk_cpr_2",1],[["perk_cpr_full",1]]]]],[["perk_stabalizeLength_1",1],[["perk_stabalizeLength_2",1]]]]],[["perk_gunsspecialist_master",1],[[["perk_gunsspecialist_lessRecoil_1",1],[[["perk_gunsspecialist_lessRecoil_2",1],[[["perk_gunsspecialist_lessRecoil_3",1],[[["perk_gunsspecialist_lessRecoil_4",1],[["perk_gunsspecialist_lessRecoil_5",1]]]]]]]]],[["perk_weaponSway_1",1],[[["perk_weaponSway_2",1],[[["perk_weaponSway_3",1],[["perk_weaponSway_4",1]]]]]]]]],[["perk_illegal_master",1],[[["perk_lsd_1",1],[["functions_uranium_1",1]]],[["perk_locksmith_1",1],[[["perk_locksmith_2",1],[[["perk_locksmith_3",1],[[["perk_locksmith_4",1],[["perk_locksmith_5",1]]]]]]]]],["perk_rebel_1",1],["perk_gasrobbery_1",1],["perk_policecheck_1",1]]],[["functions_quests",1],[[["functions_relicReward",0],[[["functions_relicReward2",0],[["functions_satellite",0]]]]]]]]', 0),
	(2647, 'Austin Marino', '"[`Austin Marino`]"', '76561198137248966', 3150, 6, 0, 189869, 0, 0, 0, '0', '0', '0', '1', '2', '0', '"[[`license_civ_driver`,0],[`license_civ_boat`,0],[`license_civ_trucking`,0],[`license_civ_gun`,0],[`license_civ_dive`,0],[`license_civ_home`,0]]"', '"[]"', '"[]"', '"[[[],[],[],[`kojixus_spawnclothing`,[]],[],[],`d3s_CAP_christmas_head3_b`,``,[],[`ItemMap`,`ItemGPS`,``,`ItemCompass`,``,``]],[]]"', '"[[],[]]"', '"[[[],[],[],[`travis_emstraineeuniform`,[]],[],[`travis_InvisibeCarryall`,[]],`H_Cap_blu`,`G_I_Diving`,[],[`ItemMap`,``,`RoleplayRadio_8`,`ItemCompass`,``,``]],[[`redgull`,4],[`waterBottle`,5],[`peach`,3],[`tbacon`,5],[`cprKit`,1],[`bandage`,5],[`stabilizer`,4],[`toolkit`,1]]]"', '"[100,100]"', '"[100,100,0]"', '"[100,100]"', 0, 0, 0, '"[9888.79,11553.1,47.0344]"', '"[0,0,0]"', '2019-04-23 16:53:43', '2019-04-23 20:41:43', 14, '[[["perk_civilian_master",0],[[["perk_processing_1",0],[[["perk_processing_2",0],[[["perk_processing_3",0],[[["perk_processing_4",0],[[["perk_processing_5",0],[["perk_processing_6",0]]]]]]]]]]],["functions_air_1",0],["functions_home_1",0],["functions_north",0]]],[["perk_police_master",0],[[["functions_impoundSpeed_1",0],[["functions_impoundSpeed_2",0]]]]],[["perk_global_master",0],[["kill_feed",0],[["perk_evidence_1",0],[["perk_evidence_2",0]]],[["perk_paycheck_1",0],[[["perk_paycheck_2",0],[[["perk_paycheck_3",0],[[["perk_paycheck_4",0],[["perk_paycheck_5",0]]]]]]]]],[["functions_repairSpeed_1",0],[["functions_repairSpeed_2",0]]],["functions_stamina_1",0]]],[["perk_medical",0],[[["perk_cpr_1",0],[[["perk_cpr_2",0],[["perk_cpr_full",0]]]]],[["perk_stabalizeLength_1",0],[["perk_stabalizeLength_2",0]]]]],[["perk_gunsspecialist_master",0],[[["perk_gunsspecialist_lessRecoil_1",0],[[["perk_gunsspecialist_lessRecoil_2",0],[[["perk_gunsspecialist_lessRecoil_3",0],[[["perk_gunsspecialist_lessRecoil_4",0],[["perk_gunsspecialist_lessRecoil_5",0]]]]]]]]],[["perk_weaponSway_1",0],[[["perk_weaponSway_2",0],[[["perk_weaponSway_3",0],[["perk_weaponSway_4",0]]]]]]]]],[["perk_illegal_master",0],[[["perk_lsd_1",0],[["functions_uranium_1",0]]],[["perk_locksmith_1",0],[[["perk_locksmith_2",0],[[["perk_locksmith_3",0],[[["perk_locksmith_4",0],[["perk_locksmith_5",0]]]]]]]]],["perk_rebel_1",0],["perk_gasrobbery_1",0],["perk_policecheck_1",0]]],[["functions_quests",0],[[["functions_relicReward",0],[[["functions_relicReward2",0],[["functions_satellite",0]]]]]]]]', 0),
	(2648, 'Liam McGarrett', '"[`Liam McGarrett`]"', '76561198194737469', 3450, 6, 7354, 775767, 0, 0, 0, '2', '0', '0', '9', '2', '0', '"[]"', '"[]"', '"[]"', '"[[],[]]"', '"[[],[]]"', '"[[[],[],[],[`US_FireFighter_CombatUniformblack`,[[`US_FireFighter_ARI_Drager_Mask`,8],[``,1,0]]],[],[`travis_InvisibeCarryall`,[[`US_FireFighter_HelmetWhite`,1],[`Medikit`,1],[`hlc_15Rnd_9x19_B_P226`,2,15],[[`hlc_pistol_Mk25D`,``,``,``,[`hlc_15Rnd_9x19_B_P226`,13],[],``],1],[`US_FireFighter_ARI_Drager`,true],[`US_FireFighter_ARI_Drager`,true]]],`H_Cap_marshal`,`d3s_p_eyes_000_a`,[`Binocular`,``,``,``,[],[],``],[`ItemMap`,`ItemGPS`,`RoleplayRadio_1`,`ItemCompass`,``,``]],[[`waterBottle`,9],[`tbacon`,10],[`cprKit`,2],[`bandage`,10],[`stabilizer`,3],[`toolkit`,2]]]"', '"[100,100,0]"', '"[100,100,0]"', '"[100,100]"', 0, 0, 0, '"[]"', '"[0,0,0]"', '2019-04-23 17:17:41', '2019-04-23 20:38:12', 11, '[[["perk_civilian_master",0],[[["perk_processing_1",0],[[["perk_processing_2",0],[[["perk_processing_3",0],[[["perk_processing_4",0],[[["perk_processing_5",0],[["perk_processing_6",0]]]]]]]]]]],["functions_air_1",0],["functions_home_1",0],["functions_north",0]]],[["perk_police_master",0],[[["functions_impoundSpeed_1",0],[["functions_impoundSpeed_2",0]]]]],[["perk_global_master",1],[["kill_feed",0],[["perk_evidence_1",0],[["perk_evidence_2",0]]],[["perk_paycheck_1",1],[[["perk_paycheck_2",0],[[["perk_paycheck_3",0],[[["perk_paycheck_4",0],[["perk_paycheck_5",0]]]]]]]]],[["functions_repairSpeed_1",0],[["functions_repairSpeed_2",0]]],["functions_stamina_1",0]]],[["perk_medical",0],[[["perk_cpr_1",0],[[["perk_cpr_2",0],[["perk_cpr_full",0]]]]],[["perk_stabalizeLength_1",0],[["perk_stabalizeLength_2",0]]]]],[["perk_gunsspecialist_master",0],[[["perk_gunsspecialist_lessRecoil_1",0],[[["perk_gunsspecialist_lessRecoil_2",0],[[["perk_gunsspecialist_lessRecoil_3",0],[[["perk_gunsspecialist_lessRecoil_4",0],[["perk_gunsspecialist_lessRecoil_5",0]]]]]]]]],[["perk_weaponSway_1",0],[[["perk_weaponSway_2",0],[[["perk_weaponSway_3",0],[["perk_weaponSway_4",0]]]]]]]]],[["perk_illegal_master",0],[[["perk_lsd_1",0],[["functions_uranium_1",0]]],[["perk_locksmith_1",0],[[["perk_locksmith_2",0],[[["perk_locksmith_3",0],[[["perk_locksmith_4",0],[["perk_locksmith_5",0]]]]]]]]],["perk_rebel_1",0],["perk_gasrobbery_1",0],["perk_policecheck_1",0]]],[["functions_quests",0],[[["functions_relicReward",0],[[["functions_relicReward2",0],[["functions_satellite",0]]]]]]]]', 0),
	(2649, 'Tristen Billiot', '"[`Tristen Billiot`]"', '76561198207240099', 1550, 4, 0, 2375, 0, 0, 0, '2', '7', '7', '0', '0', '0', '"[[`license_civ_driver`,0],[`license_civ_boat`,0],[`license_civ_trucking`,0],[`license_civ_gun`,0],[`license_civ_dive`,0],[`license_civ_home`,0]]"', '"[]"', '"[]"', '"[[[],[],[],[`kojixus_spawnclothing`,[]],[],[],`d3s_CAP_beanie_1_m`,``,[],[`ItemMap`,`ItemGPS`,`RoleplayRadio`,`ItemCompass`,``,``]],[]]"', '"[[[],[],[`hlc_pistol_P226WestGerman`,``,``,``,[`hlc_15Rnd_9x19_B_P226`,11],[],``],[`kojixus_picklerick`,[]],[],[`AL_PoliceBelt`,[[`G_Lady_Dark`,1],[`AL_BOIBeret`,1],[`30Rnd_556x45_Stanag`,6,30],[`vvv_np_magazine_taser`,3,1],[`hlc_15Rnd_9x19_B_P226`,2,15],[`HandGrenade_Stone`,1,1],[[`hlc_rifle_M4`,``,``,``,[`30Rnd_556x45_Stanag`,30],[],``],1],[[`taser`,``,``,``,[],[],``],1],[`AL_BOIJacketBlack`,false],[`AL_CIDHeavyVest`,false]]],`d3s_CAP_p_head_000_j`,`G_Aviator`,[`Binocular`,``,``,``,[],[],``],[`ItemMap`,`ItemGPS`,`RoleplayRadio_3`,`ItemCompass`,``,``]],[[`gpstracker`,2],[`keyCard`,1],[`redgull`,2],[`waterBottle`,1],[`donuts`,2],[`bandage`,4],[`toolkit`,1],[`spikeStrip`,3]]]"', '"[[],[]]"', '"[100,100]"', '"[90,90]"', '"[100,100,0]"', 0, 0, 0, '"[9890.94,11552.2,46.7137]"', '"[0,0,0]"', '2019-04-23 17:21:26', '2019-04-23 19:56:40', 8, '[[["perk_civilian_master",0],[[["perk_processing_1",0],[[["perk_processing_2",0],[[["perk_processing_3",0],[[["perk_processing_4",0],[[["perk_processing_5",0],[["perk_processing_6",0]]]]]]]]]]],["functions_air_1",0],["functions_home_1",0],["functions_north",0]]],[["perk_police_master",0],[[["functions_impoundSpeed_1",0],[["functions_impoundSpeed_2",0]]]]],[["perk_global_master",0],[["kill_feed",0],[["perk_evidence_1",0],[["perk_evidence_2",0]]],[["perk_paycheck_1",0],[[["perk_paycheck_2",0],[[["perk_paycheck_3",0],[[["perk_paycheck_4",0],[["perk_paycheck_5",0]]]]]]]]],[["functions_repairSpeed_1",0],[["functions_repairSpeed_2",0]]],["functions_stamina_1",0]]],[["perk_medical",0],[[["perk_cpr_1",0],[[["perk_cpr_2",0],[["perk_cpr_full",0]]]]],[["perk_stabalizeLength_1",0],[["perk_stabalizeLength_2",0]]]]],[["perk_gunsspecialist_master",0],[[["perk_gunsspecialist_lessRecoil_1",0],[[["perk_gunsspecialist_lessRecoil_2",0],[[["perk_gunsspecialist_lessRecoil_3",0],[[["perk_gunsspecialist_lessRecoil_4",0],[["perk_gunsspecialist_lessRecoil_5",0]]]]]]]]],[["perk_weaponSway_1",0],[[["perk_weaponSway_2",0],[[["perk_weaponSway_3",0],[["perk_weaponSway_4",0]]]]]]]]],[["perk_illegal_master",0],[[["perk_lsd_1",0],[["functions_uranium_1",0]]],[["perk_locksmith_1",0],[[["perk_locksmith_2",0],[[["perk_locksmith_3",0],[[["perk_locksmith_4",0],[["perk_locksmith_5",0]]]]]]]]],["perk_rebel_1",0],["perk_gasrobbery_1",0],["perk_policecheck_1",0]]],[["functions_quests",0],[[["functions_relicReward",0],[[["functions_relicReward2",0],[["functions_satellite",0]]]]]]]]', 0),
	(2650, 'Noah Narco', '"[`Noah Narco`]"', '76561198157662259', 1700, 40, 64702, 38925408, 0, 0, 0, '2', '7', '7', '8', '2', '1', '"[[`license_civ_driver`,0],[`license_civ_boat`,0],[`license_civ_trucking`,0],[`license_civ_gun`,0],[`license_civ_dive`,0],[`license_civ_home`,0]]"', '"[]"', '"[]"', '"[[[],[],[],[`kojixus_spawnclothing`,[]],[],[],`d3s_CAP_beanie_1_m`,``,[],[`ItemMap`,`ItemGPS`,`RoleplayRadio_2`,`ItemCompass`,``,``]],[]]"', '"[[[],[],[],[],[],[],``,``,[`Binocular`,``,``,``,[],[],``],[`ItemMap`,`ItemGPS`,`RoleplayRadio_7`,`ItemCompass`,``,``]],[[`keyCard`,1],[`waterBottle`,2],[`donuts`,2],[`toolkit`,1],[`spikeStrip`,1]]]"', '"[[[],[],[],[`US_FireFighter_CombatUniformblack`,[[`US_FireFighter_ARI_Drager_Mask`,1]]],[],[`travis_InvisibeCarryall`,[[`Medikit`,1]]],`US_FireFighter_Helmet`,``,[`Binocular`,``,``,``,[],[],``],[`ItemMap`,`ItemGPS`,`RoleplayRadio_4`,`ItemCompass`,``,``]],[[`redgull`,4],[`waterBottle`,2],[`donuts`,2],[`cprKit`,2],[`splint`,8],[`morphine`,8],[`bandage`,8],[`stabilizer`,8],[`toolkit`,2]]]"', '"[100,100]"', '"[100,100]"', '"[90,90]"', 0, 0, 1, '"[8560.13,6580.17,0.176692]"', '"[0,0,0]"', '2019-04-23 18:28:40', '2019-04-23 20:31:33', 36498, '[[["perk_civilian_master",0],[[["perk_processing_1",0],[[["perk_processing_2",0],[[["perk_processing_3",0],[[["perk_processing_4",0],[[["perk_processing_5",0],[["perk_processing_6",0]]]]]]]]]]],["functions_air_1",0],["functions_home_1",0],["functions_north",0]]],[["perk_police_master",1],[[["functions_impoundSpeed_1",1],[["functions_impoundSpeed_2",1]]]]],[["perk_global_master",1],[["kill_feed",1],[["perk_evidence_1",1],[["perk_evidence_2",1]]],[["perk_paycheck_1",1],[[["perk_paycheck_2",1],[[["perk_paycheck_3",1],[[["perk_paycheck_4",1],[["perk_paycheck_5",1]]]]]]]]],[["functions_repairSpeed_1",1],[["functions_repairSpeed_2",1]]],["functions_stamina_1",1]]],[["perk_medical",1],[[["perk_cpr_1",1],[[["perk_cpr_2",1],[["perk_cpr_full",1]]]]],[["perk_stabalizeLength_1",1],[["perk_stabalizeLength_2",1]]]]],[["perk_gunsspecialist_master",1],[[["perk_gunsspecialist_lessRecoil_1",1],[[["perk_gunsspecialist_lessRecoil_2",1],[[["perk_gunsspecialist_lessRecoil_3",1],[[["perk_gunsspecialist_lessRecoil_4",1],[["perk_gunsspecialist_lessRecoil_5",1]]]]]]]]],[["perk_weaponSway_1",1],[[["perk_weaponSway_2",1],[[["perk_weaponSway_3",1],[["perk_weaponSway_4",1]]]]]]]]],[["perk_illegal_master",0],[[["perk_lsd_1",0],[["functions_uranium_1",0]]],[["perk_locksmith_1",0],[[["perk_locksmith_2",0],[[["perk_locksmith_3",0],[[["perk_locksmith_4",0],[["perk_locksmith_5",0]]]]]]]]],["perk_rebel_1",0],["perk_gasrobbery_1",0],["perk_policecheck_1",0]]],[["functions_quests",1],[[["functions_relicReward",1],[[["functions_relicReward2",1],[["functions_satellite",1]]]]]]]]', 0),
	(2651, 'Anthony jackson', '"[`Anthony jackson`]"', '76561198387632825', 0, 0, 0, 40000, 0, 0, 0, '0', '0', '0', '0', '0', '0', '"[[`license_civ_driver`,0],[`license_civ_boat`,0],[`license_civ_trucking`,0],[`license_civ_gun`,0],[`license_civ_dive`,0],[`license_civ_home`,0]]"', '"[]"', '"[]"', '"[[[],[],[],[`kojixus_spawnclothing`,[]],[],[],`d3s_CAP_beanie_1_h`,``,[],[`ItemMap`,`ItemGPS`,`RoleplayRadio`,`ItemCompass`,``,``]],[]]"', '"[[],[]]"', '"[[],[]]"', '"[100,100]"', '"[100,100,0]"', '"[100,100,0]"', 0, 0, 1, '"[9890.94,11552.2,46.7137]"', '"[0,0,0]"', '2019-04-23 20:37:51', '2019-04-23 20:37:53', 0, NULL, 0);
/*!40000 ALTER TABLE `players` ENABLE KEYS */;

-- Dumping structure for event armalife.property_tax
DELIMITER //
CREATE DEFINER=`root`@`localhost` EVENT `property_tax` ON SCHEDULE EVERY 24 HOUR STARTS '2018-12-14 01:46:15' ON COMPLETION NOT PRESERVE ENABLE DO UPDATE houses SET property_tax = property_tax - 1//
DELIMITER ;

-- Dumping structure for table armalife.reimbursement_log
CREATE TABLE IF NOT EXISTS `reimbursement_log` (
  `reimbursement_id` int(11) NOT NULL AUTO_INCREMENT,
  `playerid` varchar(50) NOT NULL,
  `comp` int(100) NOT NULL DEFAULT '0',
  `reason` varchar(255) NOT NULL,
  `staff_name` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `timestamp` timestamp NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`reimbursement_id`),
  UNIQUE KEY `reimbursement_id` (`reimbursement_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Dumping data for table armalife.reimbursement_log: ~0 rows (approximately)
/*!40000 ALTER TABLE `reimbursement_log` DISABLE KEYS */;
/*!40000 ALTER TABLE `reimbursement_log` ENABLE KEYS */;

-- Dumping structure for procedure armalife.resetLifeVehicles
DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `resetLifeVehicles`()
BEGIN
  UPDATE `vehicles` SET `active`= 0;
END//
DELIMITER ;

-- Dumping structure for table armalife.users
CREATE TABLE IF NOT EXISTS `users` (
  `ID` mediumint(9) NOT NULL AUTO_INCREMENT,
  `username` varchar(60) NOT NULL,
  `password` varchar(80) NOT NULL,
  `permissions` text NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;

-- Dumping data for table armalife.users: ~1 rows (approximately)
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
INSERT INTO `users` (`ID`, `username`, `password`, `permissions`) VALUES
	(2, 'elitepsi', '693795900eb23121cf089fb07e1d299e7cec2ac25294dfbf834ef20440181a10', '"[[`notes`,1],[`cop`,1],[`medic`,1],[`money`,1],[`IG-Admin`,1],[`editPlayer`,1],[`housing`,1],[`gangs`,1],[`vehicles`,1],[`logs`,1],[`steamView`,1],[`ban`,1],[`kick`,1],[`unban`,1],[`globalMessage`,1],[`restartServer`,1],[`stopServer`,1],[`superUser`,1]]"');
/*!40000 ALTER TABLE `users` ENABLE KEYS */;

-- Dumping structure for table armalife.vehicles
CREATE TABLE IF NOT EXISTS `vehicles` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `side` varchar(16) NOT NULL,
  `classname` varchar(64) NOT NULL,
  `type` varchar(16) NOT NULL,
  `pid` varchar(17) NOT NULL,
  `alive` tinyint(1) NOT NULL DEFAULT '1',
  `blacklist` tinyint(1) NOT NULL DEFAULT '0',
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `plate` int(20) NOT NULL,
  `color` text NOT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `fuel` double NOT NULL DEFAULT '1',
  `damage` varchar(256) NOT NULL,
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `impound` int(1) NOT NULL DEFAULT '0',
  `insured` int(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`) USING BTREE,
  KEY `side` (`side`) USING BTREE,
  KEY `pid` (`pid`) USING BTREE,
  KEY `type` (`type`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=15291 DEFAULT CHARSET=utf8mb4 ROW_FORMAT=COMPACT;

-- Dumping data for table armalife.vehicles: ~0 rows (approximately)
/*!40000 ALTER TABLE `vehicles` DISABLE KEYS */;
INSERT INTO `vehicles` (`id`, `side`, `classname`, `type`, `pid`, `alive`, `blacklist`, `active`, `plate`, `color`, `inventory`, `gear`, `fuel`, `damage`, `insert_time`, `impound`, `insured`) VALUES
	(15270, 'cop', 'GM_SIO_CTSV', 'Car', '76561198155073249', 1, 0, 0, 94905, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.999802, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-03-14 13:18:44', 0, 1),
	(15271, 'med', 'Fox_ArrowXTLadder', 'Car', '76561198194737469', 1, 0, 1, 59102, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 17:29:45', 0, 1),
	(15272, 'med', 'Fox_Firetruck', 'Car', '76561198194737469', 1, 0, 1, 967505, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 17:33:15', 0, 1),
	(15273, 'cop', 'GM_SIO_BMW', 'Car', '76561198319377968', 1, 0, 0, 722451, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.986701, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 17:51:25', 0, 0),
	(15274, 'cop', 'd3s_raptor_UNM_17', 'Car', '76561198207240099', 1, 0, 0, 173731, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.961711, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 17:51:56', 0, 1),
	(15275, 'med', 'Fox_HeavyRescue2', 'Car', '76561198194737469', 1, 0, 1, 242848, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:18:43', 0, 1),
	(15276, 'cop', 'NB_SWAT_asterion', 'Car', '76561198319377968', 1, 0, 0, 922497, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.999063, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 18:20:07', 0, 0),
	(15277, 'cop', 'NB_SWAT_BMWSUV', 'Car', '76561198319377968', 1, 0, 0, 187815, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:21:16', 0, 0),
	(15278, 'med', 'Fox_ArrowXTLadder', 'Car', '76561198194737469', 1, 0, 0, 364388, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:21:45', 0, 1),
	(15279, 'med', 'al_EMS_BMW_BR', 'Car', '76561198194737469', 1, 0, 1, 378909, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:28:44', 0, 1),
	(15280, 'med', 'Jonzie_Ambulance', 'Car', '76561198194737469', 1, 0, 1, 410011, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:31:54', 0, 1),
	(15281, 'med', 'Fox_HeavyRescue', 'Car', '76561198194737469', 1, 0, 1, 915712, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:35:41', 0, 1),
	(15282, 'med', 'al_CHARGER_CAPTAIN', 'Car', '76561198157662259', 1, 0, 1, 593420, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 18:35:56', 0, 1),
	(15283, 'civ', 'd3s_gl63amg_12_LT', 'Car', '76561198319377968', 1, 0, 0, 311763, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.984484, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 18:49:07', 1, 0),
	(15284, 'civ', 'd3s_levante_s_17_EX', 'Car', '76561198319377968', 1, 0, 0, 456652, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.999723, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 19:01:56', 1, 0),
	(15285, 'cop', 'd3s_srthellcat_15_UNM', 'Car', '76561198157662259', 1, 0, 0, 949256, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.986784, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 19:20:40', 0, 1),
	(15286, 'civ', 'd3s_rapide_10_AMR', 'Car', '76561198319377968', 1, 0, 1, 284770, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 19:20:55', 0, 0),
	(15287, 'med', 'Jonzie_Ambulance', 'Car', '76561198194737469', 1, 0, 0, 623940, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 0.667596, '"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]"', '2019-04-23 19:20:59', 1, 1),
	(15288, 'med', 'Jonzie_Ambulance', 'Car', '76561198137248966', 1, 0, 1, 523752, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 19:23:01', 0, 1),
	(15289, 'cop', 'M_AS350_SHERIFF', 'Air', '76561198207240099', 1, 0, 0, 933473, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 19:30:54', 0, 0),
	(15290, 'civ', 'd3s_levante_s_17_EX', 'Car', '76561198319377968', 1, 0, 1, 559768, '[[1,1,1],[1,1,1],0.5]', '"[[],0]"', '"[]"', 1, '"[]"', '2019-04-23 19:43:39', 0, 0);
/*!40000 ALTER TABLE `vehicles` ENABLE KEYS */;

-- Dumping structure for table armalife.warrants
CREATE TABLE IF NOT EXISTS `warrants` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `crime_id` int(11) NOT NULL,
  `insert_datetime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=1348 DEFAULT CHARSET=latin1;

-- Dumping data for table armalife.warrants: ~0 rows (approximately)
/*!40000 ALTER TABLE `warrants` DISABLE KEYS */;
/*!40000 ALTER TABLE `warrants` ENABLE KEYS */;

-- Dumping structure for event armalife.wealth tax
DELIMITER //
CREATE DEFINER=`root`@`localhost` EVENT `wealth tax` ON SCHEDULE EVERY 24 HOUR STARTS '2018-12-19 00:00:30' ON COMPLETION NOT PRESERVE ENABLE DO BEGIN
UPDATE `players` SET `wealth_tax`=round((bankacc+cash)-round((bankacc+cash)/100 * 98)) WHERE (bankacc+cash) > 1000000;

UPDATE `players` SET `bankacc`=round(((bankacc+cash)/100 * 98) - cash) WHERE (bankacc+cash) > 1000000;

UPDATE `players` SET `taxamount`=taxamount+GREATEST(((bankacc+cash)-last_wealth),0);
UPDATE `players` SET `last_wealth`=(bankacc+cash);
END//
DELIMITER ;

-- Dumping structure for table armalife.whitelist
CREATE TABLE IF NOT EXISTS `whitelist` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `date_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `user` varchar(64) DEFAULT NULL,
  `guid` varchar(64) DEFAULT NULL,
  `uid` varchar(64) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Dumping data for table armalife.whitelist: ~0 rows (approximately)
/*!40000 ALTER TABLE `whitelist` DISABLE KEYS */;
/*!40000 ALTER TABLE `whitelist` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
