#pragma once


#include "CoreMinimal.h"
#include "ResourceStructs.generated.h"


USTRUCT(BlueprintType)
struct FResourceData : public FTableRowBase
{
	GENERATED_BODY()
	
	public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* Texture;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Name;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Description;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Amount;
};
