// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAcuatica_Exploracion.h"

void ANaveAcuatica_Exploracion::BeginPlay()
{
	Super::BeginPlay();

}

ANaveAcuatica_Exploracion::ANaveAcuatica_Exploracion()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAcuatica_Exploracion"; //Nombre de la nave
	VelocidadYExploracion = -200.0f;
}

void ANaveAcuatica_Exploracion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*Mover(DeltaTime);*/
}
