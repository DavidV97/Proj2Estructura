// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "EstrPr2HUD.generated.h"

UCLASS()
class AEstrPr2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AEstrPr2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

