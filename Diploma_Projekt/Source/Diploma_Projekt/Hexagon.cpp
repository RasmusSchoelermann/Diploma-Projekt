// Fill out your copyright notice in the Description page of Project Settings.

#include "Hexagon.h"
#include "math.h"
#include "SearchNode.h"

// Sets default values
AHexagon::AHexagon()
{
	/*
	CenterPoint.X = 0;
	CenterPoint.Y = 0;
	CenterPoint.Z = 0;
	*/

	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;
	

	/**
	*	Create/replace a section for this procedural mesh component.
	*	@param	SectionIndex		Index of the section to create or replace.
	*	@param	Vertices			Vertex buffer of all vertex positions to use for this mesh section.
	*	@param	Triangles			Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.
	*	@param	Normals				Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.
	*	@param	UV0					Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.
	*	@param	VertexColors		Optional array of colors for each vertex. If supplied, must be same length as Vertices array.
	*	@param	Tangents			Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.
	*	@param	bCreateCollision	Indicates whether collision should be created for this section. This adds significant cost.
	*/
	//UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh", meta = (AutoCreateRefTerm = "Normals,UV0,VertexColors,Tangents"))
	//	void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals,
	// const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);

	// New in UE 4.17, multi-threaded PhysX cooking.
	mesh->bUseAsyncCooking = true;


}

void AHexagon::calculateVertices(double size_, double distance_)
{
	Vertices[0].X = CenterPoint.X;
	Vertices[0].Y = CenterPoint.Y - size_;

	Vertices[1].X = CenterPoint.X + distance_;
	Vertices[1].Y = CenterPoint.Y - (size_ / 2);

	Vertices[2].X = CenterPoint.X + distance_;
	Vertices[2].Y = CenterPoint.Y + (size_ / 2);

	Vertices[3].X = CenterPoint.X;
	Vertices[3].Y = CenterPoint.Y + size_;

	Vertices[4].X = CenterPoint.X - distance_;
	Vertices[4].Y = CenterPoint.Y + (size_ / 2);

	Vertices[5].X = CenterPoint.X - distance_;
	Vertices[5].Y = CenterPoint.X - (size_ / 2);

	for (int i = 0; i < 6; i++)
	{
		Vertices[i].Z = CenterPoint.Z;
	}
}

void AHexagon::calculateVerticesUV0(double size_, double distance_)
{
	VerticesUV0[0].X = CenterPoint.X;
	VerticesUV0[0].Y = CenterPoint.Y - (size_ / 10);

	VerticesUV0[1].X = CenterPoint.X + (distance_ / 10);
	VerticesUV0[1].Y = CenterPoint.Y - ((size_ / 10) / 2);

	VerticesUV0[2].X = CenterPoint.X + (distance_ / 10);
	VerticesUV0[2].Y = CenterPoint.Y + ((size_ / 10) / 2);

	VerticesUV0[3].X = CenterPoint.X;
	VerticesUV0[3].Y = CenterPoint.Y + (size_ / 10);

	VerticesUV0[4].X = CenterPoint.X - (distance_ / 10);
	VerticesUV0[4].Y = CenterPoint.Y + ((size_ / 10) / 2);

	VerticesUV0[5].X = CenterPoint.X - (distance_ / 10);
	VerticesUV0[5].Y = CenterPoint.X - ((size_ / 10) / 2);

}


void AHexagon::drawHexagon()
{
	CreateHexagon();
}

void AHexagon::setij(int i_, int j_)
{
	i = i_;
	j = j_;

	UE_LOG(LogClass, Display, TEXT("Setted values I: %d J: %d"), i, j);
}

void AHexagon::setNachbarn(AHexagon * grid[6])
{
	Nachbarn[0] = grid[0];
	Nachbarn[1] = grid[1];
	Nachbarn[2] = grid[2];
	Nachbarn[3] = grid[3];
	Nachbarn[4] = grid[4];
	Nachbarn[5] = grid[5];
}

void AHexagon::setCenter(FVector newcenter)
{
	CenterPoint = newcenter;

	UE_LOG(LogClass, Display, TEXT("Set CenterX: %f"), newcenter.X);
	UE_LOG(LogClass, Display, TEXT("Set CenterY: %f"), newcenter.Y);
}

void AHexagon::setaviable(bool b)
{
	avaible = b;
}

bool AHexagon::getaviable()
{
	return avaible;
}

int AHexagon::GetGridIndexi()
{
	return i;
}

int AHexagon::GetGridIndexj()
{
	return j;
}

int AHexagon::GetCost()
{
	return cost;
}


