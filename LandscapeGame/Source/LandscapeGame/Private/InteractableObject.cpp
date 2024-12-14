// Fill out your copyright notice in the Description page of Project Settings.


#include "LandscapeGame/Public/InteractableObject.h"

#include "LandscapeGame/LandscapeGameCharacter.h"

// Sets default values
AInteractableObject::AInteractableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();

	LandscapeGameCharacter = Cast<ALandscapeGameCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	LandscapeGameCharacter->OnPowersAcquired.AddUObject(this, &AInteractableObject::Disappear);
	
}

void AInteractableObject::Disappear()
{
	Destroy();
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

