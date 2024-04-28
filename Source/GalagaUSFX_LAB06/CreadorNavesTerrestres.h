// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreadorNaves.h"
#include "CreadorNavesTerrestres.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ACreadorNavesTerrestres : public ACreadorNaves
{
	GENERATED_BODY()

public:
	virtual ANaveEnemiga* CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave) override;
};
