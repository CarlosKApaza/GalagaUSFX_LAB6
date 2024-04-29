// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorNavesTerrestres.h"

#include "NaveTerrestre_Transporte.h"

ANaveEnemiga* ACreadorNavesTerrestres::CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
	if (NombreNaveSKU.Equals("NaveTerrestre_Transporte")) {
		return GetWorld()->SpawnActor<ANaveTerrestre_Transporte>(ANaveTerrestre_Transporte::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}

