#include "FileHandler.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

void UFileHandler::WriteValues(const FString& Filename, const FString& Value1, const FString& Value2, const FString& Value3, bool Append)
{
	// Build the CSV line
	FString CsvLine = Value1 + TEXT(",") + Value2 + TEXT(",") + Value3 + TEXT("\n");

	// Determine the file write mode
	uint32 FileFlags = Append ? FILEWRITE_Append : FILEWRITE_None;

	// Write to the file
	FFileHelper::SaveStringToFile(CsvLine, *Filename, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FileFlags);
}