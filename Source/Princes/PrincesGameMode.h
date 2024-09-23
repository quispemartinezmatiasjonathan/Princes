// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrincesGameMode.generated.h"

UCLASS(minimalapi)
class APrincesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrincesGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	TArray<AActor*> ContPlataforma;
	FVector Posicion;
	float PosicionAuxiliar;
	FRotator Rotacion;
	int spawnsPlataforma;
	float Time;

	//Clases
	class APlataforma* PT;
	class ABarril* Ba;

};


