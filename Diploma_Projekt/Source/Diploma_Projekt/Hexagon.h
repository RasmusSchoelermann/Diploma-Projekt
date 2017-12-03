// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "SearchNode.h"
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
	//AHexagon(double X, double Y, int I, int J);

protected:

	double Hexsize = 100;
	double Hexdistance = sqrt(pow(Hexsize, 2) - pow(Hexsize / 2, 2));
	//virtual void PostLoad() override;

	//virtual void PostActorCreated() override;

public:
	void CreateHexagon();
	
	void calculateVertices(double size_, double distance_);
	void calculateVerticesUV0(double size_, double distance_);

	void drawHexagon();
	void setij(int i_, int j_);
	void setNachbarn(AHexagon* grid[6]);
	void setCenter(FVector newcenter);

	AHexagon* Parent = nullptr;
	UPROPERTY(EditAnywhere)
		AHexagon* Nachbarn[6];

	UPROPERTY(EditAnywhere)
		int i;

	UPROPERTY(EditAnywhere)
		int j;

	UPROPERTY(EditAnywhere)
	FVector CenterPoint;

	UPROPERTY(EditAnywhere)
		bool avaible = true;

	UPROPERTY(EditAnywhere)
		int height = 0;

	UPROPERTY(EditAnywhere)
		int cost = 0;

	UPROPERTY(EditAnywhere)
		int Region;

	UFUNCTION(BlueprintCallable, Category = "HexData")
		void setaviable(bool Status);

	UFUNCTION(BlueprintCallable, Category = "HexData")
		bool getaviable();

	UFUNCTION(BlueprintCallable, Category = "HexData")
		int GetGridIndexi();

	UFUNCTION(BlueprintCallable, Category = "HexData")
		int GetGridIndexj();

	UFUNCTION(BlueprintCallable, Category = "HexData")
		TArray<FVector> GetPath(AHexagon* Start);
private:

	FVector Vertices[6];
	FVector2D VerticesUV0[6];

	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent * mesh;
	
	
};
