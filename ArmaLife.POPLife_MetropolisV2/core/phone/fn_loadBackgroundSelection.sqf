private _display = uiNamespace getVariable ["ArmaLife_Phone",displayNull];

ArmaLife_Phone_BackgroundPositions = [];
ArmaLife_Phone_BackgroundControls = [];
ArmaLife_Phone_BackgroundControlsButtons = [];

private _controlGroup = _display displayCtrl 100005;
private _controlsGroupPos = ctrlPosition _controlGroup;
private _backgroundConfig = "true" configClasses (missionconfigfile >> "ArmaLife_Backgrounds");
{
  private _newControl = _display ctrlCreate ["ArmaLife_PhoneIconControlImage", -1, _controlGroup];
  private _newButton = _display ctrlCreate ["ArmaLife_PhoneIconControlButton", -1, _controlGroup];
  _newControl ctrlSetText format ["%1",(getText (_x >> "preview"))];

  private _newPos = [
    0,
    0,
    _controlsGroupPos select 2,
    _controlsGroupPos select 3
  ];

  if ((count ArmaLife_Phone_BackgroundPositions) > 0) then {
    _newPos set [
      1,
      (((ArmaLife_Phone_BackgroundPositions select ((count ArmaLife_Phone_BackgroundPositions) - 1)) select 1) +
      ((ArmaLife_Phone_BackgroundPositions select ((count ArmaLife_Phone_BackgroundPositions) - 1)) select 3))
    ];
  };

  _newControl ctrlSetPosition _newPos;
  _newButton ctrlSetPosition _newPos;
  private _function = format ["[%1] spawn ALSG_fnc_SettingsChangeBackground",str (configName _x)];
  _newButton ctrlAddEventHandler ["MouseButtonDblClick", _function];

  ArmaLife_Phone_BackgroundControls pushBack _newControl;
  ArmaLife_Phone_BackgroundControlsButtons pushBack _newButton;
  ArmaLife_Phone_BackgroundPositions pushBack _newPos;

  _newControl ctrlCommit 0;
  _newButton ctrlCommit 0;
} forEach _backgroundConfig;
