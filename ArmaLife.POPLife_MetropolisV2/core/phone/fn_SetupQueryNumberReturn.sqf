params ["_number"];

player setVariable ["ArmaLife_PhoneNumber", _number, true];
ArmaLife_TempPhoneData set [2, _number];
ArmaLife_Phone_profileSettings = ArmaLife_TempPhoneData;
private _serverTag = getText (missionconfigfile >> "ArmaLife_Core_Settings" >> "ServerTag");
profileNamespace setVariable [format ["%1_ArmaLife_Phone_profileSettings", _serverTag], ArmaLife_Phone_profileSettings];
ArmaLife_Phone_NumberSetupComplete = true;
