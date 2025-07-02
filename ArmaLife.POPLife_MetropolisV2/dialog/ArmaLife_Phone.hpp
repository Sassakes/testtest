class ArmaLife_Phone
{
  idd = 19931;
  name = "ArmaLife_Phone";
  movingEnable = 0;
  enableSimulation = 1;
  onLoad = "uiNamespace setVariable ['ArmaLife_Phone', _this select 0];";
  onUnload = "uiNamespace setVariable ['ArmaLife_Phone', displayNull]";
  onDestroy = "uiNamespace setVariable ['ArmaLife_Phone', displayNull]";
  class controlsBackground
  {
    class ArmaLife_Background: ArmaLife_PhoneRscPicture
    {
      idc = -1;	
      text = "\ArmalifeCore\images\phone\background.paa";
      x = 0.318499 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
    };
  };
  class controls
  {
    class ArmaLife_Background_Changable: ArmaLife_PhoneRscPicture
    {
      idc = 987;
      text = "\ArmalifeCore\images\phone\backgrounds\Background_2.paa";
      x = 0.318499 * safezoneW + safezoneX;
      y = (0.225 - 0.066) * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
    };
    class ArmaLife_Background_Changable2: ArmaLife_PhoneRscPicture
    {
      idc = 988;
      text = "\ArmalifeCore\images\phone\backgrounds\Background_2.paa";
      x = 0.318499 * safezoneW + safezoneX;
      y = (0.225 - 0.066) * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
    };
  };
};

	
class ArmaLife_ChangeBackground
{
    controls[] = {
      {"ArmaLife_ChangeBackground_Background",100003},
      {"ArmaLife_ChangeBackground_BackButton",100004},
      {"ArmaLife_ChangeBackground_ControlGroup",100005},
      {"ArmaLife_ChangeBackground_BtnHome",100006}
    };
};

