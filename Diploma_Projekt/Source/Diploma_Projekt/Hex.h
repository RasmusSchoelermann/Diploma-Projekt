// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class DIPLOMA_PROJEKT_API Hex
{
	FVector Vertices[6];

public:
	Hex();
	Hex(double X, double Y, int I, int J);
	~Hex();

	Hex* Nachbarn[6];

	void calculateVertices(double size_, double distance_);
	void setNachbarn(Hex* grid[6]);
	double getX();
	double getY();
	void setCenter(double x, double y);
	void drawHexagon();
	int i, j;

	FVector CenterPoint;
};
