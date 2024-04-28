// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGAUSFX_LAB06_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

public:
	int clave; //clave para identificar la nave
protected:
	FString NombreNave;
	//UPROPERTY(EditAnywhere)
	//	UStaticMeshComponent* MeshNave;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void Construir() PURE_VIRTUAL(ANaveEnemiga::Construir, );
	virtual void ActivarSistemas() PURE_VIRTUAL(ANaveEnemiga::ActivarSistemas, );

	void Mover() PURE_VIRTUAL(ANaveEnemiga::Mover, );
	
	// Devolver el nombre de la nave
	FString GetNombreNave();
};
