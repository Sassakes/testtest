class ArmaLife_TicketGive {
    idd = 99921;
    name = "ArmaLife_TicketGive";
    movingEnable = 1;
    enableSimulation = 0;
    enableDisplay = 1;

    class ControlsBackground {
        class Tiles: ALSG_RscTiles {};

        class Header: ALSG_ctrlStaticHeader {
            text = "Issue a ticket";
            x    = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y    = (0.415 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w    = 130 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Background: ALSG_ctrlStaticBackground {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 130 * (pixelW * pixelGrid * 0.50);
            h = (38 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
        };
        class Information: ALSG_ctrlStatic {
            text  = "Use the input box below to issue a ticket to the target. This person should be given 3 chances to pay this before being sent to jail. Min $200 and max $100,000";
            x     = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y     = ((0.415 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w     = (130 * (pixelW * pixelGrid * 0.50)) - (1.5 * (pixelW * pixelGrid * 0.50));
            h     = (5 * (pixelH * pixelGrid * 0.50)) * 3;
            style = ST_MULTI + ST_NO_RECT;
        };
    };

    class Controls {
        class Input: ALSG_ctrlEdit {
            idc  = 23;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.415 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (1.5 * (pixelH * pixelGrid * 0.50));
            w    = (130 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class FooterGroup: ALSG_ctrlControlsGroupNoScrollbars {
            idc = 24;
            x   = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y   = (0.415 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50))  + (38 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
            w   = 130 * (pixelW * pixelGrid * 0.50);
            h   = (5 + 2) * (pixelH * pixelGrid * 0.50);
            class Controls {
                class Background: ALSG_ctrlStaticFooter {
                    x = 0;
                    y = 0;
                    w = 130 * (pixelW * pixelGrid * 0.50);
                    h = (5 + 2) * (pixelH * pixelGrid * 0.50);
                };
                class ButtonIssueTicket: ALSG_ctrlDefaultButton {
                    idc  = 25;
                    text = "ISSUE TICKET";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.3;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                };
            };
        };
        class ButtonCancel: ALSG_ctrlButtonClose {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (130 * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (38 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w = 5 * (pixelW * pixelGrid * 0.50);
            h = 5 * (pixelH * pixelGrid * 0.50);
        };
    };
};
