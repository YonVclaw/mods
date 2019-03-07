class CfgPatches
{
	class ghostb_nouav
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgVehicles
{
	class B_Ship_Gun_01_F;
	class GhostB_B_Ship_Gun_01_F: B_Ship_Gun_01_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_Ship_Gun_01_F";
		displayName="Mk45 Hammer (No UAV)";
		scope=2;
		scopeCurator=2;
		side=1;
		isUav=0;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]={};
	};
	class B_Radar_System_01_F;
	class GhostB_B_Radar_System_01_F: B_Radar_System_01_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_Radar_System_01_F";
		displayName="AN/MPQ-105 Radar (No UAV)";
		side=1;
		isUav=0;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]={};
	};
	class B_SAM_System_03_F;
	class GhostB_B_SAM_System_03_F: B_SAM_System_03_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_SAM_System_03_F";
		displayName="MIM-145 Defender (No UAV)";
		side=1;
		isUav=0;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]={};
	};
	class B_AAA_System_01_F;
	class GhostB_B_AAA_System_01_F: B_AAA_System_01_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_AAA_System_01_F";
		displayName="Praetorian 1C (No UAV)";
		side=1;
		isUav=0;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]={};
	};
	class GhostB_O_AAA_System_01_F: B_AAA_System_01_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_AAA_System_01_F";
		displayName="Praetorian 1C (No UAV)";
		side=0;
		isUav=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]={};
	};
	class B_SAM_System_01_F;
	class GhostB_B_SAM_System_01_F: B_SAM_System_01_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_SAM_System_01_F";
		displayName="Mk49 Spartan (No UAV)";
		side=1;
		isUav=0;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]={};
	};
	class GhostB_O_SAM_System_01_F: B_SAM_System_01_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_SAM_System_01_F";
		displayName="Mk49 Spartan (No UAV)";
		side=0;
		isUav=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]={};
	};
	class B_SAM_System_02_F;
	class GhostB_B_SAM_System_02_F: B_SAM_System_02_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_SAM_System_02_F";
		displayName="Mk21 Centurion (No UAV)";
		side=1;
		isUav=0;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]={};
	};
	class GhostB_O_SAM_System_02_F: B_SAM_System_02_F
	{
		author="Ghosts of Battle";
		_generalMacro="B_SAM_System_02_F";
		displayName="Mk21 Centurion (No UAV)";
		side=0;
		isUav=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]={};
	};
	class O_Radar_System_02_F;
	class GhostB_O_Radar_System_02_F: O_Radar_System_02_F
	{
		author="Ghosts of Battle";
		_generalMacro="O_Radar_System_02_F";
		displayName="	R-750 Cronus Radar (No UAV)";
		side=0;
		isUav=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]={};
	};
	class O_SAM_System_04_F;
	class GhostB_O_SAM_System_04_FF: O_SAM_System_04_F
	{
		author="Ghosts of Battle";
		_generalMacro="O_SAM_System_04_F";
		displayName="S-750 Rhea (No UAV)";
		side=0;
		isUav=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]={};
	};


};
