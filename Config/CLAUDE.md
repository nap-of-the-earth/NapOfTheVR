# Configuration Module

[Root Directory](../../CLAUDE.md) > **Config**

## Module Responsibilities
The Configuration module manages engine settings, platform-specific configurations, and VR optimization parameters. It contains critical settings for VR performance, input mappings, rendering optimization, and cross-platform compatibility.

## Entry and Startup
- **Primary Configurations**: Engine, Input, Game, Editor settings
- **VR Optimization**: Forward shading, mobile VR settings, stereo rendering
- **Platform Support**: Windows, Mac, VisionOS, Android (Quest) configurations
- **Integration**: OpenXR and Meta Quest platform settings

## External Interfaces

### Engine Configuration (`DefaultEngine.ini`)
#### VR Rendering Optimization
- **Forward Shading**: Enabled for VR performance (`r.ForwardShading=True`)
- **Instanced Stereo**: VR stereo rendering optimization (`vr.InstancedStereo=True`)
- **Mobile Multi-View**: Quest optimization (`vr.MobileMultiView=True`)
- **Anti-aliasing**: Optimized AA method for VR (`r.AntiAliasingMethod=3`)

#### Quest Platform Configuration
- **Supported Devices**: Quest 2, Quest Pro, Quest 3 explicitly configured
- **Package Settings**: Meta Quest packaging enabled (`bPackageForMetaQuest=True`)
- **SDK Versions**: Android SDK 32 for Quest compatibility

#### Performance Settings
- **Auto Exposure**: Disabled for VR comfort (`r.DefaultFeature.AutoExposure=False`)
- **Motion Blur**: Disabled for VR (`r.DefaultFeature.MotionBlur=False`)
- **Ray Tracing**: Enabled with proxy support for high-end systems

### Game Configuration (`DefaultGame.ini`)
- **Game Mode**: `VRGameMode.VRGameMode_C` (Blueprint-based)
- **Game Instance**: `GI_NoteGameInstance.GI_NoteGameInstance_C`
- **Default Map**: `VRTemplateMap` for VR testing environment

### Input Configuration (`DefaultInput.ini`)
- VR-specific input mappings and controller configurations
- Integration with Enhanced Input system
- Cross-platform VR controller support

## Key Dependencies and Configuration

### VR Platform Support
- **OpenXR**: Primary VR API for cross-platform compatibility
- **Meta Quest**: Native Quest support with optimized settings
- **PC VR**: Windows DirectX 12 optimization
- **Mobile VR**: Android-specific VR configurations

### Rendering Pipeline
- **Forward Rendering**: Optimized for VR performance requirements
- **Stereo Rendering**: Multiple stereo rendering techniques enabled
- **Mobile Optimization**: Quest-specific performance settings

## Data Models

### Configuration Hierarchy
```
Engine Settings
├── Rendering (VR-optimized)
├── Platform-Specific Settings
│   ├── Windows (PC VR)
│   ├── Android (Quest)
│   ├── Mac (Development)
│   └── VisionOS (Future support)
└── VR-Specific Features
    ├── OpenXR Integration
    ├── Hand Tracking
    └── Eye Tracking
```

### VR Optimization Stack
```
Forward Shading → Instanced Stereo → Mobile Multi-View → VR Comfort Settings
```

## Testing and Quality

### Configuration Testing
- **Multi-Platform Testing**: Verify settings work across all supported platforms
- **Performance Validation**: Ensure VR framerate requirements are met
- **Comfort Testing**: Validate VR comfort settings (motion blur, auto-exposure)
- **Feature Testing**: Test OpenXR features across different headsets

### Quality Considerations
- **VR Performance**: Maintain 72Hz+ for Quest, 90Hz+ for PC VR
- **Cross-Platform**: Consistent experience across all supported platforms
- **Future-Proofing**: Settings support for emerging VR technologies
- **Backwards Compatibility**: Support for older VR hardware

## FAQ

### Why is forward shading enabled?
Forward shading provides better performance for VR applications compared to deferred rendering, especially important for maintaining high framerates on mobile VR platforms like Quest.

### What VR platforms are officially supported?
The project supports Quest 2, Quest Pro, Quest 3 via OpenXR, plus PC VR headsets. VisionOS support is configured for future Apple Vision Pro compatibility.

### How are platform-specific optimizations handled?
Each platform has dedicated configuration sections with optimized settings for that platform's VR capabilities and performance characteristics.

### Can settings be modified at runtime?
Most VR settings require engine restart, but some performance settings can be adjusted through console commands during development.

## Related File List
```
Config/
├── DefaultEngine.ini                      # Main engine configuration
├── DefaultGame.ini                       # Game-specific settings
├── DefaultInput.ini                      # Input mappings and controllers
├── DefaultEditor.ini                     # Editor-specific settings
├── DefaultEditorPerProjectUserSettings.ini # Per-project editor settings
├── Mac/
│   └── MacEngine.ini                     # Mac-specific engine settings
└── VisionOS/
    └── VisionOSEngine.ini               # VisionOS-specific settings
```

## Changelog

### 2025-09-06 (Initial Documentation)
- Documented comprehensive VR configuration architecture
- Identified platform-specific optimization patterns
- Documented rendering pipeline configuration for VR
- Established multi-platform testing guidelines

### Configuration Evolution
- **VR Optimization**: Configured for Quest 2/Pro/3 support
- **Rendering Pipeline**: Optimized forward shading for VR performance
- **Cross-Platform**: OpenXR integration for broad VR compatibility
- **Future Support**: VisionOS configuration for Apple Vision Pro readiness