// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "NaveEnemiga.h"
#include "GalagaUSFX_LAB06GameMode.h"

#include "CreadorNaves.generated.h"

UCLASS()
class GALAGAUSFX_LAB06_API ACreadorNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreadorNaves();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Funcion pura para crear una nave enemiga
	virtual ANaveEnemiga* CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave) PURE_VIRTUAL(ACreadorNavesEnemigas::CrearNaveEnemiga, return nullptr;)

		//Ordena, crea y retorna una pocion de una categoria especifica
		ANaveEnemiga* OrdenarNave(FString Categoria, FVector UbicacionNaveOrden);


};
