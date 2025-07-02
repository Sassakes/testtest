class ArmaLife_ItemShop {
    idd = 889922;
    name= "ArmaLife_ItemShop";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Title: ALSG_ctrlStaticHeader {
            idc  = 92;
            text = "Items Shop";
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
    };
    class controls {
        class Search: ALSG_ctrlEdit {
            idc = 80;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w   = (160 / 2.5) * (pixelW * pixelGrid * 0.50);
            h   = 5 * (pixelH * pixelGrid * 0.50);
        };
        class ButtonSearch: ALSG_ctrlButtonSearch {
            idc = 81;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + ((160 / 2.5) * (pixelW * pixelGrid * 0.50)) + (0.85 * (pixelW * pixelGrid * 0.50));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
        };

        class ItemsFilterBackground: ALSG_ctrlStatic {
            idc             = 232321 + 105;
            x               = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y               = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 1) + (2 * (pixelH * pixelGrid * 0.50));
            w               = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h               = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 1};
        };
        class ItemsFilter: ALSG_ctrlListNBox {
            idc             = 82;
            x               = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y               = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 1) + (2 * (pixelH * pixelGrid * 0.50));
            w               = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h               = 5 * (pixelH * pixelGrid * 0.50);
            disableOverflow = 1;
            columns[]       = {0, 0.2, 0.3, 0.41, 0.51, 0.61, 0.71};
            class Items {
                class Item {
                    text    = "Item";
                    value   = 0;
                };
                class Buy: Item { text = "Buy"; };
                class Sell: Item { text = "Sell"; };
                class MyQty: Item { text = "My Qty"; };
                class Weight: Item { text = "Weight"; };
                class Illegal: Item { text = "Illegal"; };
                class Edible: Item { text = "Edible"; };
            };
        };
        class ItemsListBackground: ALSG_ctrlStaticContent {
            idc = 232321 + 108;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (2 * (pixelH * pixelGrid * 0.50));
            w   = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h   = (100 / 1.4) * (pixelH * pixelGrid * 0.50);
        };
        class ItemsList: ItemsFilter {
            idc = 83;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (2 * (pixelH * pixelGrid * 0.50));
            w   = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h   = (100 / 1.4) * (pixelH * pixelGrid * 0.50);
            class Items {};
        };

        class AmountTitle: ALSG_ctrlStatic {
            idc  = 232321 + 6;
            text = "Amount:";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50)) * 0.19;
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class AmountInput: ALSG_ctrlEdit {
            idc  = 84;
            text = "1";
            x    = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + (((160 / 2.18) * (pixelW * pixelGrid * 0.50)) * 0.19));
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = (((160 / 2.18) * (pixelW * pixelGrid * 0.50)) * 0.66) - ((1.5 * (pixelW * pixelGrid * 0.50)) / 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Plus: ALSG_ctrlDefaultButton {
            idc  = 85;
            text = "+";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + ((160 / 2.18) * (pixelW * pixelGrid * 0.50)) - ((5 * (pixelW * pixelGrid * 0.50)) * 2) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 0.5);
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = 5 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Minus: ALSG_ctrlDefaultButton {
            idc  = 86;
            text = "-";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + ((160 / 2.18) * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y    = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w    = 5 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };

        class MyInventoryProgressBarBackground: ALSG_ctrlStatic {
            idc               = 232321 + 100;
            x                 = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
            y                 = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 0.2};
        };
        class MyInventoryProgressBar: ALSG_ctrlProgress {
            idc               = 87;
            x                 = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
            y                 = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBar[]        = {0.3, 0.3, 0.3, 1};
            colorFrame[]      = {0, 0, 0, 0};
        };
        class MyInventoryProgressBarText: ALSG_ctrlStatic {
            idc               = 88;
            text              = "10/10";
            x                 = (((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (160 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50))) - ((160 / 2.18) * (pixelW * pixelGrid * 0.50)));
            y                 = (((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50))) + ((100 / 1.35) * (pixelH * pixelGrid * 0.50)) - ((2 * (pixelH * pixelGrid * 0.50)) * 1.6);
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            style             = 0x02;
        };

        class Footer: ALSG_ctrlControlsGroupNoScrollbars {
            idc = 89;
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
                class ButtonBuy: ALSG_ctrlDefaultButton {
                    idc  = 90;
                    text = "BUY";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
                class ButtonSell: ALSG_ctrlDefaultButton {
                    idc  = 91;
                    text = "SELL";
                    x    = ((pixelW * pixelGrid * 0.50) * 2) + ((160 / 6.8) * (pixelW * pixelGrid * 0.50));
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
                class ButtonSellAll: ALSG_ctrlDefaultButton {
                    idc  = 93;
                    text = "SELL ALL";
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