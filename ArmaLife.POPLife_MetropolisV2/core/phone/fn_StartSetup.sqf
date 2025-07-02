ArmaLife_Phone_SetupReady = false;
ArmaLife_Phone_NameSetupComplete = false;
ArmaLife_Phone_NumberSetupComplete = false;

ALSG_fnc_openSetups = {
  params ["_type"];
  private _configContainers = getArray (missionConfigFile >> _type >> "controls");
  private _warningControls = [];
  private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];
  {
    _x params ["_type", "_idc"];
    private _ctrl = _display ctrlCreate [_type, _idc];
    _ctrl ctrlsetFade 1;
    _ctrl ctrlCommit 0;
    ctrlSetFocus _ctrl;
    _warningControls pushBack _ctrl;
  } forEach _configContainers;
  _warningControls;
};

ALSG_fnc_fadeInSetups = {
  params ["_arr"];
  {
    _x ctrlSetFade 0;
    _x ctrlCommit 2;
  } forEach _arr;
};

ALSG_fnc_fadeOutSetups = {
  params ["_arr"];
  {
    _x ctrlSetFade 1;
    _x ctrlCommit 2;
  } forEach _arr;
  waitUntil {(ctrlCommitted ( _arr select ((count _arr) - 1)))};
  {ctrlDelete _x} forEach _arr;
};

[] spawn {
  ArmaLife_Phone_NameSetupComplete = false;
  ArmaLife_Phone_NumberSetupComplete = false;
  private _display = uiNamespace getVariable ["ArmaLife_Phone", displayNull];
  private _plainWhite = _display ctrlCreate ["ArmaLife_PhoneSetupPlain_Background", -1];
  private _screen1Controls = ["ArmaLife_PhoneSetup1"] call ALSG_fnc_openSetups;
  [_screen1Controls] call ALSG_fnc_fadeInSetups;
  sleep 1;
  [_screen1Controls] call ALSG_fnc_fadeOutSetups;
  private _screen2Controls = ["ArmaLife_PhoneSetup2"] call ALSG_fnc_openSetups;
  [_screen2Controls] call ALSG_fnc_fadeInSetups;
  waitUntil {ArmaLife_Phone_NameSetupComplete};
  [_screen2Controls] call ALSG_fnc_fadeOutSetups;
  private _screen3Controls = ["ArmaLife_PhoneSetup3"] call ALSG_fnc_openSetups;
  [] spawn ALSG_fnc_SetupGetNumbers;
  [_screen3Controls] call ALSG_fnc_fadeInSetups;
  waitUntil {ArmaLife_Phone_NumberSetupComplete};
  [_screen3Controls] call ALSG_fnc_fadeOutSetups;
  ['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;
  ctrlSetFocus _plainWhite;
  _plainWhite ctrlSetFade 1;
  _plainWhite ctrlCommit 2;

  waitUntil {ctrlCommitted _plainWhite};
  ctrlDelete _plainWhite;

};