class ArmaLife_ChangeBackground_Background : ArmaLife_PhoneRscPicture
{
  idc = 100003;
  text = "\ArmalifeCore\images\phone\dialogImages\WallpapersBackground.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};
class ArmaLife_ChangeBackground_BackButton: ArmaLife_PhoneIconControlButton
{
  idc = 100004;
  x = 0.424719 * safezoneW + safezoneX;
  y = 0.2118 * safezoneH + safezoneY;
  w = 0.0237188 * safezoneW;
  h = 0.0176 * safezoneH;
  onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_ChangeBackground_ControlGroup: Life_RscControlsGroup
{
  idc = 100005;
  x = 0.3682 * safezoneW + safezoneX;
  y = 0.273 * safezoneH + safezoneY;
  w = 0.26193 * safezoneW;
  h = 0.4532 * safezoneH;
  class controls {};
  onMouseButtonDown = "ArmaLife_Phone_BackgroundControlMouseup = false;_this spawn ALSG_fnc_BackgroundSlider";
  onMouseButtonUp = "ArmaLife_Phone_BackgroundControlMouseup = true";
  class VScrollBar : Life_RscScrollBar
  {
      width = 0;
      autoScrollEnabled = 1;
  };
  class HScrollBar : Life_RscScrollBar
  {
      height = 0;
  };
};
class ArmaLife_ChangeBackground_BtnHome: ArmaLife_PhoneIconControlButton
{
  idc = 100006;
  x = 0.470094 * safezoneW + safezoneX;
  y = 0.7588 * safezoneH + safezoneY;
  w = 0.0567187 * safezoneW;
  h = 0.011 * safezoneH;
  onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_Buttons : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_Buttons_ControlsGroup",1800},
    {"ArmaLife_Buttons_BottomControlGroup",1801}
  };
};

class ArmaLife_Buttons_ControlsGroup: Life_RscControlsGroup
{
  idc = 1800;
  x = 0.427812 * safezoneW + safezoneX;
  y = 0.2382 * safezoneH + safezoneY;
  w = 0.145 * safezoneW;
  h = 0.43 * safezoneH;
  class controls {};
  onMouseButtonDown = "ArmaLife_Phone_BackgroundControlMouseup = false;";
  onMouseButtonUp = "ArmaLife_Phone_BackgroundControlMouseup = true";
  class VScrollBar : Life_RscScrollBar
  {
      width = 0;
      autoScrollEnabled = 1;
  };
  class HScrollBar : Life_RscScrollBar
  {
      height = 0;
  };
};

class ArmaLife_Buttons_BottomControlGroup: Life_RscControlsGroup
{
  idc = 1801;
  x = 0.427812 * safezoneW + safezoneX;
  y = 0.6914 * safezoneH + safezoneY;
  w = 0.145 * safezoneW;
  h = 0.0682 * safezoneH;
};

	
class ArmaLife_ContactAdd
{
  controls[] = {
    {"ArmaLife_ContactAdd_Background", 190001},
    {"ArmaLife_ContactAdd_FirstName", 190002},
    {"ArmaLife_ContactAdd_LastName", 190003},
    {"ArmaLife_ContactAdd_Company", 190004},
    {"ArmaLife_ContactAdd_Number", 190005},
    {"ArmaLife_ContactAdd_Email", 190006},
    {"ArmaLife_ContactAdd_BtnCancel", 190007},
    {"ArmaLife_ContactAdd_BtnDone", 190008},
    {"ArmaLife_ContactAdd_BtnHome", 190009}
  };
};

class ArmaLife_ContactAdd_Background: ArmaLife_PhoneRscPicture
{
        idc = 190001;
        text = "\ArmalifeCore\images\phone\dialogImages\new_contact.paa";
        x = 0.318499 * safezoneW + safezoneX;
        y = 0.159 * safezoneH + safezoneY;
        w = 0.360937 * safezoneW;
        h = 0.638 * safezoneH;
};
class ArmaLife_ContactAdd_FirstName: ArmaLife_PhoneRscEdit
{
        idc = 190002;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.2616 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddfirst'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactAdd_LastName: ArmaLife_PhoneRscEdit
{
        idc = 190003;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddlast'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactAdd_Company: ArmaLife_PhoneRscEdit
{
        idc = 190004;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3193 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddcompany'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactAdd_Number: ArmaLife_PhoneRscEdit
{
        idc = 190005;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3834 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddnumber'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactAdd_Email : ArmaLife_PhoneRscEdit
{
        idc = 190006;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.4714 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddemail'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactAdd_BtnCancel: ArmaLife_PhoneIconControlButton
{
        idc = 190007;
        x = 0.428178 * safezoneW + safezoneX;
        y = 0.225459 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
        onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_ContactAdd_BtnDone: ArmaLife_PhoneIconControlButton
{
        idc = 190008;
        x = 0.547437 * safezoneW + safezoneX;
        y = 0.225 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
        onButtonClick = "[] call ALSG_fnc_ContactChange";
};
class ArmaLife_ContactAdd_BtnHome: ArmaLife_PhoneIconControlButton
{
        idc = 190009;
        x = 0.469062 * safezoneW + safezoneX;
        y = 0.7618 * safezoneH + safezoneY;
        w = 0.0587812 * safezoneW;
        h = 0.011 * safezoneH;
        onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_ContactEdit
{
  controls[] = {
    {"ArmaLife_ContactEdit_Background", 200001},
    {"ArmaLife_ContactEdit_FirstName", 200002},
    {"ArmaLife_ContactEdit_LastName", 200003},
    {"ArmaLife_ContactEdit_Company", 200004},
    {"ArmaLife_ContactEdit_Number", 200005},
    {"ArmaLife_ContactEdit_Email", 200006},
    {"ArmaLife_ContactEdit_BtnHome", 200007},
    {"ArmaLife_ContactEdit_BtnCancel", 200008},
    {"ArmaLife_ContactEdit_BtnDone", 200009}
  };
};

class ArmaLife_ContactEdit_Background: ArmaLife_PhoneRscPicture
{
    idc = 200001;
    text = "\ArmalifeCore\images\phone\dialogImages\edit_contact.paa";
    x = 0.318499 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class ArmaLife_ContactEdit_FirstName: ArmaLife_PhoneRscEdit
{
        idc = 200002;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.2616 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditfirst'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactEdit_LastName: ArmaLife_PhoneRscEdit
{
        idc = 200003;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditlast'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactEdit_Company: ArmaLife_PhoneRscEdit
{
        idc = 200004;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3193 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditcompany'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactEdit_Number: ArmaLife_PhoneRscEdit
{
        idc = 200005;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3834 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditnumber'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactEdit_Email: ArmaLife_PhoneRscEdit
{
        idc = 200006;
        text = "";	
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.4714 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditemail'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_ContactEdit_BtnHome: ArmaLife_PhoneIconControlButton
{
        idc = 200007;
        x = 0.469062 * safezoneW + safezoneX;
        y = 0.7618 * safezoneH + safezoneY;
        w = 0.0587812 * safezoneW;
        h = 0.011 * safezoneH;
        onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_ContactEdit_BtnCancel: ArmaLife_PhoneIconControlButton
{
        idc = 200008;
        x = 0.428178 * safezoneW + safezoneX;
        y = 0.225459 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
};
class ArmaLife_ContactEdit_BtnDone: ArmaLife_PhoneIconControlButton
{
        idc = 200009;
        x = 0.547437 * safezoneW + safezoneX;
        y = 0.225 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
};

	
class ArmaLife_ContactsMain : Life_RscControlsGroupNoScrollbars
{
    controls[] = {
      {"ArmaLife_ContactsMain_Background", 170001},
      {"ArmaLife_ContactsMain_ContactsGroup", 170002},
      {"ArmaLife_ContactsMain_BtnHome", 170003},
      {"ArmaLife_ContactsMain_BtnNew", 170004}
    };
};


class ArmaLife_ContactsMain_Background: ArmaLife_PhoneRscPicture
{
          idc = 170001;
          text = "\ArmalifeCore\images\phone\dialogImages\ContactsBackground.paa";
          x = 0.3185 * safezoneW + safezoneX;
          y = 0.159 * safezoneH + safezoneY;
          w = 0.360937 * safezoneW;
          h = 0.638 * safezoneH;
};
class ArmaLife_ContactsMain_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
          idc = 170002;
          x = 0.422656 * safezoneW + safezoneX;
          y = 0.2756 * safezoneH + safezoneY;
          w = 0.153656 * safezoneW;
          h = 0.453 * safezoneH;
          class controls {};
};
class ArmaLife_ContactsMain_BtnHome: ArmaLife_PhoneIconControlButton
{
          idc = 170003;
          x = 0.469062 * safezoneW + safezoneX;
          y = 0.7618 * safezoneH + safezoneY;
          w = 0.0587812 * safezoneW;
          h = 0.011 * safezoneH;
          onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_ContactsMain_BtnNew: ArmaLife_PhoneIconControlButton
{
          idc = 170004;
          x = 0.561875 * safezoneW + safezoneX;
          y = 0.214 * safezoneH + safezoneY;
          w = 0.00928125 * safezoneW;
          h = 0.0176 * safezoneH;
          onbuttonClick = "['ArmaLife_ContactAdd'] spawn ALSG_fnc_changeMenu";
};

	
class ArmaLife_ContactView
{
  controls[] = {
    {"ArmaLife_ContactView_Background", 210001},
    {"ArmaLife_ContactView_BtnMessage", 210002},
    {"ArmaLife_ContactView_BtnPay", 210003},
    {"ArmaLife_ContactView_NameRscText", 210004},
    {"ArmaLife_ContactView_PhoneRscText", 210005},
    {"ArmaLife_ContactView_EmailRscText", 210006},
    {"ArmaLife_ContactView_BtnSendMessage", 210007},
    {"ArmaLife_ContactView_BtnContacts", 210008},
    {"ArmaLife_ContactView_BtnEdit", 210009},
    {"ArmaLife_ContactView_BtnHome", 210010},
    {"ArmaLife_ContactView_BtnDelete", 210011}
  };
};

class ArmaLife_ContactView_Background : ArmaLife_PhoneRscPicture
{
      idc = 210001;
      text = "\ArmalifeCore\images\phone\dialogImages\view_contact.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class ArmaLife_ContactView_BtnMessage: ArmaLife_PhoneIconControlButton
{
      idc = 210002;
      x = 0.460812 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.0206254 * safezoneW;
      h = 0.044 * safezoneH;
};
class ArmaLife_ContactView_BtnPay: ArmaLife_PhoneIconControlButton
{
      idc = 210003;
      x = 0.515469 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.0206254 * safezoneW;
      h = 0.044 * safezoneH;
};
class ArmaLife_ContactView_NameRscText: Life_RscStructuredText
{
      idc = 210004;
      x = 0.426788 * safezoneW + safezoneX;
      y = 0.302 * safezoneH + safezoneY;
      w = 0.146426 * safezoneW;
      h = 0.0286 * safezoneH;
      shadow = 0;
      class Attributes {
            font = "RobotoCondensed";
            color = "#000000";
            align = "center";
            shadow = 0;
            valign= "middle";
      };
};
class ArmaLife_ContactView_PhoneRscText: Life_RscText
{
      idc = 210005;
      x = 0.430905 * safezoneW + safezoneX;
      y = 0.4054 * safezoneH + safezoneY;
      w = 0.14024 * safezoneW;
      h = 0.0198 * safezoneH;
      shadow = 0;
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class ArmaLife_ContactView_EmailRscText: Life_RscText
{
      idc = 210006;
      x = 0.430905 * safezoneW + safezoneX;
      y = 0.4868 * safezoneH + safezoneY;
      w = 0.14024 * safezoneW;
      h = 0.0198 * safezoneH;
      shadow = 0;
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class ArmaLife_ContactView_BtnSendMessage: ArmaLife_PhoneIconControlButton
{
      idc = 210007;
      x = 0.428845 * safezoneW + safezoneX;
      y = 0.5418 * safezoneH + safezoneY;
      w = 0.142302 * safezoneW;
      h = 0.0308 * safezoneH;
};
class ArmaLife_ContactView_BtnContacts: ArmaLife_PhoneIconControlButton
{
      idc = 210008;
      x = 0.42575 * safezoneW + safezoneX;
      y = 0.225 * safezoneH + safezoneY;
      w = 0.0360938 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_ContactView_BtnEdit: ArmaLife_PhoneIconControlButton
{
      idc = 210009;
      x = 0.556719 * safezoneW + safezoneX;
      y = 0.225 * safezoneH + safezoneY;
      w = 0.0144377 * safezoneW;
      h = 0.0176 * safezoneH;
};
class ArmaLife_ContactView_BtnHome: ArmaLife_PhoneIconControlButton
{
      idc = 210010;
      x = 0.469062 * safezoneW + safezoneX;
      y = 0.7618 * safezoneH + safezoneY;
      w = 0.0587812 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_ContactView_BtnDelete: ArmaLife_PhoneIconControlButton
{
      idc = 210011;
      x = 0.428843 * safezoneW + safezoneX;
      y = 0.5726 * safezoneH + safezoneY;
      w = 0.142302 * safezoneW;
      h = 0.0308 * safezoneH;
};

	
class ArmaLife_Settings : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_Settings_Background",90001},
    {"Playerstags_ToggleBackground_Off",90002},
    {"Playerstags_ToggleBackground_On",90003},
    {"BroadCasts_ToggleBackground_Off",90004},
    {"BroadCasts_ToggleBackground_On",90005},
    {"RNO_ToggleBackground_Off",90006},
    {"RNO_ToggleBackground_On",90007},
    {"Sidechat_ToggleBackground_Off",90008},
    {"Sidechat_ToggleBackground_On",90009},
    {"AIP_ToggleBackground_Off",90010},
    {"AIP_ToggleBackground_On",90011},
    {"ArmaLife_Settings_SettingsForground", 90012},
    {"ArmaLife_Settings_Playerstags_Toggle",90013},
    {"Playerstags_Toggle_Button",90014},
    {"ArmaLife_Settings_BroadCasts_Toggle",90015},
    {"BroadCasts_Toggle_Button",90016},
    {"ArmaLife_Settings_RNO_Toggle",90017},
    {"RNO_Toggle_Button",90018},
    {"ArmaLife_Settings_Sidechat_Toggle",90019},
    {"Sidechat_Toggle_Button",90020},
    {"ArmaLife_Settings_AIP_Toggle",90021},
    {"AIP_Toggle_Button",90022},
    {"ArmaLife_Settings_OnFootViewDistance",90023},
    {"ArmaLife_Settings_onGroundViewDistance",90024},
    {"ArmaLife_Settings_inAirViewDistance",90025},
    {"ArmaLife_Settings_WallpaperButton",90026},
    {"ArmaLife_Settings_Background_BackButton",90027},
    {"ArmaLife_Settings_BtnHome",90028}
  };
};

class ArmaLife_Settings_Background: ArmaLife_PhoneRscPicture
{
      idc = 90001;
      text = "\ArmalifeCore\images\phone\dialogImages\LightGreyBackground.paa";
      x = 0.318531 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};

	
class Playerstags_ToggleBackground_Off: ArmaLife_PhoneRscPicture
{
      idc = 90002;
      text = "\ArmalifeCore\images\phone\ui\toggleBackgroundOff.paa";
      x = 0.530937 * safezoneW + safezoneX;
      y = 0.302 * safezoneH + safezoneY;
      w = 0.04125 * safezoneW;
      h = 0.0242 * safezoneH;
};
class Playerstags_ToggleBackground_On: ArmaLife_PhoneRscPicture
{
      idc = 90003;
      text = "\ArmalifeCore\images\phone\ui\toggleBackground.paa";
      x = 0.52 * safezoneW + safezoneX;
      y = 0.302 * safezoneH + safezoneY;
      w = 0.0216566 * safezoneW;
      h = 0.0242 * safezoneH;
};

class BroadCasts_ToggleBackground_Off: ArmaLife_PhoneRscPicture
{
      idc = 90004;
      text = "\ArmalifeCore\images\phone\ui\toggleBackgroundOff.paa";
      x = 0.530937 * safezoneW + safezoneX;
      y = 0.3394 * safezoneH + safezoneY;
      w = 0.04125 * safezoneW;
      h = 0.0242 * safezoneH;
};
class BroadCasts_ToggleBackground_On: ArmaLife_PhoneRscPicture
{
      idc = 90005;
      text = "\ArmalifeCore\images\phone\ui\toggleBackground.paa";
      x = 0.52 * safezoneW + safezoneX;
      y = 0.3394 * safezoneH + safezoneY;
      w = 0.0216566 * safezoneW;
      h = 0.0242 * safezoneH;
};

class RNO_ToggleBackground_Off: ArmaLife_PhoneRscPicture
{
      idc = 90006;
      text = "\ArmalifeCore\images\phone\ui\toggleBackgroundOff.paa";
      x = 0.530937 * safezoneW + safezoneX;
      y = 0.3768 * safezoneH + safezoneY;
      w = 0.04125 * safezoneW;
      h = 0.0242 * safezoneH;
};
class RNO_ToggleBackground_On: ArmaLife_PhoneRscPicture
{
      idc = 90007;
      text = "\ArmalifeCore\images\phone\ui\toggleBackground.paa";
      x = 0.52 * safezoneW + safezoneX;
      y = 0.3768 * safezoneH + safezoneY;
      w = 0.0216566 * safezoneW;
      h = 0.0242 * safezoneH;
};

class Sidechat_ToggleBackground_Off: ArmaLife_PhoneRscPicture
{
      idc = 90008;
      text = "\ArmalifeCore\images\phone\ui\toggleBackgroundOff.paa";
      x = 0.530937 * safezoneW + safezoneX;
      y = 0.412 * safezoneH + safezoneY;
      w = 0.04125 * safezoneW;
      h = 0.0242 * safezoneH;
};
class Sidechat_ToggleBackground_On: ArmaLife_PhoneRscPicture
{
      idc = 90009;
      text = "\ArmalifeCore\images\phone\ui\toggleBackground.paa";
      x = 0.52 * safezoneW + safezoneX;
      y = 0.412 * safezoneH + safezoneY;
      w = 0.0216566 * safezoneW;
      h = 0.0242 * safezoneH;
};

class AIP_ToggleBackground_Off: ArmaLife_PhoneRscPicture
{
      idc = 90010;
      text = "\ArmalifeCore\images\phone\ui\toggleBackgroundOff.paa";
      x = 0.530937 * safezoneW + safezoneX;
      y = 0.4494 * safezoneH + safezoneY;
      w = 0.04125 * safezoneW;
      h = 0.0242 * safezoneH;
};
class AIP_ToggleBackground_On: ArmaLife_PhoneRscPicture
{
      idc = 90011;
      text = "\ArmalifeCore\images\phone\ui\toggleBackground.paa";
      x = 0.52 * safezoneW + safezoneX;
      y = 0.4494 * safezoneH + safezoneY;
      w = 0.0216566 * safezoneW;
      h = 0.0242 * safezoneH;
};

class ArmaLife_Settings_SettingsForground: ArmaLife_PhoneRscPicture
{
      idc = 90012;
      text = "\ArmalifeCore\images\phone\dialogImages\SettingsForground.paa";
      x = 0.318531 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};

	
class ArmaLife_Settings_Playerstags_Toggle: Life_RscPictureKeepAspect
{
      idc = 90013;
      text = "\ArmalifeCore\images\phone\ui\Toggle.paa";
      x = 0.5495 * safezoneW + safezoneX;
      y = 0.3035 * safezoneH + safezoneY;
      w = 0.0123751 * safezoneW;
      h = 0.022 * safezoneH;
};
class Playerstags_Toggle_Button: ArmaLife_PhoneIconControlButton
{
      idc = 90014;
      x = 0.423687 * safezoneW + safezoneX;
      y = 0.2998 * safezoneH + safezoneY;
      w = 0.151581 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[1] spawn ALSG_fnc_UpdateToggle";
};

	
class ArmaLife_Settings_BroadCasts_Toggle: Life_RscPictureKeepAspect
{
      idc = 90015;
      text = "\ArmalifeCore\images\phone\ui\Toggle.paa";
      x = 0.5495 * safezoneW + safezoneX;
      y = 0.3405 * safezoneH + safezoneY;
      w = 0.0123751 * safezoneW;
      h = 0.022 * safezoneH;
};
class BroadCasts_Toggle_Button: ArmaLife_PhoneIconControlButton
{
      idc = 90016;
      x = 0.423687 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.151581 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[2] spawn ALSG_fnc_UpdateToggle";
};

	
class ArmaLife_Settings_RNO_Toggle: Life_RscPictureKeepAspect
{
      idc = 90017;
      text = "\ArmalifeCore\images\phone\ui\Toggle.paa";
      x = 0.5495 * safezoneW + safezoneX;
      y = 0.3774 * safezoneH + safezoneY;
      w = 0.0123751 * safezoneW;
      h = 0.022 * safezoneH;
};
class RNO_Toggle_Button: ArmaLife_PhoneIconControlButton
{
      idc = 90018;
      x = 0.423688 * safezoneW + safezoneX;
      y = 0.3702 * safezoneH + safezoneY;
      w = 0.151581 * safezoneW;
      h = 0.0352 * safezoneH;
      onButtonClick = "[3] spawn ALSG_fnc_UpdateToggle";
};

	
class ArmaLife_Settings_Sidechat_Toggle: Life_RscPictureKeepAspect
{
      idc = 90019;
      text = "\ArmalifeCore\images\phone\ui\Toggle.paa";
      x = 0.5495 * safezoneW + safezoneX;
      y = 0.4143 * safezoneH + safezoneY;
      w = 0.0123751 * safezoneW;
      h = 0.022 * safezoneH;
};
class Sidechat_Toggle_Button: ArmaLife_PhoneIconControlButton
{
      idc = 90020;
      x = 0.423688 * safezoneW + safezoneX;
      y = 0.4076 * safezoneH + safezoneY;
      w = 0.151581 * safezoneW;
      h = 0.0352 * safezoneH;
      onButtonClick = "[4] spawn ALSG_fnc_UpdateToggle";
};

	
class ArmaLife_Settings_AIP_Toggle: Life_RscPictureKeepAspect
{
      idc = 90021;
      text = "\ArmalifeCore\images\phone\ui\Toggle.paa";
      x = 0.5495 * safezoneW + safezoneX;
      y = 0.4507 * safezoneH + safezoneY;
      w = 0.0123751 * safezoneW;
      h = 0.022 * safezoneH;
};
class AIP_Toggle_Button: ArmaLife_PhoneIconControlButton
{
      idc = 90022;
      x = 0.423687 * safezoneW + safezoneX;
      y = 0.445 * safezoneH + safezoneY;
      w = 0.151581 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[5] spawn ALSG_fnc_UpdateToggle";
};

	
class ArmaLife_Settings_OnFootViewDistance: ArmaLife_PhoneRscEdit
{
      idc = 90023;
      x = 0.535074 * safezoneW + safezoneX;
      y = 0.544926 * safezoneH + safezoneY;
      w = 0.0391876 * safezoneW;
      h = 0.0198 * safezoneH;
      text = "1";
      maxChars = 5;
};
class ArmaLife_Settings_onGroundViewDistance: ArmaLife_PhoneRscEdit
{
      idc = 90024;
      x = 0.535063 * safezoneW + safezoneX;
      y = 0.5088 * safezoneH + safezoneY;
      w = 0.0391876 * safezoneW;
      h = 0.0198 * safezoneH;
      text = "2";
      maxChars = 5;
};
class ArmaLife_Settings_inAirViewDistance: ArmaLife_PhoneRscEdit
{
      idc = 90025;
      x = 0.535063 * safezoneW + safezoneX;
      y = 0.5836 * safezoneH + safezoneY;
      w = 0.0391876 * safezoneW;
      h = 0.0198 * safezoneH;
      text = "3";
      maxChars = 4;
};

class ArmaLife_Settings_WallpaperButton: ArmaLife_PhoneIconControlButton
{
      idc = 90026;
      x = 0.423687 * safezoneW + safezoneX;
      y = 0.632 * safezoneH + safezoneY;
      w = 0.151581 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "['ArmaLife_ChangeBackground'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_Settings_Background_BackButton: ArmaLife_PhoneIconControlButton
{
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_Settings_BtnHome: ArmaLife_PhoneIconControlButton
{
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_gangMain
{
      controls[] = {
            {"ArmaLife_gangMain_Background", 150001},
            {"ArmaLife_gangMain_PList", 150002},
            {"ArmaLife_gangMain_catList", 150003},
            {"ArmaLife_gangMainBtnLeave", 150004},
            {"ArmaLife_gangMainBtnSetLeader", 150005},
            {"ArmaLife_gangMainBtnUpgradeSlots", 150006},
            {"ArmaLife_gangMainBtnDisbandGang", 150007},
            {"ArmaLife_gangMainBtnKick", 150008},
            {"ArmaLife_gangMainBtnInvitePlayer", 150009},
            {"ArmaLife_gangMain_BackButton", 150010},
            {"ArmaLife_gangMain_BtnHome", 150011}
      };
};

class ArmaLife_gangMain_Background: ArmaLife_PhoneRscPicture
{
      text = "\ArmalifeCore\images\phone\dialogImages\gangMain.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class ArmaLife_gangMain_PList: ArmaLife_PhoneRscListbox
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.302 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.3828 * safezoneH;
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class ArmaLife_gangMain_catList: ArmaLife_PhoneRscCombo
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.2822 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.0154 * safezoneH;
      wholeHeight = 10 * (0.017 * safezoneH);
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
      onLbSelChanged = "[] call ALSG_fnc_GangComboChanged";
};
class ArmaLife_gangMainBtnLeave: ArmaLife_PhoneIconControlButton
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6914 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_GangLeave";
};
class ArmaLife_gangMainBtnSetLeader: ArmaLife_PhoneIconControlButton
{
      x = 0.5 * safezoneW + safezoneX;
      y = 0.6914 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_GangSetLeader";
};
class ArmaLife_gangMainBtnUpgradeSlots: ArmaLife_PhoneIconControlButton
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.7112 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_gangUpgrade;";
};
class ArmaLife_gangMainBtnDisbandGang: ArmaLife_PhoneIconControlButton
{
      x = 0.5 * safezoneW + safezoneX;
      y = 0.7112 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_GangDisband";
};
class ArmaLife_gangMainBtnKick: ArmaLife_PhoneIconControlButton
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.731 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_GangKick";
};
class ArmaLife_gangMainBtnInvitePlayer: ArmaLife_PhoneIconControlButton
{
      x = 0.5 * safezoneW + safezoneX;
      y = 0.731 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_GangInvitePlayer";
};
class ArmaLife_gangMain_BackButton: ArmaLife_PhoneIconControlButton
{
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_gangMain_BtnHome: ArmaLife_PhoneIconControlButton
{
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_gangCreate : Life_RscControlsGroupNoScrollbars
{
      controls[] = {
            {"ArmaLife_gangCreate_background", 160001},
            {"ArmaLife_gangCreate_BtnCreateGang", 160002},
            {"ArmaLife_gangCreate_GangNameEdit", 160003},
            {"ArmaLife_gangCreate_StructuredText", 160004},
            {"ArmaLife_Background_BackButton", 160005},
            {"ArmaLife_gangCreate_BtnHome", 160006}
      };
};

class ArmaLife_gangCreate_background: ArmaLife_PhoneRscPicture
{
      idc = 160001;
      text = "\ArmalifeCore\images\phone\dialogImages\createGang.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class ArmaLife_gangCreate_BtnCreateGang: ArmaLife_PhoneIconControlButton
{
      idc = 160002;
      x = 0.448439 * safezoneW + safezoneX;
      y = 0.4758 * safezoneH + safezoneY;
      w = 0.102093 * safezoneW;
      h = 0.0264 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_GangCreateGang";
};
class ArmaLife_gangCreate_GangNameEdit: ArmaLife_PhoneRscEdit
{
      idc = 160003;
      x = 0.44225 * safezoneW + safezoneX;
      y = 0.4516 * safezoneH + safezoneY;
      w = 0.114465 * safezoneW;
      h = 0.022 * safezoneH;
      text = "Enter Gang Name";
      onSetFocus = "['gangcreate'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_gangCreate_StructuredText: ArmaLife_PhoneStructuredText
{
      idc = 160004;
      x = 0.444312 * safezoneW + safezoneX;
      y = 0.3064 * safezoneH + safezoneY;
      w = 0.110341 * safezoneW;
      h = 0.1386 * safezoneH;
};
class ArmaLife_Background_BackButton: ArmaLife_PhoneIconControlButton
{
      idc = 160005;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_gangCreate_BtnHome: ArmaLife_PhoneIconControlButton
{
      idc = 160006;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_Inv : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_Inv_Background", 130001},
    {"ArmaLife_Inv_ItemList", 130002},
    {"ArmaLife_Inv_amount", 130003},
    {"ArmaLife_Inv_Plist", 130004},
    {"ArmaLife_Inv_BtnRemove", 130005},
    {"ArmaLife_Inv_Use", 130006},
    {"ArmaLife_Inv_Give", 130007},
    {"ArmaLife_Inv_Give", 130007},
    {"ArmaLife_Inv_Give", 130007},
    {"ArmaLife_Inv_BackButton", 130008},
    {"ArmaLife_Inv_BtnHome", 130009}
  };
};

class ArmaLife_Inv_Background: ArmaLife_PhoneRscPicture
{
      idc = 130001;
      text = "\ArmalifeCore\images\phone\dialogImages\Inventory.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class ArmaLife_Inv_ItemList: ArmaLife_PhoneRscListbox
{
      idc = 130002;
      x = 0.429366 * safezoneW + safezoneX;
      y = 0.286252 * safezoneH + safezoneY;
      w = 0.141271 * safezoneW;
      h = 0.3564 * safezoneH;
      wholeHeight = 10 * (0.017 * safezoneH);
};
class ArmaLife_Inv_amount: ArmaLife_PhoneRscEdit
{
      idc = 130003;
      x = 0.428846 * safezoneW + safezoneX;
      y = 0.6496 * safezoneH + safezoneY;
      w = 0.143333 * safezoneW;
      h = 0.0176 * safezoneH;
      text = "1";
      onSetFocus = "['invamount'] call ALSG_fnc_clearPlaceholder";
};
class ArmaLife_Inv_Plist: ArmaLife_PhoneRscCombo
{
      idc = 130004;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.672 * safezoneH + safezoneY;
      w = 0.1435 * safezoneW;
      h = 0.017 * safezoneH;
      wholeHeight = 10 * (0.009 * safezoneH);
};
class ArmaLife_Inv_BtnRemove: ArmaLife_PhoneIconControlButton
{
      idc = 130005;
      x = 0.427293 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.0484791 * safezoneW;
      h = 0.0320741 * safezoneH;
      onButtonClick = "[] spawn ALSG_fnc_removeItem";
};
class ArmaLife_Inv_Use: ArmaLife_PhoneIconControlButton
{
      idc = 130006;
      x = 0.476292 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.0464166 * safezoneW;
      h = 0.0320741 * safezoneH;
      onButtonClick = "[] call ALSG_fnc_useItem";
};
class ArmaLife_Inv_Give: ArmaLife_PhoneIconControlButton
{
      idc = 130007;
      x = 0.522688 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.0484791 * safezoneW;
      h = 0.0320741 * safezoneH;
      onButtonClick = "[] call ALSG_fnc_giveItem";
};
class ArmaLife_Inv_BackButton: ArmaLife_PhoneIconControlButton
{
      idc = 130008;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_Inv_BtnHome: ArmaLife_PhoneIconControlButton
{
      idc = 130009;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_KeyChain : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_KeyChain_Background",140001},
    {"ArmaLife_KeyChain_KeyList",140002},
    {"ArmaLife_KeyChain_PList",140003},
    {"ArmaLife_KeyChain_BtnGive",140004},
    {"ArmaLife_KeyChain_BackButton",140005},
    {"ArmaLife_KeyChain_BtnHome",140006}
  };
};

class ArmaLife_KeyChain_Background: ArmaLife_PhoneRscPicture
{
      idc = 140001;
      text = "\ArmalifeCore\images\phone\dialogImages\keyChain.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class ArmaLife_KeyChain_KeyList: ArmaLife_PhoneRscListbox
{
      idc = 140002;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.2844 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.3828 * safezoneH;
};
class ArmaLife_KeyChain_PList: ArmaLife_PhoneRscCombo
{
      idc = 140003;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6716 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.0176 * safezoneH;
      wholeHeight = 10 * (0.009 * safezoneH);
};
class ArmaLife_KeyChain_BtnGive: ArmaLife_PhoneIconControlButton
{
      idc = 140004;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.143344 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[] call ALSG_fnc_giveKey";
};
class ArmaLife_KeyChain_BackButton: ArmaLife_PhoneIconControlButton
{
      idc = 140005;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_KeyChain_BtnHome: ArmaLife_PhoneIconControlButton
{
      idc = 140006;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_Licenses : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_Licenses_Background",110001},
    {"ArmaLife_Licenses_Listbox",110002},
    {"ArmaLife_Licenses_btnBack",110003},
    {"ArmaLife_Licenses_BtnHome",110004}
  };
};


class ArmaLife_Licenses_Background: ArmaLife_PhoneRscPicture
{
    text = "\ArmalifeCore\images\phone\dialogImages\Licenses.paa";
    x = 0.3185 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class ArmaLife_Licenses_Listbox: ArmaLife_PhoneRscListbox
{
    x = 0.427812 * safezoneW + safezoneX;
    y = 0.282 * safezoneH + safezoneY;
    w = 0.143344 * safezoneW;
    h = 0.3894 * safezoneH;
};
class ArmaLife_Licenses_btnBack: ArmaLife_PhoneIconControlButton
{
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_Licenses_BtnHome: ArmaLife_PhoneIconControlButton
{
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_MessagesMain : Life_RscControlsGroupNoScrollbars
{
    controls[] =  {
        {"ArmaLife_MessagesMain_Background", 250001},
        {"ArmaLife_MessagesMain_ContactsGroup", 250002},
        {"ArmaLife_MessagesMain_BtnHome", 250003},
        {"ArmaLife_MessagesMain_BtnBack", 250004}
    };
};

class ArmaLife_MessagesMain_Background: ArmaLife_PhoneRscPicture
{
    idc = 250001;
    text = "\ArmalifeCore\images\phone\dialogImages\MessageMainBackground.paa";
    x = 0.3185 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class ArmaLife_MessagesMain_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
    idc = 250002;
    x = 0.422656 * safezoneW + safezoneX;
    y = 0.2756 * safezoneH + safezoneY;
    w = 0.153656 * safezoneW;
    h = 0.453 * safezoneH;
    class controls {};
};
class ArmaLife_MessagesMain_BtnHome: ArmaLife_PhoneIconControlButton
{
    idc = 250003;
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_MessagesMain_BtnBack: ArmaLife_PhoneIconControlButton
{
    idc = 250004;
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};


class ArmaLife_EmergencyMessage : Life_RscControlsGroupNoScrollbars
{
    controls[] = {
        {"ArmaLife_EmergencyMessage_Background",800001},
        {"ArmaLife_EmergencyMessage_ContactsGroup", 800002},
        {"ArmaLife_EmergencyMessage_BtnHome", 800003},
        {"ArmaLife_EmergencyMessage_BtnBack", 800004},
        {"ArmaLife_EmergencyMessage_TextBox", 800005},
        {"ArmaLife_EmergencyMessage_BtnSendCops", 800006},
        {"ArmaLife_EmergencyMessage_BtnSendEMS", 800007}
    };
};

class ArmaLife_EmergencyMessage_Background: Life_RscPictureKeepAspect
{
    idc = 800001;
    text = "\ArmalifeCore\images\phone\dialogImages\ES_Background.paa";
    x = 0.318499 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class ArmaLife_EmergencyMessage_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
    idc = 800002;
    x = 0.422656 * safezoneW + safezoneX;
    y = (0.3416 - 0.066) * safezoneH + safezoneY;
    w = 0.153656 * safezoneW;
    h = 0.3716 * safezoneH;
    class controls {};
};
class ArmaLife_EmergencyMessage_BtnHome: ArmaLife_PhoneIconControlButton
{
    idc = 800003;
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_EmergencyMessage_BtnBack: ArmaLife_PhoneIconControlButton
{
    idc = 800004;
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_EmergencyMessage_TextBox: ArmaLife_PhoneRscEdit
{
    idc = 800005;
    text = "Type Message Here";
    x = 0.42575 * safezoneW + safezoneX;
    y = (0.72 - 0.066) * safezoneH + safezoneY;
    w = 0.137156 * safezoneW;
    h = 0.0704 * safezoneH;
    style = 16 + 512;
    onSetFocus = "['messagebox'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_EmergencyMessage_BtnSendCops: ArmaLife_PhoneIconControlButton
{
    idc = 800006;
    x = 0.561875 * safezoneW + safezoneX;
    y = (0.7706 - 0.066) * safezoneH + safezoneY;
    w = 0.0134062 * safezoneW;
    h = 0.0242 * safezoneH;
    onButtonClick = "['cop'] call ALSG_fnc_SendEMessage";
};
class ArmaLife_EmergencyMessage_BtnSendEMS: ArmaLife_PhoneIconControlButton
{
    idc = 800007;
    x = 0.562907 * safezoneW + safezoneX;
    y = (0.753 - 0.066) * safezoneH + safezoneY;
    w = 0.0113438 * safezoneW;
    h = 0.0176 * safezoneH;
    onButtonClick = "['ems'] call ALSG_fnc_SendEMessage";
};

	
class ArmaLife_MessagesView : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_MessagesView_Background", 230001},
    {"ArmaLife_MessagesView_ContactsGroup", 230002},
    {"ArmaLife_MessagesView_BtnHome", 230003},
    {"ArmaLife_MessagesView_BtnBack", 230004},
    {"ArmaLife_MessagesView_TextBox", 230005},
    {"ArmaLife_MessagesView_ContactInfo", 230006},
    {"ArmaLife_MessagesView_InfoButton", 230007},
    {"ArmaLife_MessagesView_BtnSendMessage", 230008}
  };
};

class ArmaLife_MessagesView_Background: ArmaLife_PhoneRscPicture
{
        idc = 230001;
        text = "\ArmalifeCore\images\phone\dialogImages\MessageViewBackground.paa";
        x = 0.3185 * safezoneW + safezoneX;
        y = 0.159 * safezoneH + safezoneY;
        w = 0.360937 * safezoneW;
        h = 0.638 * safezoneH;
};
class ArmaLife_MessagesView_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
        idc = 230002;
        x = 0.422656 * safezoneW + safezoneX;
        y = (0.3416 - 0.066) * safezoneH + safezoneY;
        w = 0.153656 * safezoneW;
        h = 0.3716 * safezoneH;
        class controls {};
};
class ArmaLife_MessagesView_BtnHome: ArmaLife_PhoneIconControlButton
{
        idc = 230003;
        x = 0.470094 * safezoneW + safezoneX;
        y = (0.8248 - 0.066) * safezoneH + safezoneY;
        w = 0.0567187 * safezoneW;
        h = 0.011 * safezoneH;
        onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class ArmaLife_MessagesView_BtnBack: ArmaLife_PhoneIconControlButton
{
        idc = 230004;
        x = 0.424718 * safezoneW + safezoneX;
        y = (0.28 - 0.066) * safezoneH + safezoneY;
        w = 0.0422815 * safezoneW;
        h = 0.0154 * safezoneH;
        onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_MessagesView_TextBox: ArmaLife_PhoneRscEdit
{
        idc = 230005;
        text = "";
        x = 0.42575 * safezoneW + safezoneX;
        y = (0.72 - 0.066) * safezoneH + safezoneY;
        w = 0.137156 * safezoneW;
        h = 0.0704 * safezoneH;
        style = 16 + 512;
        onSetFocus = "['messagebox'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_MessagesView_ContactInfo: Life_RscStructuredText
{
        idc = 230006;
        text = "test";
        x = 0.424719 * safezoneW + safezoneX;
        y = (0.3196 - 0.066) * safezoneH + safezoneY;
        w = 0.149531 * safezoneW;
        h = 0.0198 * safezoneH;
};
class ArmaLife_MessagesView_InfoButton: ArmaLife_PhoneIconControlButton
{
        idc = 230007;
        x = 0.562906 * safezoneW + safezoneX;
        y = (0.28 - 0.066) * safezoneH + safezoneY;
        w = 0.0103125 * safezoneW;
        h = 0.0154 * safezoneH;
};
class ArmaLife_MessagesView_BtnSendMessage: ArmaLife_PhoneIconControlButton
{
        idc = 230008;
        x = 0.561875 * safezoneW + safezoneX;
        y = (0.7706 - 0.066) * safezoneH + safezoneY;
        w = 0.0134062 * safezoneW;
        h = 0.0242 * safezoneH;
};



class ArmaLife_MessagesEmergency : Life_RscControlsGroupNoScrollbars
{
        controls[] = {
                {"ArmaLife_MessagesEmergency_Background", 900001},
                {"ArmaLife_MessagesEmergency_MessagesGroup", 900002},
                {"ArmaLife_MessagesEmergency_BtnHome", 900003},
                {"ArmaLife_MessagesEmergency_BtnBack", 900004},
        };
};
class ArmaLife_MessagesEmergency_Background: Life_RscPictureKeepAspect
{
    idc = 900001;
    text = "\ArmalifeCore\images\phone\dialogImages\Dispatch.paa";
    x = 0.318499 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class ArmaLife_MessagesEmergency_MessagesGroup: Life_RscControlsGroupNoScrollbars
{
    idc = 900002;
    x = 0.422656 * safezoneW + safezoneX;
    y = 0.2756 * safezoneH + safezoneY;
    w = 0.153656 * safezoneW;
    h = 0.453 * safezoneH;
    class controls {};
};
class  ArmaLife_MessagesEmergency_BtnHome: ArmaLife_PhoneIconControlButton
{
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};
class  ArmaLife_MessagesEmergency_BtnBack: ArmaLife_PhoneIconControlButton
{
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};

	
class ArmaLife_Money : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_Money_Background", 120001},
    {"ArmaLife_Money_Plist", 120002},
    {"ArmaLife_Money_AmountEdit", 120003},
    {"ArmaLife_Money_CashBox", 120004},
    {"ArmaLife_Money_BankBox", 120005},
    {"ArmaLife_Money_BtnGive", 120006},
    {"ArmaLife_Money_BackButton", 120007},
    {"ArmaLife_Money_BtnHome", 120008}
  };
};

class ArmaLife_Money_Background: ArmaLife_PhoneRscPicture
{
      idc = 120001;
      text = "\ArmalifeCore\images\phone\dialogImages\MoneyStats.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class ArmaLife_Money_Plist: ArmaLife_PhoneRscCombo
{
      idc = 120002;
      x = 0.427816 * safezoneW + safezoneX;
      y = 0.526 * safezoneH + safezoneY;
      w = 0.144364 * safezoneW;
      h = 0.017 * safezoneH;
      wholeHeight = 10 * (0.017 * safezoneH);
};
class ArmaLife_Money_AmountEdit: ArmaLife_PhoneRscEdit
{
      idc = 120003;
      x = 0.427814 * safezoneW + safezoneX;
      y = 0.566 * safezoneH + safezoneY;
      w = 0.144364 * safezoneW;
      h = 0.0176 * safezoneH;
      text = "1";
      onSetFocus = "['moneyamount'] call ALSG_fnc_ClearPlaceholder";
};
class ArmaLife_Money_CashBox: Life_RscText
{
      idc = 120004;
      x = 0.458744 * safezoneW + safezoneX;
      y = 0.423 * safezoneH + safezoneY;
      w = 0.107248 * safezoneW;
      h = 0.0242 * safezoneH;
      text = "CASH MONEY";
      colorText[] = {0.3,0.3,0.3,1};
      font = "RobotoCondensed";
      shadow = 0;
      sizeEx = (((pixelh * 5) * ((getResolution select 1) / 1080)) * 4);
};
class ArmaLife_Money_BankBox: Life_RscText
{
      idc = 120005;
      x = 0.458744 * safezoneW + safezoneX;
      y = 0.3548 * safezoneH + safezoneY;
      w = 0.107248 * safezoneW;
      h = 0.0242 * safezoneH;
      text = "BANK MONEY";
      colorText[] = {0.3,0.3,0.3,1};
      font = "RobotoCondensed";
      shadow = 0;
      sizeEx = (((pixelh * 5) * ((getResolution select 1) / 1080)) * 4);
};
class ArmaLife_Money_BtnGive: ArmaLife_PhoneIconControlButton
{
      idc = 120006;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.143344 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[] call ALSG_fnc_giveMoney";
};
class ArmaLife_Money_BackButton: ArmaLife_PhoneIconControlButton
{
      idc = 120007;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn ALSG_fnc_changeMenu";
};
class ArmaLife_Money_BtnHome: ArmaLife_PhoneIconControlButton
{
      idc = 120008;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['ArmaLife_Buttons'] spawn ALSG_fnc_changeMenu;";
};

	
class ArmaLife_Setup
{
    controls[] = {
        {"ArmaLife_Setup_SetupGroup", 180001}
    };
};

class ArmaLife_Setup_SetupGroup : Life_RscControlsGroupNoScrollbars
{
    idc = 180001;
    x = 0.318531 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
    class controls {};
};


	
class ArmaLife_PhoneWarning : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"ArmaLife_PhoneWarning_Background", 50001},
    {"ArmaLife_PhoneWarning_TextGroup", 50002},
    {"ArmaLife_PhoneWarning_BtnCancel", 50003},
    {"ArmaLife_PhoneWarning_BtnOk", 50004}
  };
};

class ArmaLife_PhoneWarning_Background: ArmaLife_PhoneRscPicture
{
  text = "\ArmalifeCore\images\phone\dialogImages\warning.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};
class ArmaLife_PhoneWarning_TextGroup : Life_RscControlsGroupNoScrollbars
{
  x = 0.437095 * safezoneW + safezoneX;
  y = 0.4054  * safezoneH + safezoneY;
  w = 0.124775 * safezoneW;
  h = 0.121 * safezoneH;
  class controls
  {
    class Text: ArmaLife_PhoneStructuredText
    {
      idc = 1;
      text = "";
      w = 0.124775 * safezoneW;
      h = 0.121 * safezoneH;
    };
  };
};
class ArmaLife_PhoneWarning_BtnCancel: ArmaLife_PhoneIconControlButton
{
  x = 0.432969 * safezoneW + safezoneX;
  y = 0.533  * safezoneH + safezoneY;
  w = 0.0659999 * safezoneW;
  h = 0.0242 * safezoneH;
};
class ArmaLife_PhoneWarning_BtnOk: ArmaLife_PhoneIconControlButton
{
  x = 0.49897 * safezoneW + safezoneX;
  y = 0.533  * safezoneH + safezoneY;
  w = 0.0659999 * safezoneW;
  h = 0.0242 * safezoneH;
};