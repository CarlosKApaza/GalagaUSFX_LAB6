// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorNavesEnemigas.h"


#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBombardero.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaTransporte.h"

ANaveEnemiga* ACreadorNavesEnemigas::CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
	if (NombreNaveSKU.Equals("NaveEnemigaCaza")) {
		return GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else if (NombreNaveSKU.Equals("NaveEnemigaBombardero")) {
		return GetWorld()->SpawnActor<ANaveEnemigaBombardero>(ANaveEnemigaBombardero::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else if (NombreNaveSKU.Equals("NaveEnemigaEspia")) {
		return GetWorld()->SpawnActor<ANaveEnemigaEspia>(ANaveEnemigaEspia::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else if (NombreNaveSKU.Equals("NaveEnemigaTransporte")) {
		return GetWorld()->SpawnActor<ANaveEnemigaTransporte>(ANaveEnemigaTransporte::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}
