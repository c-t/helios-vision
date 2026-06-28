# Helios Vision — Architecture

## Overview

Helios Vision is a modular, on-device AI system designed in C++ with a strict separation between core intelligence, platform integration, and future AI/vision subsystems.

The architecture is intentionally layered to support:
- Android deployment
- Offline inference
- Real-time vision processing
- Long-term extensibility

---

## High-Level Architecture
[ Android App (Future) ]
↓
[ JNI / Platform Bridge ]
↓
[ Helios Core Runtime (C++) ]
↓
[ Engine Layer ]
↓
[ Subsystems ]
├── Vision Pipeline (future)
├── Inference Layer (future)
├── Audio Output (future)
├── Memory / Context (future)

---

## Core Design Principles

### 1. Core is Platform-Agnostic
The C++ core must not depend on Android, Windows, or Linux APIs.

Platform-specific code is isolated at the edges.

---

### 2. Engine-Centric Design

The Engine is the central orchestrator of Helios.

It is responsible for:
- Lifecycle management
- Subsystem coordination
- Runtime state control

---

### 3. Subsystem Isolation

Each capability is a separate module:
- Vision
- Inference
- Audio
- Context

Subsystems do not directly depend on each other.
They interact through the Engine.

---

### 4. Testability First

Every module must:
- Be independently testable
- Have no hidden dependencies
- Be buildable in isolation

---

### 5. Incremental Growth

Helios is not built as a monolith.

Instead:
- Each subsystem is added gradually
- Each stage must compile and run
- Each addition must be test-covered

---

## Current Implementation State

### Existing Components

- `helios_core`
  - Basic Engine class
  - Initialization lifecycle
  - Demo integration

- Build System
  - CMake-based multi-module structure
  - GoogleTest integration

- Testing Layer
  - CTest + GoogleTest working
  - Initial engine test passing

---

## Engine Role (Current + Future)

### Current
- Initializes core runtime
- Acts as entry point for demo

### Future
- Controls full system lifecycle
- Manages subsystem coordination
- Handles runtime errors and recovery
- Interfaces with Android layer

---

## Planned Subsystems

### Vision Pipeline
- Camera frame ingestion
- Preprocessing
- Object detection / scene understanding

### Inference Layer
- Model execution (ONNX / TFLite / custom runtime)
- Hardware acceleration support

### Audio Output
- Text-to-speech
- Real-time feedback system

### Context Memory
- Short-term scene memory
- User interaction state

---

## Deployment Architecture (Future Android)
Android App
↓
JNI Bridge
↓
Helios Core (C++)
↓
Native Engine + Subsystems

---

## Constraints

- No cloud dependency
- Must run on mid-range Android devices
- Must support offline execution
- Must be memory efficient

---

## Evolution Strategy

Architecture is not fixed.

It evolves in phases:

1. Stable C++ core (current)
2. Engine redesign (current focus)
3. Vision pipeline integration
4. Android integration
5. Optimization and hardware acceleration

---

## Summary

Helios is a layered, modular, offline-first AI system with a C++ core designed for long-term extensibility into mobile AI applications.