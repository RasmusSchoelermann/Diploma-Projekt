// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProceduralMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hexagon.generated.h"

UCLASS()
class DIPLOMA_PROJEKT_API AHexagon : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AHexagon();
	AHexagon(double X, double Y, int I, int J);

protected:

	//virtual void PostLoad() override;

	//virtual void PostActorCreated() override;

public:
	void CreateHexagon();
	FVector CenterPoint;
	void calculateVertices(double size_, double distance_);
	void calculateVerticesUV0(double size_, double distance_);

	void drawHexagon();
	void setij(int i_, int j_);
	void setNachbarn(AHexagon* grid[6]);

	UPROPERTY(EditAnywhere)
		AHexagon* Nachbarn[6];

	UPROPERTY(EditAnywhere)
		int i;

	UPROPERTY(EditAnywhere)
		int j;


	UFUNCTION(BlueprintCallable, Category = "HexData")
		int GetGridIndexi();

	UFUNCTION(BlueprintCallable, Category = "HexData")
		int GetGridIndexj();

private:

	FVector Vertices[6];
	FVector2D VerticesUV0[6];

	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent * mesh;
	
	
};
