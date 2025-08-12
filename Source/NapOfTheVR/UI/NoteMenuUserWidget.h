//----------------------------------------------------------------------------------------------------
// NoteMenuUserWidget.h
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once

#include <CoreMinimal.h>
#include <Blueprint/UserWidget.h>
#include <NoteMenuUserWidget.generated.h>

//-Forward-Declaration--------------------------------------------------------------------------------
class UButton;

//----------------------------------------------------------------------------------------------------
UCLASS()
class NAPOFTHEVR_API UNoteMenuUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* ExitButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* ResetOrientationButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* RestartButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* SpawnModelButton;
};
