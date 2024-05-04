// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveAcuatica_Espia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ANaveAcuatica_Espia : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Constructor
	ANaveAcuatica_Espia();
	virtual void Tick(float DeltaTime) override;
	public:
		virtual void Mover(float DeltaTime);
protected:
	// Velocidad en el eje Y
	UPROPERTY(EditAnywhere, Category = "Velocidad Nave Acuatica Espia")
	float VelocidadYEspia;
};
