// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

UCLASS()
class PRINCES_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	//Malla de la plataforma
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlataformaMesh;

	FVector StartLocation;
	FVector EndLocation;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Amplitude = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Frequency = 1.0f;

};
