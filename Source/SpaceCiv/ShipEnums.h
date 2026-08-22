#pragma once

#include "CoreMinimal.h"
#include "ShipEnums.generated.h"

UENUM(BlueprintType)
enum class EShipTypes : uint8
{
	SeaD	UMETA(DisplayName = "S.E.A.D"),
	LandingCraft	UMETA(DisplayName = "Landing Craft"),
	IndustrialShip	UMETA(DisplayName = "Industrial Ship"),
	TransportShip	UMETA(DisplayName = "Transport Ship"),
};

UENUM(BlueprintType)
enum class EFuelConsumption : uint8
{
	Low		UMETA(DisplayName = "Low"),
	Medium	UMETA(DisplayName = "Medium"),
	High		UMETA(DisplayName = "High")
};