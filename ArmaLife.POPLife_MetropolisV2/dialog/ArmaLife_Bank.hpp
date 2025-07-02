class ArmaLife_Bank {
    idd = 8999520;
    name= "ArmaLife_Bank";
    movingEnable = 0;
    enableSimulation = 1;

    class ControlsBackground {
        class Header: ALSG_ctrlStaticHeader {
            text = "Personal Bank Account";
            x    = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y    = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w    = 130 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Background: ALSG_ctrlStaticBackground {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 130 * (pixelW * pixelGrid * 0.50);
            h = (40 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
        };
        class TitleBank: ALSG_ctrlStatic {
            text = "Bank";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = 10 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
            font = "RobotoCondensedBold";
        };
        class TitleCash: TitleBank {
            text = "Cash";
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50);
        };
    };
    
    class Controls {
        class Bank: ALSG_ctrlStatic {
            idc  = 120;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + (10 * (pixelW * pixelGrid * 0.50)) + (pixelW * pixelGrid * 0.50);
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = (40 * 0.7) * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Cash: ALSG_ctrlStatic {
            idc  = 121;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50))) + (10 * (pixelW * pixelGrid * 0.50)) + (pixelW * pixelGrid * 0.50);
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50);
            w    = (40 * 0.7) * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class ListPlayers: ALSG_ctrlCombo {
            idc  = 122;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (((5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50)) * 2);
            w    = (130 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Input: ALSG_ctrlEdit {
            idc  = 123;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (((5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50)) * 2) + (5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50);
            w    = (130 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
            text = "1";
        };
        class FooterGroup: ALSG_ctrlControlsGroupNoScrollbars {
            idc = 124;
            x   = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y   = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50))  + (40 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
            w   = 130 * (pixelW * pixelGrid * 0.50);
            h   = (5 + 2) * (pixelH * pixelGrid * 0.50);
            class Controls {
                class Background: ALSG_ctrlStaticFooter {
                    x = 0;
                    y = 0;
                    w = 130 * (pixelW * pixelGrid * 0.50);
                    h = (5 + 2) * (pixelH * pixelGrid * 0.50);
                };
                class ButtonDeposit: ALSG_ctrlDefaultButton {
                    idc  = 125;
                    text = "DEPOSIT";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "[] call ALSG_fnc_bankDeposit; playSound 'atmButton'";
                };
                class ButtonWithdraw: ALSG_ctrlDefaultButton {
                    idc  = 126;
                    text = "WITHDRAW";
                    x    = (pixelW * pixelGrid * 0.50) + ((((130 * (pixelW * pixelGrid * 0.50)) * 0.2) + (pixelW * pixelGrid * 0.50)) * 1);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "[] call ALSG_fnc_bankWithdraw; playSound 'atmButton'";
                };
                class ButtonDepositAll: ALSG_ctrlDefaultButton {
                    idc  = 127;
                    text = "DEPOSIT ALL";
                    x    = (pixelW * pixelGrid * 0.50) + ((((130 * (pixelW * pixelGrid * 0.50)) * 0.2) + (pixelW * pixelGrid * 0.50)) * 2);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "[] call ALSG_fnc_bankDepositAll; playSound 'atmButton'";
                };
                class ButtonTransfer: ALSG_ctrlDefaultButton {
                    idc  = 128;
                    text = "TRANSFER";
                    x    = (pixelW * pixelGrid * 0.50) + ((((130 * (pixelW * pixelGrid * 0.50)) * 0.2) + (pixelW * pixelGrid * 0.50)) * 3);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "[] call ALSG_fnc_bankTransfer; playSound 'atmButton'";
                };
            };
        };
        class ButtonCancel: ALSG_ctrlButtonClose {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (130 * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w = 5 * (pixelW * pixelGrid * 0.50);
            h = 5 * (pixelH * pixelGrid * 0.50);
            onButtonClick = "closeDialog 0;";
        };
    };
};