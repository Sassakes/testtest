class ArmaLife_ClothingShop {
    idd = 3100;
    name = "ArmaLife_ClothingShop";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class HEADER: ALSG_ctrlStatic {
            idc                = 1;
            text               = "Clothing Store";
            x                  = "0.707238 * safezoneW + safezoneX";
            y                  = "0.291 * safezoneH + safezoneY";
            w                  = "0.175313 * safezoneW";
            h                  = "0.022 * safezoneH";
            colorBackground[]  = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "1"};
        };
        class BACKGROUND: ALSG_ctrlStatic {
            idc                = -1;
            x                  = "0.707238 * safezoneW + safezoneX";
            y                  = "0.313926 * safezoneH + safezoneY";
            w                  = "0.175313 * safezoneW";
            h                  = "0.398 * safezoneH";
            colorBackground[]  = {0.2,0.2,0.2,1};
        };
        class BACKGROUND_SEARCHBUTTON: ALSG_ctrlStatic {
            idc                = -1;
            x                  = "0.709344 * safezoneW + safezoneX";
            y                  = "0.3174 * safezoneH + safezoneY";
            w                  = "0.0134063 * safezoneW";
            h                  = "0.022 * safezoneH";
            colorBackground[]  = {0,0,0,0.5};
        };
        class PRICE_TITLE: ALSG_ctrlStatic {
            idc                = -1;
            text               = "Price:"; // ToDo: Localize;
            x                  = "0.709396 * safezoneW + safezoneX";
            y                  = "0.615674 * safezoneH + safezoneY";
            w                  = "0.0634955 * safezoneW";
            h                  = "0.022 * safezoneH";
            colorBackground[]  = {0,0,0,0.5};
        };
        class TOTALPRICE_TITLE: PRICE_TITLE {
            text               = "Total Price:"; // ToDo: Localize;
            y                  = "0.638659 * safezoneH + safezoneY";
        };
    };
    class controls {
        class SEARCH_INPUT: ALSG_ctrlEdit {
            idc                = 2;
            x                  = "0.723438 * safezoneW + safezoneX";
            y                  = "0.317593 * safezoneH + safezoneY";
            w                  = "0.156736 * safezoneW";
            h                  = "0.022 * safezoneH";
            colorBackground[]  = {0,0,0,0.4};
        };
        class BUTTON_SEARCH: ALSG_ctrlButtonPictureKeepAspect {
            idc                = 3;
            text               = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa";
            x                  = "0.710364 * safezoneW + safezoneX";
            y                  = "0.31937 * safezoneH + safezoneY";
            w                  = "0.0113542 * safezoneW";
            h                  = "0.0182963 * safezoneH";
            colorBackground[]  = {0,0,0,1};
        };
        class TREE: ALSG_ctrlTree {
            idc                = 4;
            idcSearch          = 2;
            x                  = "0.709323 * safezoneW + safezoneX";
            y                  = "0.340556 * safezoneH + safezoneY";
            w                  = "0.170729 * safezoneW";
            h                  = "0.273726 * safezoneH";
            colorBackground[]  = {0,0,0,0.5};
        };
        class PRICE: ALSG_RscStructuredText {
            idc                = 5;
            text               = "";
            x                  = "0.773438 * safezoneW + safezoneX";
            y                  = "0.615511 * safezoneH + safezoneY";
            w                  = "0.106807 * safezoneW";
            h                  = "0.022 * safezoneH";
            colorBackground[]  = {0,0,0,0.4};
        };
        class TOTALPRICE: PRICE {
            idc                = 6;
            y                  = "0.638659 * safezoneH + safezoneY";
        };
        class FILTER: ALSG_ctrlCombo {
            idc                = 7;
            x                  = "0.709396 * safezoneW + safezoneX";
            y                  = "0.665 * safezoneH + safezoneY";
            w                  = "0.170729 * safezoneW";
            h                  = "0.022 * safezoneH";
            onLBSelChanged     = "_this call ALSG_fnc_clothingFilter";
            colorBackground[]  = {0,0,0,0.4};
        };

        class BUTTON_PURCHASE: ALSG_ctrlDefaultButton {
            idc                = 8;
            text               = "PURCHASE";
            onButtonClick      = "[] call ALSG_fnc_buyClothes;";
            x                  = "0.709344 * safezoneW + safezoneX";
            y                  = "0.69 * safezoneH + safezoneY";
            w                  = "0.170649 * safezoneW";
            h                  = "0.0198 * safezoneH";
        };
    };
};