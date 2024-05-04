// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveAerea_Caza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ANaveAerea_Caza : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	ANaveAerea_Caza(); // constructor que nos va a permitir inicializar los valores de la nave y darle una apariencia
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	virtual void RecibirDanio(float dano); 

protected:
	// Velocidad en el eje Y
	UPROPERTY(EditAnywhere, Category = "Velocidad Nave Aerea Caza")
	float VelocidadYCaza;
};
