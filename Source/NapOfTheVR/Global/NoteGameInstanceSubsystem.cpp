//----------------------------------------------------------------------------------------------------
// NoteGameInstanceSubsystem.cpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#include "NapOfTheVR/Global/NoteGameInstanceSubsystem.h"

//----------------------------------------------------------------------------------------------------
void UNoteGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

//----------------------------------------------------------------------------------------------------
void UNoteGameInstanceSubsystem::Deinitialize()
{
	OnSpawnModelButtonClicked.Clear();
	Super::Deinitialize();
}

//----------------------------------------------------------------------------------------------------
void UNoteGameInstanceSubsystem::CallSpawnModelButtonClicked() const
{
	OnSpawnModelButtonClicked.Broadcast();
}
