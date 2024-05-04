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
protected:
	float velocidad;
	float velocidadDisparo;
	float valorDestruccion;
	float experiencia;
	float tiempoDisparo;


	float danoProducido;  // 
	float energia; // La energia que tendran todas las naves
	float resistencia;   // La resistencia que tendran todas las naves


	FString nombre;
	FVector posicion;
	//CATrayectoria* trayectoria;

public:
	//getters
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetValorDestruccion() const { return valorDestruccion; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	//setters
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidadDisparo) { velocidadDisparo = _velocidadDisparo; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetValorDestruccion(float _valorDestruccion) { valorDestruccion = _valorDestruccion; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:
	int idClaveNave; //clave para identificar la nave
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

	//void RecibirDanio(float dano) PURE_VIRTUAL(ANaveEnemiga::RecibirDanio, );  // 
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	
	// Devolver el nombre de la nave
	FString GetNombreNave();
};
