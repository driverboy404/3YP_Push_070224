// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TYP_13_01_24 : ModuleRules
{
	public TYP_13_01_24(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "GameplayTasks" });
	}
}
