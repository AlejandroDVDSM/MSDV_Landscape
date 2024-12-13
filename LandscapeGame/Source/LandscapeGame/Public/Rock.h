// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rock.generated.h"

class ALandscapeGameCharacter;

UCLASS()
class LANDSCAPEGAME_API ARock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARock();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void TurnVisible();

private:
	ALandscapeGameCharacter* LandscapeGameCharacter;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
