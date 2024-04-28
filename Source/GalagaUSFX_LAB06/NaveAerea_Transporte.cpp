// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAerea_Transporte.h"

void ANaveAerea_Transporte::BeginPlay()
{
	Super::BeginPlay();
}

ANaveAerea_Transporte::ANaveAerea_Transporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAerea_Transporte"; //Nombre de la nave
}

void ANaveAerea_Transporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
