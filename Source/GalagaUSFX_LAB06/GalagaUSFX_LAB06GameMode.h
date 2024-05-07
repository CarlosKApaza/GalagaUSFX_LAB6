// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GalagaUSFX_LAB06Projectile.h"
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

	int ClaveNaves = 0; // clave para las naves enemigas

UPROPERTY()
	TMap<ANaveEnemiga*, int> TMAClavesNavesEnemigas; //Mapa de Naves Enemigas
	TMap<ANaveEnemiga*, FVector> TMANavesEnemigas; //Mapa de Naves Enemigas
	//TMap<ANaveEnemiga*, 

public:

	FTimerHandle FTHMostrarClaves; //Timer para mostrar las claves de las naves


	FTimerHandle FTHEliminarEnemigosAleatorios; //Timer para eliminar enemigos aleatoriamente
	FTimerHandle FTHCrearEnemigosAleatorios; //Timer para crear enemigos aleatoriamente


	void MostrarClavesNaves(); //Funcion para mostrar las claves de las naves
	void OcultarClavesNaves(); //Funcion para ocultar las claves de las naves



	//void EliminarEnemigosAleatoriamente(); //Funcion para eliminar enemigos aleatoriamente
	void CrearEnemigosAleatoriamente(TArray<FString> TiposNaves, FVector PosicionInicial, float EspacioEntreNavesY, int CantidadNaves); //Funcion para crear enemigos aleatoriamente
	void CrearEnemigos(); //Funcion para crear enemigos de un tipo especifico

};



