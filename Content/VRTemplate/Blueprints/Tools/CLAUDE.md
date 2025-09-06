# Tools Blueprint Module

[Root Directory](../../../../CLAUDE.md) > [Content](../../../) > [VRTemplate](../../) > [Blueprints](../) > **Tools**

## Module Responsibilities  
The Tools module provides VR construction and building utilities. Currently focused on spline-based wall construction with motion controller integration, enabling users to create architectural elements through natural VR gestures.

## Entry and Startup
- **Primary Blueprint**: `BP_SplineWall`
- **VR Integration**: Motion controller (right hand) based construction
- **Input Method**: VR hand tracking and controller positioning
- **Creation Pattern**: Real-time spline-based mesh generation

## External Interfaces

### Spline Wall Construction
- **Main Blueprint**: `BP_SplineWall.uasset`
- **Input Source**: VRPawn motion controller component (right hand)
- **Construction Method**: Spline points define wall geometry
- **Mesh Generation**: Dynamic spline mesh component fitting

### VR Controller Integration
- **Controller Source**: Right hand motion controller from VRPawn
- **Input Method**: Real-time position tracking for spline point creation
- **User Experience**: Natural hand-gesture based wall construction
- **Visual Feedback**: Real-time mesh generation as user moves controller

## Key Dependencies and Configuration

### Blueprint Dependencies  
- **VRPawn**: Required for motion controller access
- **Spline Components**: UE5 spline system for path definition
- **Mesh Components**: Spline mesh components for wall rendering
- **Materials**: Wall materials from Materials module

### Construction System
- **Spline System**: Defines wall path and shape
- **Mesh Fitting**: Ensures mesh perfectly fits spline points
- **Real-time Updates**: Mesh updates as spline points are modified
- **VR Optimization**: Performance optimized for VR framerates

## Data Models

### Wall Construction Pipeline
```
VR Controller Position → Spline Point → Mesh Generation → Visual Update
```

### System Architecture
```
BP_SplineWall
├── Spline Component (Path Definition)
├── Spline Mesh Component (Rendering)
├── VRPawn Integration (Input)
└── Material Application (Visuals)
```

## Testing and Quality

### Current Implementation Status (from Git History)
- ✅ Updated spline mesh component with VRPawn motion controller integration
- ✅ Improved mesh fitting to perfectly align with spline points  
- ✅ Enhanced robustness of spline wall construction
- ⚠️ Integration described as "janky" - needs refinement

### Testing Strategies
- **VR Construction Testing**: Test wall building in VR environment
- **Spline Accuracy**: Verify mesh alignment with intended spline path
- **Performance Testing**: Ensure smooth operation during construction
- **User Experience**: Test natural feel of wall construction gestures

### Quality Considerations
- **VR Performance**: Real-time mesh generation must maintain VR framerates
- **User Comfort**: Natural interaction patterns to avoid motion sickness
- **Visual Quality**: Clean mesh generation without artifacts
- **Robustness**: Handle edge cases in spline construction

## FAQ

### How does the motion controller integration work?
The system reads real-time position data from the VRPawn's right hand motion controller to create and modify spline points, generating wall geometry dynamically.

### What makes the current integration "janky"?
Based on git history, the motion controller integration works but may have responsiveness or precision issues that need refinement.

### Can users modify existing walls?
The spline-based system should support modification of existing wall segments by manipulating spline points.

### What materials are used for walls?
The system uses materials from the VRTemplate Materials module, likely optimized for VR rendering performance.

## Related File List
```
Content/VRTemplate/Blueprints/Tools/
└── BP_SplineWall.uasset         # Main spline wall blueprint

Content/VRTemplate/Blueprints/Player/
└── VRPawn.uasset               # VR pawn with motion controllers

Content/VRTemplate/Materials/
├── (Wall Materials)            # Materials used for wall rendering
└── (Construction Materials)    # Materials for construction feedback
```

## Changelog

### 2025-09-06 (Initial Documentation)
- Documented spline wall construction system
- Identified VR controller integration patterns
- Documented construction pipeline and architecture
- Established testing guidelines for VR construction tools

### Recent Development (from Git History)
- **Latest**: Updated `BP_SplineWall` with VRPawn motion controller integration (described as "janky")
- **Previous**: Improved spline mesh fitting for perfect alignment with spline points
- **Earlier**: Introduced `BP_SplineWall` and related materials system

### Next Development Priorities  
- Refine motion controller integration for smoother operation
- Improve user experience and interaction responsiveness
- Add construction feedback and visual guides
- Optimize performance for complex wall structures