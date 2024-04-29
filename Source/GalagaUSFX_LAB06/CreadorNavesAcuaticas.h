// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreadorNaves.h"
#include "CreadorNavesAcuaticas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ACreadorNavesAcuaticas : public ACreadorNaves
{
	GENERATED_BODY()

public:
	virtual ANaveEnemiga* CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave) override;
};
