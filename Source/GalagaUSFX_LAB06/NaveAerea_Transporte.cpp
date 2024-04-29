// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAerea_Transporte.h"

void ANaveAerea_Transporte::BeginPlay()
{
	Super::BeginPlay();
    //aca implementamos en un futuro un temporizador para controlar el tiempo de movimiento de la nave
}

ANaveAerea_Transporte::ANaveAerea_Transporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAerea_Transporte"; //Nombre de la nave
	VelocidadXTransporte = -400.0f;
}

void ANaveAerea_Transporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveAerea_Transporte::Mover(float DeltaTime)
{
    //Obtenemos la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Generamos nuevas coordenadas X e Y aleatorias
    float NuevaY = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionX = PosicionActual.X + (VelocidadXTransporte * DeltaTime);

    // Verificamos si la nave ha alcanzado el límite superior o inferior
    if (NuevaPosicionX <= -1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadXTransporte *= -1.0f;
    }
    else if (NuevaPosicionX >= 1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadXTransporte *= -1.0f;
    }
    // Establecemos la nueva posición del actor
    SetActorLocation(FVector(NuevaPosicionX, PosicionActual.Y + NuevaY, PosicionActual.Z));
}


