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
	ACreadorNaves* CreadorNavesTerrestres = GetWorld()->SpawnActor<ACreadorNavesTerrestres>(ACreadorNavesTerrestres::StaticClass());



	// Definiendo las posiciones de las naves enemigas
	FVector	PosicionNaveEnemigas = FVector(-600.0f, 0.0f, 200.0f); // Posicion inicial de las naves enemigas

	int ClaveNaves = 0; // clave para las naves enemigas



	UWorld * World = GetWorld();
	if (World != nullptr) 
	{
		// spawneado las naves enemigas caza
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaCaza", PosicionNaveEnemigas);
			//NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TANavesEnemigas.Add(NaveEnemiga);
			//TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			PosicionNaveEnemigas.Y += 160.0f; // actualizo la creacion de la nave enemiga caza
		}
		// Actualizar la ubicación inicial para las naves de la clase bombardero
		PosicionNaveEnemigas.X = PosicionNaveEnemigas.X = -400.0f; // crear un fila por el medio
		PosicionNaveEnemigas.Y = PosicionNaveEnemigas.Y = 0.0f;

		for (int i =0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaBombardero", PosicionNaveEnemigas);
			TANavesEnemigas.Add(NaveEnemiga);
		/*	TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);*/
			PosicionNaveEnemigas.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
	
		}
		// Actualizar la ubicación inicial para las naves de la clase bombardero
		PosicionNaveEnemigas.X = PosicionNaveEnemigas.X = -200.0f; // crear un fila por el medio
		PosicionNaveEnemigas.Y = PosicionNaveEnemigas.Y = 0.0f; // actualizo la creacion de la nave enemiga bombardero

		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaEspia", PosicionNaveEnemigas);
			TANavesEnemigas.Add(NaveEnemiga);
			//TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
			PosicionNaveEnemigas.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
		}
		// Actualizar la ubicación inicial para las naves de la clase bombardero
		PosicionNaveEnemigas.X = PosicionNaveEnemigas.X = 0.0f; // crear un fila por el medio
		PosicionNaveEnemigas.Y = PosicionNaveEnemigas.Y = 0.0f; // actualizo la creacion de la nave enemiga bombardero


		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaTransporte", PosicionNaveEnemigas);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			//TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
			PosicionNaveEnemigas.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
		}


		// DESDE ACA SPAWNEAMOS LAS NAVES DE LAS FABRICAS DE NAVES AEREAS, TERRESTRES Y ACUATICAS


		// Actualizar la ubicación inicial para las naves de la clase NaveAerea_Caza
		FVector	PosicionNavesAereas = FVector(-650.0f, -1200.0f, 450.0f);

		// Creamos 7 naves de la clase NaveAerea_Caza
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Caza", PosicionNavesAereas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesAereas.X += 250.0f; // actualizo la creacion de la nave enemiga bombardero
		}

		// Actualizar la ubicación inicial para las naves de la clase NaveAerea_Transporte

		PosicionNavesAereas.X = PosicionNavesAereas.X = -650.0f; 
		PosicionNavesAereas.Y = PosicionNavesAereas.Y = -1400.0f; // actualizo la creacion de la nave enemiga bombardero
		//PosicionNaveInicial.Z += -250.0f; // actualizo la creacion de la nave enemiga bombardero

		//ClaveNaves += 0; // 

		// Creamos 7 naves de la clase NaveAerea_Transporte
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Transporte", PosicionNavesAereas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesAereas.X += 250.0f; // actualizo la creacion de la nave enemiga bombardero
		}


	// Definiendo las posiciones de las naves enemigas
	FVector	PosicionNavesTerrestres = FVector(1700.0f, -650.0f, 200.0f); // Posicion inicial de las naves enemigas

		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* NaveEnemiga = CreadorNavesTerrestres->OrdenarNave("NaveTerrestre_Transporte", PosicionNavesTerrestres);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesTerrestres.Y += 160.0f; // actualizo la creacion de la nave enemiga bombardero
		}

		// Implementamos un temporizador que controla la visualización de las claves de las naves
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




