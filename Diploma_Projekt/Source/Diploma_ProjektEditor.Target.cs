// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Diploma_ProjektEditorTarget : TargetRules
{
	public Diploma_ProjektEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Diploma_Projekt" } );
	}
}
