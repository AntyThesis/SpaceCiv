#pragma once

#include "CoreMinimal.h"
#include "ShipEnums.h"
#include "ShipStructs.generated.h"

USTRUCT(BlueprintType)
struct FShipData : public FTableRowBase
{
	GENERATED_BODY()

public:
	

	// Properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EShipTypes ShipTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ShipSprite;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CargoSpace;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFuelConsumption FuelConsumption;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;
};