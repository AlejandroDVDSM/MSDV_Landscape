// Fill out your copyright notice in the Description page of Project Settings.


#include "Rock.h"

#include "LandscapeGame/LandscapeGameCharacter.h"

// Sets default values
ARock::ARock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;
}


// Called when the game starts or when spawned
void ARock::BeginPlay()
{
	Super::BeginPlay();

	// Hide the static mesh
	if (StaticMeshComponent)
	{
		StaticMeshComponent->SetVisibility(false);  // Hide the mesh
		StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);  // Disable collision
	}
	
	LandscapeGameCharacter = Cast<ALandscapeGameCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	LandscapeGameCharacter->OnPowersAcquired.AddUObject(this, &ARock::TurnVisible);
	
}

void ARock::TurnVisible()
{
	// Hide the static mesh
	if (StaticMeshComponent)
	{
		StaticMeshComponent->SetVisibility(true);
		SetActorHiddenInGame(false);  // Ensure the actor itself is not hidden
		StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);  // Enable collision
	}
}

// Called every frame
void ARock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

