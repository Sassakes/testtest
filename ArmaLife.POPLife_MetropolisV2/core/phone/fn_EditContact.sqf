
params [
  ["_index", -1, [-1]]
];

if (_index isEqualTo -1) exitWith {
  ["ArmaLife_ContactsMain"] spawn ALSG_fnc_changeMenu;
  ArmaLife_Phone_LastOpenDisplays = ["", "ArmaLife_Buttons"];
};

private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];
if (isNull _display) exitWith {};

private _handle = ["ArmaLife_ContactEdit"] spawn ALSG_fnc_changeMenu;
waitUntil {ArmaLife_Phone_CurrentlyOpen == "ArmaLife_ContactEdit"};
private _serverTag = getText (missionconfigfile >> "ArmaLife_Core_Settings" >> "ServerTag");
private _serverContacts = profileNamespace getVariable [format ["%1_contacts",_serverTag],[]];
private _numberPrefix = getText (missionconfigfile >> "ArmaLife_Core_Settings" >> "phoneNumberPrefix");

private _thisContactInfo = _serverContacts select _index;
_thisContactInfo params ["_first","_last","_phone","_company","_email"];

private _firstNameCtrl = _display displayCtrl 200002;
private _lastNameCtrl = _display displayCtrl 200003;
private _companyCtrl = _display displayCtrl 200004;
private _numberCtrl = _display displayCtrl 200005;
private _emailCtrl = _display displayCtrl 200006;
private _btnCancel = _display displayCtrl 200008;
private _btnEdit = _display displayCtrl 200009;

_firstNameCtrl ctrlSetText _first;
_lastNameCtrl ctrlSetText _last;
_numberCtrl ctrlSetText format ["%1%2",_numberPrefix,_phone];
_companyCtrl ctrlSetText _company;
_emailCtrl ctrlSetText _email;

private _format = format ["[%1] spawn ALSG_fnc_LoadContact", (_index + 1)];
_btnCancel ctrlSetEventHandler ["buttonClick", _format];
private _format = format ["[%1] call ALSG_fnc_ContactChange", _index];
_btnEdit ctrlSetEventHandler ["ButtonClick", _format];
