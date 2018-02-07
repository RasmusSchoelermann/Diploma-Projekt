// Fill out your copyright notice in the Description page of Project Settings.

#include "HexGrid.h"
#include "Hex.h"
#include "Hexagon.h"
#include "Engine/World.h"


bool HexSpawned = false;
const int gridMaxI = 9;
const int gridMaxJ = 9;

// Sets default values
AHexGrid::AHexGrid()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	UE_LOG(LogTemp, Display, TEXT("Did compile HexGrid"));

}

// Called when the game starts or when spawned
void AHexGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHexGrid::PostActorCreated()
{
	Super::PostActorCreated();

	if (HexSpawned == false)
	{

		UE_LOG(LogTemp, Display, TEXT("DID PostCreate"));


		Hex grid[gridMaxI][gridMaxJ];
		AHexagon* AHexagongrid[gridMaxI][gridMaxJ];
		grid[0][0] = Hex(0, 0, 0, 0);

		for (int i = 0; i < gridMaxI; i++)
			for (int j = 0; j < gridMaxJ; j++)
			{
				grid[i][j].setCenter((grid[0][0].getX() + (i % 2) * Hexdistance + (j * 2 * Hexdistance)), (grid[0][0].getY() + (i * ((3 * Hexsize) / 2))));

				FVector Location(grid[i][j].CenterPoint);
				UE_LOG(LogClass, Display, TEXT("Spawned Hexagon at X: %f"), Location.X);
				UE_LOG(LogClass, Display, TEXT("Spawned Hexagon at Y: %f"), Location.Y);

				FRotator Rotation(0.0f, 0.0f, 0.0f);
				FActorSpawnParameters SpawnInfo;
				AHexagongrid[i][j] = GetWorld()->SpawnActor<AHexagon>(Location, Rotation, SpawnInfo);
				UE_LOG(LogClass, Display, TEXT("Spawned Hexagon I: %d J: %d"), i, j);
				AHexagongrid[i][j]->setij(i, j);
				AHexagongrid[i][j]->drawHexagon();
			}

		AHexagon* tempnachbarn[6];

		for (int i = 0; i< gridMaxI; i++)
			for (int j = 0; j< gridMaxJ; j++)
			{
				if (i % 2 == 0)
				{
					if (i - 1 >= 0 && i - 1 < gridMaxI && j - 1 >= 0 && j - 1 < gridMaxJ)
					{
						tempnachbarn[0] = AHexagongrid[i - 1][j - 1];
					}
					else
					{
						tempnachbarn[0] = nullptr;
					}

					if (i - 1 >= 0 && i - 1 < gridMaxI)
					{
						tempnachbarn[1] = AHexagongrid[i - 1][j];
					}
					else
					{
						tempnachbarn[1] = nullptr;
					}

					if (i + 1 >= 0 && i + 1 < gridMaxI)
					{
						tempnachbarn[3] = AHexagongrid[i + 1][j];
					}
					else
					{
						tempnachbarn[3] = nullptr;
					}

					if (i + 1 >= 0 && i + 1 < gridMaxI && j - 1 >= 0 && j - 1 < gridMaxJ)
					{
						tempnachbarn[4] = AHexagongrid[i + 1][j - 1];
					}
					else
					{
						tempnachbarn[4] = nullptr;
					}

				}
				else
				{
					if (i - 1 >= 0 && i - 1 < gridMaxI)
					{
						tempnachbarn[0] = AHexagongrid[i - 1][j];
					}
					else
					{
						tempnachbarn[0] = nullptr;
					}

					if (i - 1 >= 0 && i - 1 < gridMaxI && j + 1 >= 0 && j + 1 < gridMaxJ)
					{
						tempnachbarn[1] = AHexagongrid[i - 1][j + 1];
					}
					else
					{
						tempnachbarn[1] = nullptr;
					}

					if (i + 1 >= 0 && i + 1 < gridMaxI && j + 1 >= 0 && j + 1 < gridMaxJ)
					{
						tempnachbarn[3] = AHexagongrid[i + 1][j + 1];
					}
					else
					{
						tempnachbarn[3] = nullptr;
					}

					if (i + 1 >= 0 && i + 1 < gridMaxI)
					{
						tempnachbarn[4] = AHexagongrid[i + 1][j];
					}
					else
					{
						tempnachbarn[4] = nullptr;
					}
				}

				if (j + 1 >= 0 && j + 1 < gridMaxJ)
				{
					tempnachbarn[2] = AHexagongrid[i][j + 1];
				}
				else
				{
					tempnachbarn[2] = nullptr;
				}

				if (j - 1 >= 0 && j - 1 < gridMaxJ)
				{
					tempnachbarn[5] = AHexagongrid[i][j - 1];
				}
				else
				{
					tempnachbarn[5] = nullptr;
				}



				AHexagongrid[i][j]->setNachbarn(tempnachbarn);
			}

		HexSpawned = true;
	}
}



// Called every frame
void AHexGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

