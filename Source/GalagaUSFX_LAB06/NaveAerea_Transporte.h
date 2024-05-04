// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveAerea_Transporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ANaveAerea_Transporte : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Constructor
	ANaveAerea_Transporte();
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Mover(float DeltaTime);
	virtual void RecibirDanio(float dano);
protected:
	// Velocidad en el eje Y
	UPROPERTY(EditAnywhere, Category = "Velocidad Nave Aerea Transporte")
	float VelocidadYTransporte;
};
