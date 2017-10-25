// Fill out your copyright notice in the Description page of Project Settings.

#include "Hexagon.h"



// Sets default values
AHexagon::AHexagon()
{
	CenterPoint.X = 0;
	CenterPoint.Y = 0;
	CenterPoint.Z = 0;
	calculateVertices(100, 100);
	calculateVerticesUV0(100, 100);

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

int AHexagon::GetGridIndexi()
{
	return i;
}

int AHexagon::GetGridIndexj()
{
	return j;
}



void AHexagon::CreateHexagon()
{

	calculateVertices(100, 100);
	calculateVerticesUV0(100, 100);

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

