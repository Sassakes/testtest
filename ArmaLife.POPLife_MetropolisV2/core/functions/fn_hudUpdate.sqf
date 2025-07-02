#include "..\..\script_macros.hpp"

//---------------------------------
//By Repentz 
//---------------------------------

disableSerialization;
if(isNull LIFEdisplay) then {[] call ALSG_fnc_hudSetup;};

if(!isNil "life_thirst") then
{
	if (life_thirst <= 100) then
	{
		LIFEctrl(3201) ctrlSetText "ArmalifeCore\images\textures\HUD\Thirst-Hydrated.paa";
	};

	if (life_thirst <= 90) then
	{
		LIFEctrl(3201) ctrlSetText "ArmalifeCore\images\textures\HUD\Thirst-Quenched.paa";
	};

	if (life_thirst <= 70) then
	{
		LIFEctrl(3201) ctrlSetText "ArmalifeCore\images\textures\HUD\Thirst-Saturated.paa";
	};

	if (life_thirst <= 50) then
	{
		LIFEctrl(3201) ctrlSetText "ArmalifeCore\images\textures\HUD\Thirst-Thirsty.paa";
	};

	if (life_thirst <= 30) then
	{
		LIFEctrl(3201) ctrlSetText "ArmalifeCore\images\textures\HUD\Thirst-Parched.paa";
	};

	if (life_thirst <= 0) then
	{
		LIFEctrl(3201) ctrlSetText "ArmalifeCore\images\textures\HUD\Thirst-Enfeebled.paa";
	};
};

if (damage player >= 0) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-VeryHealthy.paa";
};

if (damage player >= 0.1) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-Healthy.paa";
};

if (damage player >= 0.2) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-Vigorous.paa";
};

if (damage player >= 0.3) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-Feeble.paa";
};

if (damage player >= 0.4) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-Injured.paa";
};

if (damage player >= 0.6) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-BadlyInjured.paa";
};

if (damage player >= 0.8) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-Critical.paa";
};

if (damage player >= 1) then
{
	LIFEctrl(3202) ctrlSetText "ArmalifeCore\images\textures\HUD\HP-Perished.paa";
};

if(!isNil "life_hunger") then
{
	if (life_hunger <= 100) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-Nourished.paa";
	};

	if (life_hunger <= 90) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-WellFed.paa";
	};

	if (life_hunger <= 70) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-Sustained.paa";
	};

	if (life_hunger <= 50) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-Hungered.paa";
	};

	if (life_hunger <= 30) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-Famished.paa";
	};

	if (life_hunger <= 20) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-Starved.paa";
	};

	if (life_hunger <= 0) then
	{
		LIFEctrl(3200) ctrlSetText "ArmalifeCore\images\textures\HUD\Hunger-Ravenous.paa";
	};
};

_text = ""; 
_color = [];
switch (missionNameSpace getVariable ["ArmaLife_ThreatLevel",0]) do { 
	case 0: {
		_text = "CODE GREEN";
		_color = [0.063,0.776,0,1];
	}; 
	case 1: {
		_text = "CODE AMBER";
		_color = [0.776,0.424,0,1];
	}; 
	case 2: {
		_text = "CODE RED";
		_color = [0.776,0,0,1];
	}; 
	case 3: {
		_text = "MARTIAL LAW";
		_color = [0.569,0,0,1];
	}; 
};

LIFEctrl(1251) ctrlSetText _text;
LIFEctrl(1251) ctrlSetTextColor _color;