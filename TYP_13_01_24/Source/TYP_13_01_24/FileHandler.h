#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h" // Include this header to use BlueprintFunctionLibrary
#include "FileHandler.generated.h" // Required for UCLASS and UFUNCTION macros

UCLASS()
class TYP_13_01_24_API UFileHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Expose this function to Blueprints
	UFUNCTION(BlueprintCallable, Category = "File Handling")
	static void WriteValues(const FString& Filename, const FString& Value1, const FString& Value2, const FString& Value3, bool Append = false);
};