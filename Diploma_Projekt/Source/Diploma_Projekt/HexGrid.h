// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexGrid.generated.h"

UCLASS()
class DIPLOMA_PROJEKT_API AHexGrid : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AHexGrid();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostActorCreated() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	double Hexsize = 100;
	double Hexdistance = 100;

	
	
};
