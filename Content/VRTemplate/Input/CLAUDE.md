# Input System Module

[Root Directory](../../../CLAUDE.md) > [Content](../../) > [VRTemplate](../) > **Input**

## Module Responsibilities
The Input module manages VR-specific input mappings, actions, and controller configurations. It provides comprehensive VR input handling for hand tracking, controller interactions, and gesture recognition across multiple VR platforms.

## Entry and Startup
- **Input Mapping Contexts**: `IMC_Default`, `IMC_Weapon_Left`, `IMC_Weapon_Right`
- **Platform Support**: OpenXR compatible (Quest 2/Pro/3, PC VR)
- **Integration**: Enhanced Input system with VR-specific actions

## External Interfaces

### Core Input Actions
#### Hand Interaction
- `IA_Grab_Left_Pressed/Released`: Left hand grab mechanics
- `IA_Grab_Right_Pressed/Released`: Right hand grab mechanics
- `IA_Menu_Interact_Left/Right_Pressed/Released`: Menu interaction

#### Navigation and Movement
- `IA_Move`: Locomotion input
- `IA_Turn`: Snap/smooth turning
- `IA_Menu_Cursor_Left/Right`: Menu cursor control

#### Weapon System
- `IA_Shoot_Left/Right`: Weapon firing actions
- Weapon-specific input contexts for different hand configurations

#### VR Interface
- `IA_Menu_Toggle_Left/Right`: Menu activation/deactivation

### Hand Tracking Actions
Located in `Actions/Hands/` subfolder:
- `IA_Hand_Grasp_Left/Right`: Hand tracking grasp recognition
- `IA_Hand_Point_Left/Right`: Pointing gesture detection
- `IA_Hand_IndexCurl_Left/Right`: Index finger curl tracking
- `IA_Hand_ThumbUp_Left/Right`: Thumb up gesture recognition

## Key Dependencies and Configuration

### Input Mapping Architecture
- **Enhanced Input System**: UE5's modern input handling
- **Context Switching**: Different input contexts for different interaction modes
- **Multi-Platform**: OpenXR compatibility across VR platforms

### VR-Specific Features
- **Hand Tracking**: Advanced gesture recognition
- **Controller Haptics**: Integrated with haptic feedback system
- **3D Widget Interaction**: Specialized input for VR UI elements

## Data Models

### Input Context Hierarchy
```
IMC_Default (Base VR Interactions)
├── Movement and Navigation
├── Basic Grab Actions
├── Menu Interactions
└── Hand Tracking Gestures

IMC_Weapon_Left/Right (Weapon Contexts)
├── Weapon-specific controls
├── Firing actions
└── Weapon switching
```

### Action Categories
1. **Core VR Actions**: Grab, release, menu interactions
2. **Locomotion**: Movement, turning, teleportation
3. **Hand Tracking**: Gesture recognition and finger tracking
4. **Weapon System**: Combat-related inputs
5. **UI Interaction**: Menu and widget manipulation

## Testing and Quality

### Input Testing Strategies
- **Cross-Platform Testing**: Verify actions work across different VR headsets
- **Hand Tracking Validation**: Test gesture recognition accuracy
- **Controller Mapping**: Validate proper button/trigger assignments
- **Haptic Feedback**: Test haptic responses for different actions

### Quality Considerations
- **Response Time**: Critical for VR immersion and comfort
- **Accuracy**: Precise tracking for natural interactions
- **Comfort**: Ergonomic input patterns to prevent fatigue
- **Accessibility**: Support for different hand sizes and capabilities

## FAQ

### How does hand tracking integration work?
The system provides both controller-based and hand tracking inputs, allowing seamless switching between interaction methods based on user preference and hardware capabilities.

### What VR platforms are supported?
OpenXR compatibility provides support for Quest 2, Quest Pro, Quest 3, and PC VR headsets with standardized input handling.

### How are weapon inputs handled?
Separate input mapping contexts (`IMC_Weapon_Left/Right`) activate when weapons are equipped, providing specialized control schemes.

### Can input mappings be customized?
The Enhanced Input system architecture supports runtime remapping and user customization of input actions.

## Related File List
```
Content/VRTemplate/Input/
├── IMC_Default.uasset              # Default input mapping context
├── IMC_Weapon_Left.uasset          # Left weapon input context  
├── IMC_Weapon_Right.uasset         # Right weapon input context
├── B_InputModifier_XAxisPositiveOnly.uasset # Input modifier
├── Actions/
│   ├── IA_Grab_Left_Pressed.uasset        # Left grab press
│   ├── IA_Grab_Left_Released.uasset       # Left grab release
│   ├── IA_Grab_Right_Pressed.uasset       # Right grab press
│   ├── IA_Grab_Right_Released.uasset      # Right grab release
│   ├── IA_Menu_Cursor_Left.uasset         # Left menu cursor
│   ├── IA_Menu_Cursor_Right.uasset        # Right menu cursor
│   ├── IA_Menu_Interact_Left_Pressed.uasset   # Left menu interact
│   ├── IA_Menu_Interact_Left_Released.uasset  # Left menu release
│   ├── IA_Menu_Interact_Right_Pressed.uasset  # Right menu interact
│   ├── IA_Menu_Interact_Right_Released.uasset # Right menu release
│   ├── IA_Menu_Toggle_Left.uasset         # Left menu toggle
│   ├── IA_Menu_Toggle_Right.uasset        # Right menu toggle
│   ├── IA_Move.uasset                     # Movement action
│   ├── IA_Shoot_Left.uasset              # Left weapon fire
│   ├── IA_Shoot_Right.uasset             # Right weapon fire
│   ├── IA_Turn.uasset                    # Turn action
│   └── Hands/
│       ├── IA_Hand_Grasp_Left.uasset      # Left hand grasp
│       ├── IA_Hand_Grasp_Right.uasset     # Right hand grasp
│       ├── IA_Hand_IndexCurl_Left.uasset  # Left index curl
│       ├── IA_Hand_IndexCurl_Right.uasset # Right index curl
│       ├── IA_Hand_Point_Left.uasset      # Left point gesture
│       ├── IA_Hand_Point_Right.uasset     # Right point gesture
│       ├── IA_Hand_ThumbUp_Left.uasset    # Left thumb up
│       └── IA_Hand_ThumbUp_Right.uasset   # Right thumb up
```

## Changelog

### 2025-09-06 (Initial Documentation)
- Documented comprehensive VR input system architecture
- Identified hand tracking and controller input integration
- Documented input mapping contexts and action categories
- Established cross-platform compatibility guidelines