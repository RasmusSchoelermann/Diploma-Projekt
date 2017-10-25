// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Diploma_ProjektTarget : TargetRules
{
	public Diploma_ProjektTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Diploma_Projekt" } );
	}
}
