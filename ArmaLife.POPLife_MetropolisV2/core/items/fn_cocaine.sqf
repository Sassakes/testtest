closeDialog 0;
ArmaLife_CocaineIsActive = true;

life_cocaine_effect = time;
["You have snorted some cocaine, and will now run faster for 30 minutes and you have super thirsty.",false,"slow"] call ALSG_fnc_notificationSystem;
player enableFatigue false;
waitUntil {!alive player || ((time - life_cocaine_effect) > (30 * 60))};
if (mav_ttm_var_stamina isEqualTo 0) then {player enableFatigue true;};

ArmaLife_CocaineIsActive = false;