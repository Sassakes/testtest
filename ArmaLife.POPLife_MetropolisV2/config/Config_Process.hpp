/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        NoLicenseCost = 1000;
    };

    class diamond {
        MaterialsReq[] = {{"diamondOre",1}};
        MaterialsGive[] = {{"diamond",1}};
        Text = "STR_Process_Diamond";
        NoLicenseCost = 1000;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        NoLicenseCost = 4000;
    };

    class coal {
        MaterialsReq[] = {{"coalOre",1}};
        MaterialsGive[] = {{"coal",1}};
        Text = "STR_Process_Coal";
        NoLicenseCost = 1000;
    };

    class iron {
        MaterialsReq[] = {{"ironOre",1}};
        MaterialsGive[] = {{"iron",1}};
        Text = "STR_Process_Iron";
        NoLicenseCost = 1000;
    };
    
    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        NoLicenseCost = 4000;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        NoLicenseCost = 2500;
    };

    class rubber {
        MaterialsReq[] = {{"rubberU",1}};
        MaterialsGive[] = {{"rubber",1}};
        Text = "STR_Process_rubber";    
        NoLicenseCost = 1000;
    };

    class cloth {
        MaterialsReq[] = {{"wool",1}};
        MaterialsGive[] = {{"cloth",1}};
        Text = "STR_Process_cloth"; 
        NoLicenseCost = 1000;
    };
    
    class lsd {
        MaterialsReq[] = {{"mushrooms",1}};
        MaterialsGive[] = {{"LSD",1}};
        Text = "STR_Process_LSD";   
        NoLicenseCost = 3000;
    };

    class ruby {
        MaterialsReq[] = {{"rubyU",1}};
        MaterialsGive[] = {{"rubyC",1}};
        Text = "STR_Process_Ruby";  
        NoLicenseCost = 1500;
    };

    class uranium {
        MaterialsReq[] = {{"uraniumU",1}};
        MaterialsGive[] = {{"uranium",1}};
        Text = "STR_Process_uranium";   
        NoLicenseCost = 3000;
    };
};