private _sel = param [0];

switch (_sel) do { 
	case 0: {
		["The threat level has been changed to Green!",true,"slow"] remoteExec ["ALSG_fnc_notificationSystem",0];
	}; 
	case 1: {
		["The threat level has been changed to Amber!",true,"slow"] remoteExec ["ALSG_fnc_notificationSystem",0];
	}; 
	case 2: {
		["The threat level has been changed to Red!",true,"slow"] remoteExec ["ALSG_fnc_notificationSystem",0];
	};
	case 3: {
		["The threat level has been changed to Martial Law!",true,"slow"] remoteExec ["ALSG_fnc_notificationSystem",0];
	}; 
};

missionNamespace setVariable ["ArmaLife_ThreatLevel",_sel,true];
[] remoteExec ["ALSG_fnc_hudUpdate",0];