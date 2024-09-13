// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyThird : ModuleRules
{
    public MyThird(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HeadMountedDisplay", "UMG", "Slate", "SlateCore" });

        // 学习项目:https://www.bilibili.com/video/BV1af421R7BD/?spm_id_from=333.999.0.0

        // UI界面展示插件
        PublicDependencyModuleNames.AddRange(new string[] { "HeadMountedDisplay", "UMG", "Slate", "SlateCore" });

    }

}
