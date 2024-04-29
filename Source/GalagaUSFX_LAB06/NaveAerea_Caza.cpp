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

	// Definimos la velocidad en la que se movera la nave en el eje X porque esta creada de forma vertical
	VelocidadXCaza = -400.0f;

}

void ANaveAerea_Caza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Mover(DeltaTime);
}

void ANaveAerea_Caza::Mover(float DeltaTime)
{
    //Obtenemos la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Generamos nuevas coordenadas X e Y aleatorias
    float NuevaY = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionX = PosicionActual.X + (VelocidadXCaza * DeltaTime);

    // Verificamos si la nave ha alcanzado el límite superior o inferior
    if (NuevaPosicionX <= -1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadXCaza *= -1.0f;
    }
    else if (NuevaPosicionX >= 1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadXCaza *= -1.0f;
    }
    // Establecemos la nueva posición del actor
    SetActorLocation(FVector(NuevaPosicionX, PosicionActual.Y + NuevaY, PosicionActual.Z));
}
