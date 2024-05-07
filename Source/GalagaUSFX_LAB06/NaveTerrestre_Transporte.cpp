// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestre_Transporte.h"

void ANaveTerrestre_Transporte::BeginPlay()
{
	Super::BeginPlay();
}

ANaveTerrestre_Transporte::ANaveTerrestre_Transporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveTerrestre_Transporte"; //Nombre de la nave
	VelocidadYTransporte = 350.0f;

	//VIDA DE LA NAVE 
	energia = 50; // Inicializar la energia que tendra la nave
	resistencia = 30; // Inicializar la resistencia que tendra la nave
}

void ANaveTerrestre_Transporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveTerrestre_Transporte::Mover(float DeltaTime)
{
	// Obtenemos la posicion acutal del actor
	FVector PosicionActual = GetActorLocation();

	// damos valor a la coordenada X que sera 0 
	float NuevaX = 0.0f;
	// Calculamos la nueva posicion en el eje Y
	float MovimientoY = PosicionActual.Y + (VelocidadYTransporte * DeltaTime);

	// Verificamos si la nave ha alcanzado el limite superior o inferior en el eje Y
	if (MovimientoY >= 1100.0f || MovimientoY <= -1100.0f)
	{
		// Cambiamos la direccion multiplicando por -1
		VelocidadYTransporte *= -1.0f;
	}

	// Establecemos la nueva posicion del actor
	SetActorLocation(FVector(PosicionActual.X + NuevaX, MovimientoY, PosicionActual.Z));
}
