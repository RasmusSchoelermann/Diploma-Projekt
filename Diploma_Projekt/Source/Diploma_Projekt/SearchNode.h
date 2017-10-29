// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Hexagon.h"
#include "CoreMinimal.h"

/**
 * 
 */
class DIPLOMA_PROJEKT_API SearchNode
{
public:
	SearchNode();
	SearchNode(AHexagon* Waypoint_,AHexagon* Parent_,float Heuristiccost_);
	~SearchNode();

	AHexagon* Waypoint;
	AHexagon* Parent;
	float Heuristiccost;

	bool CheckContains(TArray<SearchNode> Array, AHexagon* WayPoint);
};
