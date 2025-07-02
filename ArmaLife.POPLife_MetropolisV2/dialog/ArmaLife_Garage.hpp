class ArmaLife_Garage {
    idd = 98123;
    name= "ArmaLife_Garage";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Header: ALSG_ctrlStaticHeader {
            text = "My Garage";
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
        class FilterBackground: ALSG_ctrlStatic {
            x                 = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y                 = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50));
            w                 = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 1};
        };
        class ListBackground: ALSG_ctrlStaticContent {
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (1.5 * (pixelH * pixelGrid * 0.50));
            w   = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h   = (100 * (pixelH * pixelGrid * 0.50)) * 0.8;
        };
    };
    class controls {
        class Search: ALSG_ctrlEdit {
            idc = 23;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w   = (160 / 3) * (pixelW * pixelGrid * 0.50);
            h   = 5 * (pixelH * pixelGrid * 0.50);
        };
        class ButtonSearch: ALSG_ctrlButtonSearch {
            idc = 24;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + ((160 / 3) * (pixelW * pixelGrid * 0.50)) + (0.85 * (pixelW * pixelGrid * 0.50));
            y   = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
        };
        class Filter: ALSG_ctrlListNBox {
            idc             = 25;
            x               = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y               = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50));
            w               = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h               = 5 * (pixelH * pixelGrid * 0.50);
            disableOverflow = 1;
            columns[]       = {0, 0.22, 0.32, 0.45, 0.65,0.85};
            class Items {
                class VehicleModel {
                    text = "Vehicle Model";
                    value = 0;
                };
                class VehicleType: VehicleModel {
                    text = "Type";
                };
                class NumberOfSeats: VehicleModel {
                    text = "# of Seats";
                };
                class Horsepower: VehicleModel {
                    text = "Max Horsepower";
                };
                class MaxSpeed: VehicleModel {
                    text = "Max Speed";
                };
                class Insured: VehicleModel {
                    text = "Insured";
                };
            };
        };
        class List: Filter {
            idc             = 26;
            x               = ((((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y               = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 2) + (1.5 * (pixelH * pixelGrid * 0.50));
            w               = (160 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h               = (100 * (pixelH * pixelGrid * 0.50)) * 0.8;
            class Items {};
        };
        class Footer: ALSG_ctrlControlsGroupNoScrollbars {
            idc = 27;
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
                class ButtonRetrieve: ALSG_ctrlDefaultButton {
                    idc  = 1;
                    text = "RETRIEVE";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
                class ButtonSell: ALSG_ctrlDefaultButton {
                    idc  = 2;
                    text = "SELL";
                    x    = ((pixelW * pixelGrid * 0.50) * 2) + (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
                class ButtonInsure: ALSG_ctrlDefaultButton {
                    idc  = 3;
                    text = "INSURE";
                    x    = ((pixelW * pixelGrid * 0.50) * 3) + ((160 / 6.8) * (pixelW * pixelGrid * 0.50) * 2);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (160 / 6.8) * (pixelW * pixelGrid * 0.50);
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
            };
        };
        class ButtonClose: ALSG_ctrlButtonClose {
            x = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50)) + ((160 * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50)));
            y = (0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            h = 5 * (pixelH * pixelGrid * 0.50);
            w = 5 * (pixelW * pixelGrid * 0.50);
        };
    };
};