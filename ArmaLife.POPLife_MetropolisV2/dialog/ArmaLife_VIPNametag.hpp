class ArmaLife_VIPNametag {
	idd = 12582;
	name = "ArmaLife_VIPNametag";
	class controlsBackground
	{
		class ArmaLife_TitleBackground: Life_RscText
		{
			idc = 1000;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.198 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class ArmaLife_TitleText: Life_RscText
		{
			idc = 1001;
			text = "Nametag Color:";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.295519 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.0284815 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
	};
	class controls {
		class ArmaLife_RimColorRed: Life_RscText
		{
			idc = 1012;
			text = "Red:";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.025877 * safezoneW;
			h = 0.0219906 * safezoneH;
		};
		class ArmaLife_RimColorGreen: Life_RscText
		{
			idc = 1013;
			text = "Green:";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.025877 * safezoneW;
			h = 0.0219906 * safezoneH;
		};
		class ArmaLife_RimColorBlue: Life_RscText
		{
			idc = 1014;
			text = "Blue:";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.025877 * safezoneW;
			h = 0.0219906 * safezoneH;
		};
		class ArmaLife_RimColorRedSlide: life_RscXSliderH
		{
			idc = 1903;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.022 * safezoneH;
			onSliderPosChanged = "call ArmaLife_VIPColorUpdate;";
		};
		class ArmaLife_RimColorGreenSlider: life_RscXSliderH
		{
			idc = 1904;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.40386 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.0247777 * safezoneH;
			onSliderPosChanged = "call ArmaLife_VIPColorUpdate;";
		};
		class ArmaLife_RimColorBlueSlider: life_RscXSliderH
		{
			idc = 1905;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.150052 * safezoneW;
			h = 0.0284816 * safezoneH;
			onSliderPosChanged = "call ArmaLife_VIPColorUpdate;";
		};
		class ArmaLife_CurrentColor: Life_RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.642812 * safezoneW + safezoneX;
			y = 0.5044 * safezoneH + safezoneY;
			w = 0.00671872 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class ArmaLife_CurrentColorText: Life_RscText
		{
			idc = 1014;
			text = "Current Color:";
			x = 0.585593 * safezoneW + safezoneX;
			y = 0.5022 * safezoneH + safezoneY;
			w = 0.0561979 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class ArmaLife_SetNametagColor: Life_RscButtonMenu
		{
			idc = 2400;
			text = "Set Nametag Color";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			class Attributes {
				align = "center";
			};
		};
	};
};