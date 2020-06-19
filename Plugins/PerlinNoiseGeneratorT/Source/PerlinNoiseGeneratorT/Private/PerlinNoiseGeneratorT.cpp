// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PerlinNoiseGeneratorT.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "RHI.h"
#include "Interfaces/IPluginManager.h"
#include <Runtime\RenderCore\Public\ShaderCore.h>

#define LOCTEXT_NAMESPACE "FPerlinNoiseGeneratorTModule"

void FPerlinNoiseGeneratorTModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString ShaderDirectory = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("PerlinNoiseGeneratorT"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/NoiseGen", ShaderDirectory);
}

void FPerlinNoiseGeneratorTModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPerlinNoiseGeneratorTModule, PerlinNoiseGeneratorT)