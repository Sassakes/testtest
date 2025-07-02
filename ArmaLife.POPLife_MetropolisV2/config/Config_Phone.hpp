class ArmaLife_Core_Settings {
  phoneNumberPrefix = "+01";
  phoneNumberLength = 10;	
  phoneNumberStart = 7;
  ServerTag = "ArmaLife";	
  allMenus[] = {"ArmaLife_EmergencyMessage","ArmaLife_MessagesEmergency", "ArmaLife_MessagesView", "ArmaLife_MessagesMain", "ArmaLife_ContactView","ArmaLife_ContactEdit","ArmaLife_ContactAdd","ArmaLife_Setup","ArmaLife_ContactsMain","ArmaLife_PhoneWarning","ArmaLife_gangCreate","ArmaLife_gangMain","ArmaLife_KeyChain","ArmaLife_Buttons", "ArmaLife_Settings","ArmaLife_ChangeBackground","ArmaLife_Licenses","ArmaLife_Money","ArmaLife_Inv"};

  BannedWords[] = {
    "Fuck",
    "Shit",
    "Prick",
    "Nigger",
    "Nigga",
    "Jiggaboo",
    "Spic",
   	"Faggot",
   	"Fag",
   	"Bitch",
   	"Paki",
   	"Coon",
   	"Nignog",
   	"Niglet",
   	"Porch Monkey",
   	"PorchMonkey",
   	"Chink",
   	"Gook",
   	"Towelhead",
   	"Spick",
   	"Wetback",
   	"Beaner"
  };
};

class ArmaLife_Backgrounds {
  class test1 {
    image = "\ArmalifeCore\images\phone\backgrounds\Background_1.paa";
    preview = "\ArmalifeCore\images\phone\backgrounds\Background_1_preview.paa";
  };
  class test2 {
    image = "\ArmalifeCore\images\phone\backgrounds\Background_2.paa";
    preview = "\ArmalifeCore\images\phone\backgrounds\Background_2_preview.paa";
  };
  class test3 {
    image = "\ArmalifeCore\images\phone\backgrounds\Background_3.paa";
    preview = "\ArmalifeCore\images\phone\backgrounds\Background_3_preview.paa";
  };
  class test4 {
    image = "\ArmalifeCore\images\phone\backgrounds\Background_4.paa";
    preview = "\ArmalifeCore\images\phone\backgrounds\Background_4_preview.paa";
  };
};

class ArmaLife_BottomIcons
{
  class Keys
  {
    displayName = "KEYS";
    onCall = "['ArmaLife_KeyChain'] spawn ALSG_fnc_changeMenu";
    image = "Keys.paa";
  };
  class Money
  {
    displayName = "MONEY";
    onCall = "['ArmaLife_Money'] spawn ALSG_fnc_changeMenu";
    image = "money.paa";
  };
  class Sync
  {
    displayName = "SYNC DATA";
    onCall = "[] call ALSG_fnc_syncData";
    image = "sync.paa";
  };
  class Inventory
  {
    displayName = "INVENTORY";
    onCall = "['ArmaLife_Inv'] spawn ALSG_fnc_changeMenu";
    image = "Inventory.paa";
  };
};

class ArmaLife_Apps
{
  class Licenses
  {
    displayName = "LICENSES";
    onCall = "['ArmaLife_Licenses'] spawn ALSG_fnc_changeMenu";
    image = "licenses.paa";
    conditions = "";
  };
  class Settings
  {
    displayName = "SETTINGS";
    onCall = "['ArmaLife_Settings'] spawn ALSG_fnc_changeMenu";
    image = "settings.paa";
    conditions = "";
  };
  class GangMenu
  {
    displayName = "GANG MENU";
    onCall = "[] spawn ALSG_fnc_LoadGangMenu";
    image = "gang.paa";
    conditions = "playerSide isEqualTo Civilian";
  };
  class GangProgress
  {
    displayName = "GANG TREE";
    onCall = "[] call ArmaLife_OpenGangPicker;";
    image = "gangT.paa";
    conditions = "playerSide isEqualTo civilian";
  };
  class Contacts
  {
    displayName = "CONTACTS";
    onCall = "['ArmaLife_ContactsMain'] spawn ALSG_fnc_changeMenu";
    image = "Contacts.paa";
    conditions = "";
  };
  class Messages
  {
    displayName = "MESSAGES";
    onCall = "['ArmaLife_MessagesMain'] spawn ALSG_fnc_changeMenu";
    image = "Messages.paa";
    conditions = "";
  };
  class EmergencyMessage
  {
    displayName = "DISPATCH";
    onCall = "['ArmaLife_MessagesEmergency'] spawn ALSG_fnc_changeMenu";
    image = "999_messaging.paa";
    conditions = "!(playerSide isEqualTo Civilian)";
  };
  class EmergencyMessageTo
  {
    displayName = "999";
    onCall = "['ArmaLife_EmergencyMessage'] spawn ALSG_fnc_changeMenu";
    image = "999_dispatch.paa";
    conditions = "";
  };
  class SkillMenu
  {
    displayName = "SKILLS";
    onCall = "createDialog ""TTM_GUI_RscDisplayTalentOverview"";";
    image = "skills.paa";
    conditions = "";
  };
  class VIP
  {
    displayName = "UID Color";
    onCall = "[] call ArmaLife_VIPNametagMenu;";
    image = "VIP.paa";
    conditions = "";
  };
  class Checkpoint
  {
    displayName = "BARRIER";
    onCall = "[] call ArmaLife_CheckpointBuilder;";
    image = "nav.paa";
    conditions = "playerSide isEqualTo WEST";
  };
  class warrants
  {
    displayName = "WARRANTS";
    onCall = "closeDialog 0; [] call ALSG_fnc_openWarrants;";
    image = "wanted.paa";
    conditions = "playerSide isEqualTo WEST";
  };
  class majorcrime
  {
    displayName = "MC ALERT";
    onCall = "closeDialog 0; [] spawn ArmaLife_MajorCrimeAlert;";
    image = "gang.paa";
    conditions = "playerSide isEqualTo WEST";
  };
  class Navigation
  {
    displayName = "NAVIGATION";
    onCall = "closeDialog 0; [] spawn ALSG_fnc_markerMenu;";
    image = "nav.paa";
    conditions = "";
  };
};

class ArmaLife_onLoads
{
  class ArmaLife_Buttons
  {
    onload = "[] spawn ALSG_fnc_loadMainButtons";
  };
  class ArmaLife_ChangeBackground
  {
    onload = "[] spawn ALSG_fnc_loadBackgroundSelection";
  };
  class ArmaLife_Money
  {
    onload = "[] call ALSG_fnc_LoadMoneyMenu";
  };

  class ArmaLife_Inv
  {
    onload = "[] call ALSG_fnc_LoadInventory";
  };

  class ArmaLife_Licenses
  {
    onload = "[] call ALSG_fnc_LoadLicenses";
  };

  class ArmaLife_Settings
  {
    onload = "[] call ALSG_fnc_loadSettings";
  };

  class ArmaLife_KeyChain
  {
    onload = "[] call ALSG_fnc_LoadKeyChain";
  };

  class ArmaLife_ContactsMain
  {
    onload = "[] call ALSG_fnc_LoadContacts";
  };

  class ArmaLife_MessagesMain
  {
    onload = "[] spawn ALSG_fnc_LoadMessageList";
  };

  class ArmaLife_MessagesEmergency
  {
    onLoad = "[] spawn ALSG_fnc_OpenEmergencyMessage";
  };
};