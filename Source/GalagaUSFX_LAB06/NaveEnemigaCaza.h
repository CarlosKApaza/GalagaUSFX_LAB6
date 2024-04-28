// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	ANaveEnemigaCaza();

	virtual void Construir() override;
	virtual void ActivarSistemas() override;


	virtual void Tick(float DeltaTime) override;
	//void Atakar();
};
