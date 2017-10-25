// Fill out your copyright notice in the Description page of Project Settings.

#include "Hex.h"

Hex::Hex()
{
	CenterPoint.X = 0;
	CenterPoint.Y = 0;
	CenterPoint.Z = 0;
}

Hex::Hex(double X, double Y, int I, int J)
{
	CenterPoint.X = X;
	CenterPoint.Y = Y;
	CenterPoint.Z = 0;
	i = I;
	j = J;
}

Hex::~Hex()
{
}

void Hex::calculateVertices(double size_, double distance_)
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

void Hex::setNachbarn(Hex * grid[6])
{
	Nachbarn[0] = grid[0];
	Nachbarn[1] = grid[1];
	Nachbarn[2] = grid[2];
	Nachbarn[3] = grid[3];
	Nachbarn[4] = grid[4];
	Nachbarn[5] = grid[5];
}



double Hex::getX()
{
	return CenterPoint.X;
}

double Hex::getY()
{
	return CenterPoint.Y;
}

void Hex::setCenter(double x, double y)
{
	CenterPoint.X = x;
	CenterPoint.Y = y;
}

void Hex::drawHexagon()
{
	UE_LOG(LogTemp, Display, TEXT("Your message"));

}

