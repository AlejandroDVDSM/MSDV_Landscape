// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

class ALandscapeGameCharacter;

UCLASS()
class LANDSCAPEGAME_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

protected:
	void EnablePortal();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	ALandscapeGameCharacter* LandscapeGameCharacter;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
};
