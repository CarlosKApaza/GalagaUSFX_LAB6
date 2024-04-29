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
	VelocidadYTransporte = -400.0f;
}

void ANaveTerrestre_Transporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);
}

//void ANaveTerrestre_Transporte::Mover(float DeltaTime)
//{
//
//}
