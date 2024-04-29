// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestre_Artilleria.h"

void ANaveTerrestre_Artilleria::BeginPlay()
{
	Super::BeginPlay();

}

ANaveTerrestre_Artilleria::ANaveTerrestre_Artilleria()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveTerrestre_Artilleria"; //Nombre de la nave
	VelocidadYArtilleria = -400.0f;
}

void ANaveTerrestre_Artilleria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
