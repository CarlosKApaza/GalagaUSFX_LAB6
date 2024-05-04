// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAerea_Caza.h"

void ANaveAerea_Caza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveAerea_Caza::ANaveAerea_Caza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAerea_Caza"; //Nombre de la nave

	// Definimos la velocidad en la que se movera la nave en el eje X porque esta creada de forma vertical
	VelocidadYCaza = -250.0f;

    //VIDA DE LA NAVE 
    energia = 50; // Inicializar la energia que tendra la nave
	resistencia = 30; // Inicializar la resistencia que tendra la nave

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
    float NuevaX = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionY = PosicionActual.Y + (VelocidadYCaza * DeltaTime);

    // Verificamos si la nave ha alcanzado el límite superior o inferior
    if (NuevaPosicionY <= -1950.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadYCaza *= -1.0f;
    }
    else if (NuevaPosicionY >= 1950.0f)
    {
        // Restablecemos la velocidad a su valor original
		VelocidadYCaza *= -1.0f;
		//VelocidadYCaza = 250.0f;
        //VelocidadYCaza = FMath::Abs(VelocidadYCaza);
    }
    // Establecemos la nueva posición del actor
    SetActorLocation(FVector(PosicionActual.X + NuevaX, NuevaPosicionY, PosicionActual.Z));
}

void ANaveAerea_Caza::RecibirDanio(float dano)
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

//void ANaveEnemigaCaza::RecibirDanio(float Cantidad)
//{
//	resistencia -= Cantidad;
//
//	if (resistencia <= 0)
//	{
//
//		energia -= Cantidad;    // Reducir la energía según la cantidad de daño recibido
//	}
//	if (energia <= 0)        // Verificar si la energía llega a cero o menos
//	{
//		Destroy();       // La nave ha sido destruida
//	}
//}