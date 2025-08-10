// Fill out your copyright notice in the Description page of Project Settings.


#include "NoteGameInstanceSubsystem.h"

void UNoteGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UNoteGameInstanceSubsystem::Deinitialize()
{
	OnSpawnModelButtonClicked.Clear();
	Super::Deinitialize();
}

// UNoteGameInstanceSubsystem* UNoteGameInstanceSubsystem::Get(const UObject* WorldContext)
// {
// 	if (!WorldContext)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("WorldContext is null in UGlobalEventSubsystem::Get"));
// 		return nullptr;
// 	}
//
// 	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
// 	if (!World)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("Failed to get World from WorldContext"));
// 		return nullptr;
// 	}
//
// 	UGameInstance* GameInstance = World->GetGameInstance();
// 	if (!GameInstance)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("GameInstance is null"));
// 		return nullptr;
// 	}
//
// 	return GameInstance->GetSubsystem<UNoteGameInstanceSubsystem>();
// }

void UNoteGameInstanceSubsystem::TriggerSpawnModelButtonClicked()
{
	OnSpawnModelButtonClicked.Broadcast();
}
