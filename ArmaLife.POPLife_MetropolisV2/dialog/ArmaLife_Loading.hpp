class ArmaLife_Loading {
    idd = 999210;
    name = "ArmaLife_Loading";
    movingEnable = 1;
    enableSimulation = 0;
    enableDisplay = 1;
    
    class Controls {
        class ProgressBarBackground: ALSG_ctrlStatic {
            idc               = 11;
            x                 = safezoneX;
            y                 = safezoneY + safezoneH - (3 * (pixelH * pixelGrid * 0.50));
            w                 = safezoneW;
            h                 = 3 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0.2, 0.2, 0.2, 0.9};
        };
        class ProgressBarBackgroundStriped: ALSG_ctrlStaticBackgroundDisableTiles {
            idc = 12;
            x   = safezoneX;
            y   = safezoneY + safezoneH - (3 * (pixelH * pixelGrid * 0.50));
            w   = safezoneW;
            h   = 3 * (pixelH * pixelGrid * 0.50);
        };
        class ProgressBar: ALSG_ctrlProgress {
            idc    = 13;
            x      = safezoneX;
            y      = safezoneY + safezoneH - (3 * (pixelH * pixelGrid * 0.50));
            w      = safezoneW;
            h      = 3 * (pixelH * pixelGrid * 0.50);
        };
        class InitStateText: ALSG_ctrlStatic {
            idc    = 14;
            text   = "LOADING DATA";
            sizeEx = "11 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
            x      = safezoneX + (2 * (pixelW * pixelGrid * 0.50));
            y      = "(safezoneY + safezoneH) - (11 * (1 / (getResolution select 3)) * pixelGrid * 0.5) - (5 * (pixelH * pixelGrid * 0.50))";
            h      = "11 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
            w      = safezoneW;
            shadow = 0.6;
            font   = "RobotoCondensedBold";
        };
    };
};