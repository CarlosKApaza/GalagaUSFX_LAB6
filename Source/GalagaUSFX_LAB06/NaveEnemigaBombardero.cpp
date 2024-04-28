// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBombardero.h"

void ANaveEnemigaBombardero::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaBombardero::ANaveEnemigaBombardero()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveEnemigaBombardero"; //Nombre de la nave
}

void ANaveEnemigaBombardero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
