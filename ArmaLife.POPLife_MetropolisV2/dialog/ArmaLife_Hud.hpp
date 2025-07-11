class AL_Hud {
    idd = -1;
    duration = 1e+1000;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "AL_Hud";
    onLoad = "uiNamespace setVariable ['AL_Hud',_this select 0]";
    objects[] = {};
    controls[] = {
        ALSG_BAR_FOOD_RING,
        ALSG_BAR_WATER_RING,
        ALSG_BAR_HEALTH_RING,
        ALSG_BAR_Speaker,
        Armalife_ThreatLevelText,
    };

    class ALSG_BAR_Speaker: life_RscPicture
    {
        idc = 3007;
        text = "";
        x = 0.952292 * safezoneW + safezoneX;
        y = 0.640333 * safezoneH + safezoneY;
        w = 0.0331042 * safezoneW;
        h = 0.0589743 * safezoneH;
    };
    class ALSG_BAR_HEALTH_RING: life_RscPicture
    {
        idc = 3202;
        text = "";
        x = 0.860937 * safezoneW + safezoneX;
        y = 0.665 * safezoneH + safezoneY;
        w = 0.165 * safezoneW;
        h = 0.143 * safezoneH;
    };
    class ALSG_BAR_FOOD_RING: life_RscPicture
    {
        idc = 3200;
        text = "";
        x = 0.860937 * safezoneW + safezoneX;
        y = 0.775 * safezoneH + safezoneY;
        w = 0.165 * safezoneW;
        h = 0.143 * safezoneH;
    };
    class ALSG_BAR_WATER_RING: life_RscPicture
    {
        idc = 3201;
        text = "";
        x = 0.860937 * safezoneW + safezoneX;
        y = 0.72 * safezoneH + safezoneY;
        w = 0.165 * safezoneW;
        h = 0.143 * safezoneH;
    };
    class Armalife_ThreatLevelText: life_RscText
    {
        idc = 1251;
        text = "THREAT LEVEL";
        x = 0.936218 * safezoneW + safezoneX;
        y = 0.9752 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.022 * safezoneH;
        colorText[] = {0.063,0.776,0,1};
        font = "PuristaSemiBold";
        SizeEx = 0.035;
    };
    class Armalife_ServerVersion: life_RscText
	{
		idc = 1252;
		font = "PuristaSemiBold";
		text = "v"; 
		x = 0.962 * safezoneW + safezoneX;
		y = 0.9554 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.022 * safezoneH;
		colorText[] = {1,1,1,1};
	};
};