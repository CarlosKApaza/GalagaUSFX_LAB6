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
	VelocidadYTransporte = -250.0f;

	//Vida de la Nave Transporte
	energia = 10; // Inicializar la energia que tendra la nave
	resistencia = 30; // Inicializar la resistencia que tendra la nave
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
    float NuevaX = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionY = PosicionActual.Y + (VelocidadYTransporte * DeltaTime);

    // Verificamos si la nave ha alcanzado el límite superior o inferior
    if (NuevaPosicionY <= -1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadYTransporte *= -1.0f;
    }
    else if (NuevaPosicionY >= 1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadYTransporte *= -1.0f;
    }
    // Establecemos la nueva posición del actor
    SetActorLocation(FVector(PosicionActual.X + NuevaX, NuevaPosicionY, PosicionActual.Z));
}

void ANaveAerea_Transporte::RecibirDanio(float dano)
{
    // Restamos la energia de la nave
    energia -= dano;

    // Verificamos si la nave ha sido destruida
    if (energia <= 0)
    {
        // Destruimos la nave
        Destroy();
    }
}
