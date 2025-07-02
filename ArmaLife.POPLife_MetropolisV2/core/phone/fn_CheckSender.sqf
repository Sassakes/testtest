params [
	["_number", "", [""]]
];

if (_number isEqualto "") exitWith {};


private _tag = getText(missionConfigFile >> "ArmaLife_Core_Settings" >> "ServerTag");
private _contacts = (profileNamespace getVariable [format ["%1_contacts",_tag], []]);

	
private _contactIndex = _contacts findIf {((_x select 2) == _number)};
private _contactArr = if (_contactIndex isEqualto -1) then {[]} else {(_contacts select _contactIndex)};
private _numberPrefix = getText (missionconfigfile >> "ArmaLife_Core_Settings" >> "phoneNumberPrefix");
private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];

if (_contactArr isEqualTo []) then {
	['ArmaLife_ContactAdd'] spawn ALSG_fnc_changeMenu;
	waitUntil {ArmaLife_Phone_CurrentlyOpen == "ArmaLife_ContactAdd"};
	private _phoneNumberBox = _display displayCtrl 190005;
	_phoneNumberBox ctrlSetText format ["%1%2", _numberPrefix, _number];
	_exitButton = _display displayCtrl 190007;
	_exitButton ctrlSetEventHandler ["buttonclick", "['ArmaLife_MessagesMain'] spawn ALSG_fnc_changeMenu;"];
} else {
	[(_contactIndex + 1)] spawn ALSG_fnc_LoadContact;
};
