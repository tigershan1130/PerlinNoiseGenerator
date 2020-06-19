// Fill out your copyright notice in the Description page of Project Settings.


#include "PerlinNoiseActor.h"

// Sets default values
APerlinNoiseActor::APerlinNoiseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APerlinNoiseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APerlinNoiseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UTextureRenderTarget2D* RenderTargetOutput = OutputRT;

	float mSize = Size;
	float mInterval = Interval;
	float mAmplitude = Amplitude;

	ENQUEUE_RENDER_COMMAND(CaptureCommand)(
		[RenderTargetOutput, mSize, mInterval, mAmplitude](FRHICommandListImmediate& RHICmdList)
		{
			FPerlinNoisePixelShader::DrawToRenderTarget_RenderThread(RHICmdList, RenderTargetOutput, mSize, mInterval, mAmplitude);
		}
	);

}

