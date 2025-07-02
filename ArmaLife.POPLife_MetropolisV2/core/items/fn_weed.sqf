closeDialog 0;

ArmaLife_WeedIsActive = true;
["You have smoked some weed, and now will regen health slowly. Altough your hunger is moving fast.",false,"slow"] call ALSG_fnc_notificationSystem;
[player,"weed"] remoteexeccall ["say3D",-2];

sleep 300;
ArmaLife_WeedIsActive = false;