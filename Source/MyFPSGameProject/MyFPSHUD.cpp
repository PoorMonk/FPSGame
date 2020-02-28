// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFPSHUD.h"
#include "Engine/Canvas.h"

void AMyFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		// Find the center of our canvas
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

		FVector2D CrossHairDrawPosition(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5f));
		FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairTexture->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}
