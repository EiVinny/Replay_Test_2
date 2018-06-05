// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Replay_Test_2HUD.generated.h"

UCLASS()
class AReplay_Test_2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AReplay_Test_2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

