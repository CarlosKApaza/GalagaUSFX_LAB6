// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAerea_Caza.h"

void ANaveAerea_Caza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveAerea_Caza::ANaveAerea_Caza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAerea_Caza"; //Nombre de la nave

}

void ANaveAerea_Caza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
