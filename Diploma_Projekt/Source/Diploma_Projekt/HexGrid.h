// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "math.h"
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

	//UPROPERTY(EditAnywhere)
	//bool HexSpawned = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostActorCreated() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	double Hexsize = 100;
	double Hexdistance = sqrt(pow(Hexsize,2)-pow(Hexsize/2,2));
	//double Hexdistance = 100;
	//double Hexsize = sqrt(pow(Hexsize, 2) - pow(Hexsize / 2, 2));

	
};
