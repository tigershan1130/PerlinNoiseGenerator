// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerlinNoisePixel.h"
#include "PerlinNoiseActor.generated.h"

UCLASS()
class PERLINNOISEGENERATORT_API APerlinNoiseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APerlinNoiseActor();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TsNoise Generator")
	UTextureRenderTarget2D* OutputRT = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TsNoise Generator")
		float Size = 512;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TsNoise Generator")
		float Amplitude = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TsNoise Generator")
		float Interval = 255;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
