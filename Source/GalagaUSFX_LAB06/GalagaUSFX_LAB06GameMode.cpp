// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaUSFX_LAB06GameMode.h"
#include "GalagaUSFX_LAB06Pawn.h"

#include "CreadorNaves.h"
#include "CreadorNavesEnemigas.h"


#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBombardero.h"


#include "CreadorNavesAereas.h"
#include "CreadorNavesTerrestres.h"
#include "NaveAerea_Caza.h"
#include "NaveAerea_Transporte.h"


AGalagaUSFX_LAB06GameMode::AGalagaUSFX_LAB06GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaUSFX_LAB06Pawn::StaticClass();
}

void AGalagaUSFX_LAB06GameMode::BeginPlay()
{
	Super::BeginPlay();

	// LLamando a la fabrica de naves enemigas
	ACreadorNaves* CreadorNaves = GetWorld()->SpawnActor<ACreadorNavesEnemigas>(ACreadorNavesEnemigas::StaticClass());
	
	// LLamando a la fabrica de naves aereas 
	ACreadorNaves* CreadorNavesAereas = GetWorld()->SpawnActor<ACreadorNavesAereas>(ACreadorNavesAereas::StaticClass());

	// LLamando a la fabrica de naves terrestres
	//ACreadorNaves* CreadorNavesTerrestres = GetWorld()->SpawnActor<ACreadorNavesTerrestres>(ACreadorNavesTerrestres::StaticClass());

	// Definiendo las posiciones de las naves enemigas
	FVector	PosicionNaveInicial = FVector(-600.0f, 0.0f, 200.0f); // Posicion inicial de las naves enemigas

	int ClaveNaves = 0; // clave para las naves enemigas

	UWorld * World = GetWorld();
	if (World != nullptr) 
	{
		// spawneado las naves enemigas caza
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaCaza", PosicionNaveInicial);
			//NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TANavesEnemigas.Add(NaveEnemiga);
			//TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			PosicionNaveInicial.Y += 160.0f; // actualizo la creacion de la nave enemiga caza
		}
		// Actualizar la ubicación inicial para las naves de la clase bombardero
		PosicionNaveInicial.X = PosicionNaveInicial.X = -400.0f; // crear un fila por el medio
		PosicionNaveInicial.Y = PosicionNaveInicial.Y = 0.0f;

		for (int i =0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaBombardero", PosicionNaveInicial);
			TANavesEnemigas.Add(NaveEnemiga);
		/*	TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);*/
			PosicionNaveInicial.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
	
		}
		// Actualizar la ubicación inicial para las naves de la clase bombardero
		PosicionNaveInicial.X = PosicionNaveInicial.X = -200.0f; // crear un fila por el medio
		PosicionNaveInicial.Y = PosicionNaveInicial.Y = 0.0f; // actualizo la creacion de la nave enemiga bombardero

		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaEspia", PosicionNaveInicial);
			TANavesEnemigas.Add(NaveEnemiga);
			//TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
			PosicionNaveInicial.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
		}
		// Actualizar la ubicación inicial para las naves de la clase bombardero
		PosicionNaveInicial.X = PosicionNaveInicial.X = 0.0f; // crear un fila por el medio
		PosicionNaveInicial.Y = PosicionNaveInicial.Y = 0.0f; // actualizo la creacion de la nave enemiga bombardero


		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaTransporte", PosicionNaveInicial);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			//TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
			PosicionNaveInicial.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
		}

		// DESDE ACA SPAWNEAMOS LAS NAVES DE LAS FABRICAS DE NAVES AEREAS, TERRESTRES Y ACUATICAS


		// Actualizar la ubicación inicial para las naves de la clase NaveAerea_Caza

		PosicionNaveInicial.X = PosicionNaveInicial.X = -650.0f; // crear un fila por el medio
		PosicionNaveInicial.Y = PosicionNaveInicial.Y = -1200.0f; // actualizo la creacion de la nave enemiga bombardero
		PosicionNaveInicial.Z += 250.0f; // actualizo la creacion de la nave enemiga bombardero

		// Creamos 7 naves de la clase NaveAerea_Caza
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Caza", PosicionNaveInicial);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNaveInicial.X += 250.0f; // actualizo la creacion de la nave enemiga bombardero
		}

		// Actualizar la ubicación inicial para las naves de la clase NaveAerea_Transporte

		PosicionNaveInicial.X = PosicionNaveInicial.X = -650.0f; // crear un fila por el medio
		PosicionNaveInicial.Y = PosicionNaveInicial.Y = -1400.0f; // actualizo la creacion de la nave enemiga bombardero
		//PosicionNaveInicial.Z += -250.0f; // actualizo la creacion de la nave enemiga bombardero

		//ClaveNaves += 0; // 

		// Creamos 7 naves de la clase NaveAerea_Transporte
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Transporte", PosicionNaveInicial);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNaveInicial.X += 250.0f; // actualizo la creacion de la nave enemiga bombardero
		}

		GetWorldTimerManager().SetTimer(FTHMostrarClaves, this, &AGalagaUSFX_LAB06GameMode::MostrarClavesNaves, 2.0f, false);

	}
}

void AGalagaUSFX_LAB06GameMode::MostrarClavesNaves()
{
	for (auto& ElementoActual : TMAPocionesNavesEnemigas) {
		ANaveEnemiga* naveEnemigaActual = ElementoActual.Key;
		int claveNave = ElementoActual.Value;

		// Convertir el entero a FString para concatenarlo
		FString claveNaveStr = FString::FromInt(claveNave);

		// Crear el mensaje concatenando las partes necesarias
		FString mensaje = "La nave " + naveEnemigaActual->GetNombreNave() + " tiene la clave: " + claveNaveStr;

		if (GEngine)
		{
			// Usar un valor entero en lugar de flotante para el alfa
			GEngine->AddOnScreenDebugMessage(-1, 50.0f, FColor::Yellow, mensaje);
		}
	}	
}
void AGalagaUSFX_LAB06GameMode::OcultarClavesNaves()
{
	// Limpia los mensajes en pantalla
	GEngine->ClearOnScreenDebugMessages();
}




