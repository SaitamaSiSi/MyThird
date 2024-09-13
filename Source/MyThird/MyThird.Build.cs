// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyThird : ModuleRules
{
    public MyThird(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HeadMountedDisplay", "UMG", "Slate", "SlateCore" });

        // ѧϰ��Ŀ:https://www.bilibili.com/video/BV1af421R7BD/?spm_id_from=333.999.0.0

        // UI����չʾ���
        PublicDependencyModuleNames.AddRange(new string[] { "HeadMountedDisplay", "UMG", "Slate", "SlateCore" });

    }

}
