// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Week6_CPPCharacter : ModuleRules
{
	public Week6_CPPCharacter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
