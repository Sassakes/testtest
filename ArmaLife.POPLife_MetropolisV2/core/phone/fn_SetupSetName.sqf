private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];
if (isNull _display) exitWith {};

	
private _firstNameCtrl = _display displayCtrl 180020;
private _lastNameCtrl = _display displayCtrl 180021;

private _firstName = ctrlText _firstNameCtrl;
private _lastName = ctrlText _lastNameCtrl;

if (_firstName isEqualTo "" || _lastName isEqualTo "" || _lastName isEqualTo "First Name" || _lastName isEqualTo "Last Name") exitWith {["You need to have a first name and a last name",true,"slow"] call ALSG_fnc_notificationSystem};

private _text = format["Please confirm you wish to use the name %1 %2 for your phone, this is unable to be changed at this time",_firstName, _lastName];
private _response = ["Confirm", _text] call ALSG_fnc_sendWarning;

if (_response) then {
  ArmaLife_TempPhoneData = [_firstName, _lastName, ""];
  ArmaLife_Phone_NameSetupComplete = true;
} else {
};
