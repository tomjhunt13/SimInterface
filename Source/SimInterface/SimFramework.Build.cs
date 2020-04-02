// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class SimFramework : ModuleRules
{
	public SimFramework(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        string pathToLib = "../../ThirdParty/SimFramework/";


		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, pathToLib, "Framework/include"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, pathToLib, "SimModels/include"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, pathToLib, "ThirdParty/eigen"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, pathToLib, "ThirdParty/json"));


		if (Target.Platform == UnrealTargetPlatform.Mac)
		{
		    PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, pathToLib, "Binaries/Darwin/x86_64/libFramework.a"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, pathToLib, "Binaries/Darwin/x86_64/libSimModels.a"));
        }

        else if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, pathToLib, "Binaries/Windows/AMD64/Framework.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, pathToLib, "Binaries/Windows/AMD64/SimModels.lib"));
        }
	}
}
