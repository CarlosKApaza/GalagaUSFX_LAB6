// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GalagaUSFX_LAB06GameMode.generated.h"

class ANaveEnemiga; //Forward Declaration

UCLASS(MinimalAPI)
class AGalagaUSFX_LAB06GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalagaUSFX_LAB06GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas; //Array de Naves Enemigas
UPROPERTY()
	TMap<ANaveEnemiga*, int> TMAPocionesNavesEnemigas; //Mapa de Naves Enemigas
	//TMap<ANaveEnemiga*, 

public:

	FTimerHandle FTHMostrarClaves;
	void MostrarClavesNaves();
	void OcultarClavesNaves();
};



