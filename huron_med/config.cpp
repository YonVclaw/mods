class CfgPatches
{
	class ghostb_medicalvehicles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"ace_medical",
			"cba_settings"
			};
	};
};

class CfgVehicles
{
	class B_Heli_Transport_03_unarmed_F;
	class GhostB_B_Heli_Medevac_031_F: B_Heli_Transport_03_unarmed_F
	{
		author="Ghosts of Battle";
		_generalMacro="Heli_Transport_03_base_F";
		displayName="Huron MedEvac (Unarmed)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope=2;
		attendant=1;
		armor = 500
		pilotLight = false;
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";	/// icon in map/editor
		picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";	/// small picture in command menu
		threat[]={0,0,0};
		class EventHandlers
		{
			init = "this setVariable ['ace_medical_medicClass',1];";
		};
		class TransportItems /// adds various items to cargo hold of the heli
		{
			class _xx_ACE_adenosine
			{
				name="ACE_adenosine";
				count=40;
			};
			class _xx_ACE_atropinee
			{
				name="ACE_atropine";
				count=40;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=80;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=80;
			};
			class _xx_ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=40;
			};
			class _xx_ACE_bodyBag
			{
				name="ACE_bodyBag";
				count=40;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=40;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=40;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=80;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=40;
			};
			class _xx_ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=40;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=40;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=40;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=8;
			};
			class _xx_ACE_EarPlugs
			{
				name="ACE_EarPlugs";
				count=40;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\huron_med\Heli_Transport_03_ext01_md.paa",
			"\huron_med\Heli_Transport_03_ext02_md.paa"
		};
		textureList[]=
		{
			"med1",
			1
		};
	};
};
