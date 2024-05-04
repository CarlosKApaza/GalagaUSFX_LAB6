// Copyright Epic Games, Inc. All Rights Reserve

#include "GalagaUSFX_LAB06Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveAerea_Caza.h"
#include "NaveAerea_Transporte.h"

AGalagaUSFX_LAB06Projectile::AGalagaUSFX_LAB06Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalagaUSFX_LAB06Projectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AGalagaUSFX_LAB06Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();

	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		ANaveAerea_Caza* NaveAereaCaza = Cast<ANaveAerea_Caza>(OtherActor);
		if (NaveAereaCaza)
		{

			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveAereaCaza->RecibirDanio(Cantidad);

			// Eliminar la bala
			if (GetOwner() != NULL)
			{
				GetOwner()->Destroy();
			}

			//// Eliminar la nave enemiga
			//NaveAereaCaza->Destroy();
		}
		ANaveAerea_Transporte* NaveAereaTransporte = Cast<ANaveAerea_Transporte>(OtherActor);
		if (NaveAereaTransporte)
		{

			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveAereaTransporte->RecibirDanio(Cantidad);

			// Eliminar la bala
			if (GetOwner() != NULL)
			{
				GetOwner()->Destroy();
			}

			//// Eliminar la nave enemiga
			//NaveAereaTransporte->Destroy();
		}
	}

}

