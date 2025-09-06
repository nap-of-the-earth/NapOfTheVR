# Global C++ Module

[Root Directory](../../../CLAUDE.md) > [Source](../../) > [NapOfTheVR](../) > **Global**

## Module Responsibilities
The Global module manages core game systems, global state, and provides foundation services for the VR application. It implements the primary game framework classes and subsystems that coordinate overall application behavior.

## Entry and Startup
- **Primary Classes**: `UNoteGameInstance`, `ANoteGameMode`, `UNoteGameInstanceSubsystem`
- **Startup Flow**: Game Instance → Subsystem Initialization → Game Mode Setup
- **Module Dependencies**: Core, CoreUObject, Engine

## External Interfaces

### Game Instance System
- `UNoteGameInstance`: Basic game instance class (currently minimal)
- Blueprint Integration: `GI_NoteGameInstance` blueprint derived class

### Game Mode
- `ANoteGameMode`: Multiplayer-ready game mode base class
- Purpose: Future multiplayer feature support
- Blueprint Integration: `VRGameMode` blueprint derived class

### Global Event Subsystem
- `UNoteGameInstanceSubsystem`: Event coordination system
- **Key Events**:
  - `FOnSpawnModelButtonClicked`: Global model spawning event
  - `CallSpawnModelButtonClicked()`: Blueprint-callable trigger

## Key Dependencies and Configuration
- **Build Dependencies**: Core UE5 modules (Core, CoreUObject, Engine)
- **Integration Pattern**: C++ base classes with Blueprint implementations
- **Event System**: Multicast delegates for global communication

## Data Models

### Event Delegates
```cpp
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnModelButtonClicked);
```

### Class Hierarchy
```
UGameInstance
└── UNoteGameInstance (C++)
    └── GI_NoteGameInstance (Blueprint)

AGameMode  
└── ANoteGameMode (C++)
    └── VRGameMode (Blueprint)

UGameInstanceSubsystem
└── UNoteGameInstanceSubsystem (C++)
```

## Testing and Quality
- **Current State**: Basic structure in place
- **Testing Needs**: 
  - Subsystem initialization testing
  - Event system validation
  - Blueprint integration verification
- **Quality Considerations**: Minimal implementation allows for future expansion

## FAQ

### Why separate Game Instance and Game Mode?
The separation allows for different multiplayer scenarios while maintaining persistent game state. The Game Instance persists across level changes, while Game Mode is level-specific.

### How does the event subsystem work?
The subsystem uses Unreal's delegate system to broadcast global events. Blueprint classes can bind to these events for cross-system communication without tight coupling.

### Future multiplayer support?
Yes, the architecture is designed with multiplayer in mind. The Game Mode class includes a comment indicating this future direction.

## Related File List
```
Source/NapOfTheVR/Global/
├── NoteGameInstance.h          # Basic game instance header
├── NoteGameInstance.cpp        # Game instance implementation  
├── NoteGameMode.h             # Game mode header
├── NoteGameMode.cpp           # Game mode implementation
├── NoteGameInstanceSubsystem.h # Subsystem header
└── NoteGameInstanceSubsystem.cpp # Subsystem implementation

Content/VRTemplate/Blueprints/Global/
├── GI_NoteGameInstance.uasset  # Blueprint game instance
└── VRGameMode.uasset          # Blueprint game mode
```

## Changelog

### 2025-09-06 (Initial Documentation)
- Documented existing Global C++ module structure
- Identified key classes and their responsibilities  
- Documented event system architecture
- Established testing and quality guidelines