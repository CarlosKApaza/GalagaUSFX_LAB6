// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveEnemigaEspia"; //Nombre de la nave
	//VIDA DE LA NAVE 
	energia = 50; // Inicializar la energia que tendra la nave
	resistencia = 30; // Inicializar la resistencia que tendra la nave
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
