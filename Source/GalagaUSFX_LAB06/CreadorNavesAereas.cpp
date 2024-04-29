// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorNavesAereas.h"

#include "NaveAerea_Transporte.h"
#include "NaveAerea_Caza.h"

ANaveEnemiga* ACreadorNavesAereas::CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
	if (NombreNaveSKU.Equals("NaveAerea_Caza")) {
		return GetWorld()->SpawnActor<ANaveAerea_Caza>(ANaveAerea_Caza::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}

	// Selecciona que nave crear dependiendo de la cadena pasada
	else if (NombreNaveSKU.Equals("NaveAerea_Transporte")) {
			return GetWorld()->SpawnActor<ANaveAerea_Transporte>(ANaveAerea_Transporte::StaticClass(),
				PosicionNave, FRotator::ZeroRotator);
		}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}