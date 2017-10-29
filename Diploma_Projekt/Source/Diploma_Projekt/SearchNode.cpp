// Fill out your copyright notice in the Description page of Project Settings.

#include "SearchNode.h"

SearchNode::SearchNode()
{
}

SearchNode::SearchNode(AHexagon * Waypoint_, AHexagon * Parent_, float Heuristiccost_)
{
	Waypoint = Waypoint_;
	Parent = Parent_;
	Heuristiccost = Heuristiccost_;
}

SearchNode::~SearchNode()
{
}

bool SearchNode::CheckContains(TArray<SearchNode> Array, AHexagon * WayPoint)
{
	for (int i = 0; i < Array.Num(); i++)
	{
		if (Array[i].Waypoint == WayPoint)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}
