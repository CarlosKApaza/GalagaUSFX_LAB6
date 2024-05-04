// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaUSFX_LAB06GameMode.h"
#include "GalagaUSFX_LAB06Pawn.h"

#include "CreadorNaves.h"
#include "CreadorNavesEnemigas.h"
#include "CreadorNavesAereas.h"
#include "CreadorNavesTerrestres.h"
#include "CreadorNavesAcuaticas.h"

#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBombardero.h"
#include "NaveEnemigaTransporte.h"


#include "NaveAerea_Caza.h"
#include "NaveAerea_Transporte.h"
#include "NaveAcuatica_Exploracion.h"
#include "NaveAcuatica_Espia.h"


AGalagaUSFX_LAB06GameMode::AGalagaUSFX_LAB06GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaUSFX_LAB06Pawn::StaticClass();
}

void AGalagaUSFX_LAB06GameMode::BeginPlay()
{
	Super::BeginPlay();

	//// LLamando a la fabrica de naves enemigas
	//ACreadorNaves* CreadorNaves = GetWorld()->SpawnActor<ACreadorNavesEnemigas>(ACreadorNavesEnemigas::StaticClass());
	
	// LLamando a la fabrica de naves aereas 
	ACreadorNaves* CreadorNavesAereas = GetWorld()->SpawnActor<ACreadorNavesAereas>(ACreadorNavesAereas::StaticClass());

	// LLamando a la fabrica de naves terrestres
	ACreadorNaves* CreadorNavesTerrestres = GetWorld()->SpawnActor<ACreadorNavesTerrestres>(ACreadorNavesTerrestres::StaticClass());

	// LLamando a la fabrica de naves acuaticas
	ACreadorNaves* CreadorNavesAcuaticas = GetWorld()->SpawnActor<ACreadorNavesAcuaticas>(ACreadorNavesAcuaticas::StaticClass());

	//// Definiendo las posiciones de las naves enemigas
	//FVector	PosicionNaveEnemigas = FVector(-600.0f, -650.0f, 200.0f); // Posicion inicial de las naves enemigas

	int ClaveNaves = 0; // clave para las naves enemigas



	UWorld * World = GetWorld();
	if (World != nullptr) 
	{
		//// Creamos 7 naves de la clase NaveEnemigaCaza
		//for (int i = 0; i < 5; i++)
		//{
		//	ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaCaza", PosicionNaveEnemigas);
		//	//NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
		//	TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
		//	//TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves);
		//	PosicionNaveEnemigas.Y += 200.0f; // sirve para que las naves esten separadas en el eje Y
		//}
		//// Actualizar la posicion para las naves de la clase caza
		//PosicionNaveEnemigas.X = PosicionNaveEnemigas.X = -400.0f; // actualizo la posicion en la posicion X
		//PosicionNaveEnemigas.Y = PosicionNaveEnemigas.Y = -650.0f; // actualizo la posicion en la posicion Y
		//
		//// Creamos 7 naves de la clase NaveEnemigaBombardero
		//for (int i =0; i < 5; i++)
		//{
		//	ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaBombardero", PosicionNaveEnemigas);
		//	TANavesEnemigas.Add(NaveEnemiga);
		////TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
		//	PosicionNaveEnemigas.Y += 200.0f; // sirve para que las naves esten separadas en el eje Y
	
		//}
		//// Actualizar la posicion para las naves de la clase bombardero
		//PosicionNaveEnemigas.X = PosicionNaveEnemigas.X = -200.0f; // actualizo la posicion en la posicion X
		//PosicionNaveEnemigas.Y = PosicionNaveEnemigas.Y = -650.0f;  // actualizo la posicion en la posicion Y

		//// Creamos 7 naves de la clase NaveEnemigaTransporte
		//for (int i = 0; i < 5; i++)
		//{
		//	ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaEspia", PosicionNaveEnemigas);
		//	TANavesEnemigas.Add(NaveEnemiga);
		//	//TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
		//	PosicionNaveEnemigas.Y += 200.0f; // sirve para que las naves esten separadas en el eje Y
		//}
		//// Actualizar la posicion para las naves de la clase espia
		//PosicionNaveEnemigas.X = PosicionNaveEnemigas.X = 0.0f;  // actualizo la posicion en la posicion X
		//PosicionNaveEnemigas.Y = PosicionNaveEnemigas.Y = -650.0f;  // actualizo la posicion en la posicion Y

		//// Creamos 7 naves de la clase NaveEnemigaTransporte
		//for (int i = 0; i < 5; i++)
		//{
		//	ANaveEnemiga* NaveEnemiga = CreadorNaves->OrdenarNave("NaveEnemigaTransporte", PosicionNaveEnemigas);
		//	TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
		//	//TAPocionesNavesEnemigas.Add(NaveEnemiga, PosicionNaveInicial);
		//	PosicionNaveEnemigas.Y += 200.0f; // sirve para que las naves esten separadas en el eje Y
		//}


		// DESDE ACA SPAWNEAMOS LAS NAVES DE LAS FABRICAS DE NAVES AEREAS, TERRESTRES Y ACUATICAS


		// Creamos una nueva Posicion para las naves tipo Aereas
		FVector	PosicionNavesAereas = FVector(-450.0f, -200.0f, 200.0f);

		// Creamos 7 naves de la clase NaveAerea_Caza
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves aereas para crear una nave de la clase NaveAerea_Caza
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Caza", PosicionNavesAereas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves aerea caza
			TANavesEnemigas.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas
			PosicionNavesAereas.Y += 200.0f; // Sirve para que las naves esten separadas en el eje X
		}

		// Actualizamos la posicion de las naves aereas caza para trabajar con las naves de la clase NaveAerea_Transporte

		PosicionNavesAereas.X = PosicionNavesAereas.X = -150.0f; // Actualizamos la posicion en el eje X
		PosicionNavesAereas.Y = PosicionNavesAereas.Y = -200.0f;  // Actualizamos la posicion en el eje Y

		// Creamos 7 naves de la clase NaveAerea_Transporte
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves aereas para crear una nave de la clase NaveAerea_Transporte
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Transporte", PosicionNavesAereas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves aerea transporte
			TANavesEnemigas.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas
			PosicionNavesAereas.Y += 200.0f; // Sirve para que las naves esten separadas en el eje X
		}


		// Definiendo nuevas posiciones de las Naves Terrestres
		FVector	PosicionNavesTerrestres = FVector(300.0f, -650.0f, 200.0f); // Posicion inicial de las Naves Terrestres

		// Creamos 7 naves de la clase NaveTerrestre_Transporte
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves terrestres para crear una nave de la clase NaveTerrestre_Transporte
			ANaveEnemiga* NaveEnemiga = CreadorNavesTerrestres->OrdenarNave("NaveTerrestre_Transporte", PosicionNavesTerrestres);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves terrestre transporte
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesTerrestres.Y += 250.0f; // sirve para que las naves esten separadas en el eje Y
		}

		// Actualizamos la posicion de las Naveterrestres_Transporte para trabajar con las naves de la clase NaveTerrestre_Artilleria
		PosicionNavesTerrestres.X = PosicionNavesTerrestres.X = 500.0f; // actualizo la posicion en la posicion X
		PosicionNavesTerrestres.Y = PosicionNavesTerrestres.Y = -650.0f; // actualizo la posicion en la posicion Y

		// Creamos 7 naves de la clase NaveTerrestre_Artilleria
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves terrestres para crear una nave de la clase NaveTerrestre_Artilleria
			ANaveEnemiga* NaveEnemiga = CreadorNavesTerrestres->OrdenarNave("NaveTerrestre_Artilleria", PosicionNavesTerrestres);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves terrestre artilleria
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesTerrestres.Y += 250.0f; // sirve para que las naves esten separadas en el eje Y
		}

		// Definiendo nuevas posiciones de las Naves Acuaticas
		FVector	PosicionNavesAcuaticas = FVector(900.0f, -700.0f, 180.0f); // Posicion inicial de las Naves Acuaticas

		// Creamos 7 naves de la clase NaveAcuatica_Exploracion
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves acuaticas para crear una nave de la clase NaveAcuatica_Exploracion
			ANaveEnemiga* NaveEnemiga = CreadorNavesAcuaticas->OrdenarNave("NaveAcuatica_Exploracion", PosicionNavesAcuaticas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves acuatica exploracion
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesAcuaticas.Y += 250.0f; // sirve para que las naves esten separadas en el eje X
		}

		// Actualizamos la posicion de las Naves Acuaticas_Exploracion para trabajar con las naves de la clase NaveAcuatica_Espia
		PosicionNavesAcuaticas.X = PosicionNavesAcuaticas.X = 1200.0f; // actualizo la posicion en la posicion X
		PosicionNavesAcuaticas.Y = PosicionNavesAcuaticas.Y = -700.0f; // actualizo la posicion en la posicion Y

		// Creamos 7 naves de la clase NaveAcuatica_Espia
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves acuaticas para crear una nave de la clase NaveAcuatica_Espia
			ANaveEnemiga* NaveEnemiga = CreadorNavesAcuaticas->OrdenarNave("NaveAcuatica_Espia", PosicionNavesAcuaticas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMAPocionesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves acuatica espia
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesAcuaticas.Y += 250.0f; // sirve para que las naves esten separadas en el eje X
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




