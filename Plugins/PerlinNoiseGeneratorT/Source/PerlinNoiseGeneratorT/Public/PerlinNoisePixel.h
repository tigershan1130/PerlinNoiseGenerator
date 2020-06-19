#pragma once

#include "ShaderParameterUtils.h"
#include "RHIStaticStates.h"
#include "Shader.h"
#include "GlobalShader.h"
#include "RenderGraphBuilder.h"
#include "RenderGraphUtils.h"
#include "ShaderParameterMacros.h"
#include "ShaderParameterStruct.h"
#include "UniformBuffer.h"
#include "RHICommandList.h"
#include "Containers/DynamicRHIResourceArray.h"
#include <Runtime\Engine\Classes\Engine\TextureRenderTarget2D.h>
#include "Runtime/RenderCore/Public/PixelShaderUtils.h"

class FPerlinNoisePixelShader
{
public:

	static void DrawToRenderTarget_RenderThread(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* RenderTarget, float Size, float Interval, float Amplitude);
};