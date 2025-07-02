class ArmaLife_MarkerMenu {
	idd = 1020;
    name= "ArmaLife_MarkerMenu";
    movingEnable = 0;
    enableSimulation = 1;

    class ControlsBackground {
    	class Map: ALSG_RscMapControl {
			idc = 20;
			text = "#(argb,8,8,3)color(1,1,1,1)";
            x = (((getResolution select 2) * 0.5 * pixelW) - (480 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (0 - (150 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 500 * (pixelW * pixelGrid * 0.50);
            h = (300 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
    	};
    };

    class Controls {
    	class Header: ALSG_ctrlStaticHeader {
            text = "Marker Finder";
            x    = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y    = (1.3 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w    = 130 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Background: ALSG_ctrlStaticBackground {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (1.3 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 130 * (pixelW * pixelGrid * 0.50);
            h = (35 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
        };
        class InfoName: ALSG_ctrlStatic {
            text  = "Select or search for a marker you want to go to!";
            x     = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y     = ((1.3 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w     = (130 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50));
            h     = (5 * (pixelH * pixelGrid * 0.50)) * 3;
            style = ST_MULTI + ST_NO_RECT;
        };
        class MarkerList: ALSG_ctrlCombo {
            idc  = 22;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((1.3 - (45 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (1.5 * (pixelH * pixelGrid * 0.50));
            w    = (130 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class MarkerSearch: ALSG_ctrlEdit {
            idc  = 23;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((1.3 - (58 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (1.5 * (pixelH * pixelGrid * 0.50));
            w    = (130 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class ButtonCancel: ALSG_ctrlButtonClose {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (130 * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y = (1.3 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w = 5 * (pixelW * pixelGrid * 0.50);
            h = 5 * (pixelH * pixelGrid * 0.50);
            onButtonClick = "closeDialog 0;";
        };
    };
};