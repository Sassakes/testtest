class ArmaLife_VehicleInventory {
    idd = 8005003;
    name= "ArmaLife_VehicleInventory";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Header: ALSG_ctrlStaticHeader {
            idc = 32;
            text = "Vehicle Inventory";
            x    = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50));
            y    = (0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w    = 160 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Background: ALSG_ctrlStaticBackground {
            x = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 160 * (pixelW * pixelGrid * 0.50);
            h = (100 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50));
        };
        class MyInventoryProgressBarBackground: ALSG_ctrlStatic {
            x                 = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y                 = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + ((2 * (pixelH * pixelGrid * 0.50)) / 2);
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 0.2};
        };
        class VehicleInventoryProgressBarBackground: MyInventoryProgressBarBackground {
            x = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
        };
        class MyInventoryFilterBackground: ALSG_ctrlStatic {
            x                 = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y                 = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (2 * (pixelH * pixelGrid * 0.50));
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 1};
        };
        class VehicleInventoryFilterBackground: MyInventoryFilterBackground {
            x = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
        };
        class MyInventoryListBackground: MyInventoryFilterBackground {
            h                 = (100 / 1.35) * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class VehicleInventoryListBackground: MyInventoryListBackground {
            x                 = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
        };
    };
    class controls {
        class MyInventoryTitle: ALSG_ctrlStatic {
            idc  = 232321 + 1;
            text = "My Inventory";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class MyInventoryProgressBar: ALSG_ctrlProgress {
            idc          = 35;
            x            = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y            = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + ((2 * (pixelH * pixelGrid * 0.50)) / 2);
            w            = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h            = 5 * (pixelH * pixelGrid * 0.50);
            colorBar[]   = {0.3, 0.3, 0.3, 1};
            colorFrame[] = {0, 0, 0, 0};
        };
        class MyInventoryProgressBarText: ALSG_ctrlStatic {
            idc   = 47;
            text  = "10/224";
            x     = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y     = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + ((2 * (pixelH * pixelGrid * 0.50)) / 2);
            w     = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h     = 5 * (pixelH * pixelGrid * 0.50);
            style = 0x02;
        };
        class MyInventoryFilter: ALSG_ctrlListNBox {
            idc             = 36;
            x               = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y               = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (2 * (pixelH * pixelGrid * 0.50));
            w               = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h               = 5 * (pixelH * pixelGrid * 0.50);
            disableOverflow = 1;
            columns[]       = {0, 0.09, 0.43, 0.73};
            class Items {
                class Icon {
                    text    = "";
                    value   = 0;
                };
                class Item: Icon {
                    text    = "Item";
                    value   = 0;
                };
                class TotalWeight: Icon {
                    text    = "Total Weight";
                    value   = 0;
                };
                class Quantity: Icon {
                    text    = "Qty";
                    value   = 0;
                };
            };
        };
        class MyInventoryList: MyInventoryFilter {
            idc = 37;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = (100 / 1.35) * (pixelH * pixelGrid * 0.50);
            class Items {};
        };

        class AmountTitle: ALSG_ctrlStatic {
            idc  = 232321 + 2;
            text = "Amount:";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50)) * 0.19;
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class AmountInput: ALSG_ctrlEdit {
            idc  = 39;
            text = "1";
            x    = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + (((160 / 2.18) * (pixelW * pixelGrid * 0.50)) * 0.19));
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = (((160 / 2.18) * (pixelW * pixelGrid * 0.50)) * 0.66) - ((1.5 * (pixelW * pixelGrid * 0.50)) / 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Plus: ALSG_ctrlDefaultButton {
            idc  = 40;
            text = "+";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + ((160 / 2.18) * (pixelW * pixelGrid * 0.50)) - ((5 * (pixelW * pixelGrid * 0.50)) * 2) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 0.5);
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = 5 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Minus: ALSG_ctrlDefaultButton {
            idc  = 41;
            text = "-";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + ((160 / 2.18) * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = 5 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };

        class VehicleInventoryTitle: MyInventoryTitle {
            idc  = 48;
            text = "Vehicle Inventory";
            x    = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
        };
        class VehicleInventoryProgressBar: MyInventoryProgressBar {
            idc = 42;
            x   = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
        };
        class VehicleInventoryProgressBarText: MyInventoryProgressBarText {
            idc = 43;
            x   = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
        };
        class VehicleInventoryFilter: MyInventoryFilter {
            idc = 44;
            x   = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = 5 * (pixelH * pixelGrid * 0.50);
        };
        class VehicleInventoryList: MyInventoryList {
            idc = 45;
            x   = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = (100 / 1.7) * (pixelH * pixelGrid * 0.50);
        };

        class Footer: ALSG_ctrlControlsGroupNoScrollbars {
            idc = 46;
            x   = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50));
            y   = (0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + ((100 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50));
            w   = 160 * (pixelW * pixelGrid * 0.50);
            h   = (5 + 2) * (pixelH * pixelGrid * 0.50);
            class controls {
                class Background: ALSG_ctrlStaticFooter {
                    x = 0;
                    y = 0;
                    w = "safezoneW";
                    h = "safezoneH";
                };
                class ButtonTake: ALSG_ctrlDefaultButton {
                    idc  = 49;
                    text = "TAKE";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "[] call ALSG_fnc_vehTakeItem;";
                };
                class ButtonStore: ALSG_ctrlDefaultButton {
                    idc  = 50;
                    text = "STORE";
                    x    = ((pixelW * pixelGrid * 0.50) * 2) + (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "[] call ALSG_fnc_vehStoreItem;";
                };
                class ButtonSwap: ALSG_ctrlDefaultButton {
                    idc  = 51;
                    text = "SWAP";
                    x    = ((pixelW * pixelGrid * 0.50) * 3) + (((160 / 6.8) * (pixelW * pixelGrid * 0.50)) * 2);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
            };
        };
        class ButtonClose: ALSG_ctrlButtonClose {
            x = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w = 5 * (pixelW * pixelGrid * 0.50);
            h = 5 * (pixelH * pixelGrid * 0.50);
        };
    };
};