TArray<FVector> AHexagon::GetPath(AHexagon* Start)
{
	

	TArray<SearchNode> OpenList;
	TArray<SearchNode> ClosedList;
	TArray<FVector> FinalPath;
	
	SearchNode root;
	root.Waypoint = Start;
	root.Parent = nullptr;
	Start->Parent = nullptr;
	root.Heuristiccost = CenterPoint.Distance(GetActorLocation(), root.Waypoint->GetActorLocation());
	UE_LOG(LogClass, Display, TEXT("Costs: %f"),root.Heuristiccost);
	UE_LOG(LogClass, Display, TEXT("Start CenterX: %f"), root.Waypoint->GetActorLocation().X);
	UE_LOG(LogClass, Display, TEXT("Goal CenterX: %f"), GetActorLocation().X);
	UE_LOG(LogClass, Display, TEXT("Start CenterY: %f"), root.Waypoint->GetActorLocation().Y);
	UE_LOG(LogClass, Display, TEXT("Goal CenterY: %f"), GetActorLocation().Y);
	OpenList.Add(root);
	
	while (OpenList.Num() > 0)
	{
		SearchNode currentNode = OpenList[0];

		if(currentNode.Waypoint->GetActorLocation() == GetActorLocation())
		{
			SearchNode checknode = currentNode;
			while (checknode.Waypoint->Parent != nullptr)
			{
				FinalPath.Insert(checknode.Waypoint->GetActorLocation(),0);
				checknode.Waypoint = checknode.Waypoint->Parent;
			}
			FinalPath.Insert(checknode.Waypoint->GetActorLocation(), 0);
			UE_LOG(LogClass, Display, TEXT("GOAL Return Final Path"));
			return FinalPath;
		}

		for (int i = 0; i < 6; i++)
		{
			if(currentNode.Waypoint->Nachbarn[i] == nullptr || currentNode.Waypoint->Nachbarn[i]->avaible == false || currentNode.Waypoint->Nachbarn[i]->height - currentNode.Waypoint->height > 1 || currentNode.Waypoint->Nachbarn[i]->height - currentNode.Waypoint->height < -1)
			{

			}
			else
			{
				SearchNode testNode;
				testNode.Heuristiccost = CenterPoint.Distance(GetActorLocation(), currentNode.Waypoint->Nachbarn[i]->GetActorLocation());
				testNode.Waypoint = currentNode.Waypoint->Nachbarn[i];
				if(OpenList.Contains(testNode) == true || ClosedList.Contains(testNode) == true) //currentNode.CheckContains(OpenList, currentNode.Waypoint->Nachbarn[i]) == false && currentNode.CheckContains(ClosedList, currentNode.Waypoint->Nachbarn[i]) == false
				{

				}
				else
				{
					// TODO
					float cost = CenterPoint.Distance(GetActorLocation(), currentNode.Waypoint->Nachbarn[i]->GetActorLocation());
					float test = OpenList[0].Heuristiccost;
					UE_LOG(LogClass, Display, TEXT("Costs: %f"), cost);
					UE_LOG(LogClass, Display, TEXT("Tests: %f"), test);
					
					if (cost < test && OpenList.Contains(testNode) == false && ClosedList.Contains(testNode) == false)
					{
						OpenList.Insert(SearchNode(currentNode.Waypoint->Nachbarn[i], currentNode.Waypoint, cost), 0);
						UE_LOG(LogClass, Display, TEXT("Insert"));
						currentNode.Waypoint->Nachbarn[i]->Parent = currentNode.Waypoint;
					}
					else if(OpenList.Contains(testNode) == false && ClosedList.Contains(testNode) == false)
					{
						int length = OpenList.Num();
						for (int ib = 0; ib <length; ib++)
						{
							if (cost < OpenList[ib].Heuristiccost && OpenList.Contains(testNode) == false && ClosedList.Contains(testNode) == false)
							{
								OpenList.Insert(SearchNode(currentNode.Waypoint->Nachbarn[i], currentNode.Waypoint, cost),ib);
								UE_LOG(LogClass, Display, TEXT("Sorted in Place"));
								currentNode.Waypoint->Nachbarn[i]->Parent = currentNode.Waypoint;
								break;
							}
							else if (ib == length - 1)
							{
								OpenList.Add(SearchNode(currentNode.Waypoint->Nachbarn[i], currentNode.Waypoint, cost));
								UE_LOG(LogClass, Display, TEXT("Sort to last"));
								currentNode.Waypoint->Nachbarn[i]->Parent = currentNode.Waypoint;
							}
							else {

							}
							
						}
						
					}
					else
					{

					}
				}
			}
		}
		
	
		ClosedList.Add(currentNode);
		int a = OpenList.RemoveSingle(currentNode);
		UE_LOG(LogClass, Display, TEXT("Removed %d"),a);
	}

	UE_LOG(LogClass, Display, TEXT("NO PATH"));
	return FinalPath;

	
}


void AHexagon::CreateHexagon()
{

	calculateVertices(Hexsize,Hexdistance);
	calculateVerticesUV0(Hexsize, Hexdistance);

	TArray<FVector> vertices;
	vertices.Add(CenterPoint);
	vertices.Add(Vertices[0]);
	vertices.Add(Vertices[1]);
	vertices.Add(Vertices[2]);
	vertices.Add(Vertices[3]);
	vertices.Add(Vertices[4]);
	vertices.Add(Vertices[5]);

	TArray<int32> Triangles;
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(0);
	Triangles.Add(2);
	Triangles.Add(3);
	Triangles.Add(0);
	Triangles.Add(3);
	Triangles.Add(4);
	Triangles.Add(0);
	Triangles.Add(4);
	Triangles.Add(5);
	Triangles.Add(0);
	Triangles.Add(5);
	Triangles.Add(6);
	Triangles.Add(0);
	Triangles.Add(6);
	Triangles.Add(1);



	TArray<FVector> normals;
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));


	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(VerticesUV0[0]));
	UV0.Add(FVector2D(VerticesUV0[1]));
	UV0.Add(FVector2D(VerticesUV0[2]));
	UV0.Add(FVector2D(VerticesUV0[3]));
	UV0.Add(FVector2D(VerticesUV0[4]));
	UV0.Add(FVector2D(VerticesUV0[5]));



	TArray<FProcMeshTangent> tangents;
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));

	TArray<FLinearColor> vertexColors;
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

	mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);

	// Enable collision data
	mesh->ContainsPhysicsTriMeshData(true);
}

