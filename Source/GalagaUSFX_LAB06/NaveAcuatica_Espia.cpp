// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAcuatica_Espia.h"

void ANaveAcuatica_Espia::BeginPlay()
{
	Super::BeginPlay();
}

ANaveAcuatica_Espia::ANaveAcuatica_Espia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAcuatica_Espia"; //Nombre de la nave
	VelocidadYEspia = -200.0f;
}

void ANaveAcuatica_Espia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*Mover(DeltaTime);*/
}
