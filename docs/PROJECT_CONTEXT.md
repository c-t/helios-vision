# Helios Vision — Project Context

## What This Project Is

Helios Vision is a systems-level AI engineering project focused on building a full-stack, on-device AI assistant for Android using a C++ core engine.

It is not a prototype script or a research notebook project.

It is a production-oriented architecture experiment.

---

## Current State (as of foundation phase completion)

### Working Components

- C++20 core engine (`helios_core`)
- Demo application (`helios_demo`)
- GoogleTest integration
- CMake-based build system
- CTest-based test execution
- Basic lifecycle entry point (`Engine::initialize()`)

---

## System Architecture (Current)

  Application Layer (future Android app)
  ↓
  JNI Bridge (future)
  ↓
  Helios Core (C++)
  ↓
  Subsystems (vision, inference, audio, memory)
  
---

## Design Philosophy

### 1. Separation of Concerns
Core AI logic is independent of platform layers.

### 2. Cross-Platform First
Initial development on Windows, deployment target is Android.

### 3. Testability
Every functional component must be testable from early stages.

### 4. Incremental Complexity
The system grows in small validated steps.

---

## Current Engineering Focus

We are currently in:

> Phase 2 — Engine Design

This includes:

- Lifecycle model design
- Error handling strategy
- Logging abstraction
- API stabilization

---

## Why C++

C++ is used because:

- Deterministic performance
- Low-level memory control
- Portable across Windows, Linux, Android (NDK)
- Suitable for embedded AI workloads

---

## Why Not Cloud AI

Cloud dependency is intentionally avoided to:

- Preserve user privacy
- Reduce latency
- Ensure offline functionality
- Improve robustness in low-connectivity regions 