// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorNavesAcuaticas.h"

#include "NaveAcuatica_Exploracion.h"
#include "NaveAcuatica_Espia.h"

ANaveEnemiga* ACreadorNavesAcuaticas::CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
	if (NombreNaveSKU.Equals("NaveAcuatica_Exploracion")) {
		return GetWorld()->SpawnActor<ANaveAcuatica_Exploracion>(ANaveAcuatica_Exploracion::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else if (NombreNaveSKU.Equals("NaveAcuatica_Espia")) {
		return GetWorld()->SpawnActor<ANaveAcuatica_Espia>(ANaveAcuatica_Espia::StaticClass(),
			PosicionNave, FRotator::ZeroRotator);
	}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}
