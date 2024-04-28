// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveEnemigaCaza"; //Nombre de la nave
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Atakar();
}

void ANaveEnemigaCaza::Construir()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Construyendo %s"), *GetNombreNave()));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Construyendo la nave caza..."));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Colocando materiales... "));
}

void ANaveEnemigaCaza::ActivarSistemas()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Activando sistemas de la nave caza..."));
}
