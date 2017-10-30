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

		if (Array[i].Waypoint->GetActorLocation() == WayPoint->GetActorLocation())
		{
			return true;
		}
		else
		{
			
		}
	}

	return false;
}

bool SearchNode::operator==(const SearchNode b) const
{
	if (this->Heuristiccost == b.Heuristiccost && this->Waypoint == b.Waypoint)
	{
		return true;
	}
	else {
		return false;
	}
}
