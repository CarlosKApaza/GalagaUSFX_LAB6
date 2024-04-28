// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GalagaUSFX_LAB06 : ModuleRules
{
	public GalagaUSFX_LAB06(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
