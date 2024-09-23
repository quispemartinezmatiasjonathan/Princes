// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrincesGameMode.h"
#include "PrincesCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Plataforma.h"

APrincesGameMode::APrincesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	Posicion = FVector(1180.f, -370.f, 260.f);
	Rotacion = FRotator(0.f, 0.f, 4.f);
	PosicionAuxiliar = 500.f;
	Time = 0.f;
	spawnsPlataforma = 0;
}

void APrincesGameMode::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < 12; i++) {
		PT = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), Posicion, Rotacion);
		ContPlataforma.Add(PT);
		Posicion.Z += 500.0f;
		Posicion.Y += PosicionAuxiliar + FMath::FRandRange(10.f, 20.f);
		Rotacion.Roll *= -1;
		PosicionAuxiliar *= -1;
	}

	spawnsPlataforma = ContPlataforma.Num() - 1; //4 elementos [0,1,2,3]
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan,
		FString::Printf(TEXT("Cantidad del contenedor: %d"), ContPlataforma.Num()));

	/*Ba = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), FVector(1210.f, 970.f, 1900.f), FRotator::ZeroRotator);*/
}

void APrincesGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Time += DeltaTime;

	//Codigo para eliminar plataformas con un reloj.
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue,
		FString::Printf(TEXT("Cantidad del contenedor: %d"), ContPlataformas.Num()));

	if (Time > 3.0f) {
		if (spawnsPlataformas != -1) {
			AActor* plataforma = ContPlataformas[spawnsPlataformas];
			plataforma->Destroy();
			ContPlataformas.RemoveAt(ContPlataformas.Num() - 1);
			Time = 0.f;
			spawnsPlataformas -= 1;
		}

	}*/

}
