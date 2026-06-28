# Helios Vision — Roadmap

## Overview

This roadmap defines the phased technical evolution of the Helios Vision system over a 6-month focused development cycle.

It translates the high-level vision into concrete engineering milestones.

---

## Current Status

We are currently at:

> Phase 2 — Engine Design

Foundation work is complete:
- C++ core engine exists
- Build system (CMake) is stable
- Unit testing (GoogleTest + CTest) is operational
- Basic demo application is functional

---

## Phase 1 — Foundation (Completed)

### Goals
Establish a working, testable C++ system skeleton.

### Delivered
- C++20 project setup
- Core engine module (`helios_core`)
- Demo executable (`helios_demo`)
- Root CMake build system
- GoogleTest integration
- First unit test passing
- Journal-based progress tracking

### Outcome
A stable engineering base for iterative development.

---

## Phase 2 — Engine Design (Current)

### Goals
Transform the engine from a simple initializer into a real runtime system.

### Work Items

- Introduce lifecycle model:
  - initialize()
  - start()
  - stop()
  - shutdown()

- Add structured error handling:
  - explicit success/failure states
  - no silent failures

- Introduce logging abstraction layer:
  - platform-independent logging API
  - prepare for Android integration

- Stabilize core API boundaries:
  - define engine responsibilities clearly
  - isolate future subsystems

### Outcome
A production-style engine core suitable for expansion.

---

## Phase 3 — Vision Pipeline (Upcoming)

### Goals
Introduce perception capabilities.

### Work Items

- Image ingestion layer
- Frame preprocessing pipeline
- Model integration abstraction layer
- Initial on-device inference support

### Outcome
System can process visual input from camera feeds.

---

## Phase 4 — Android Integration

### Goals
Deploy Helios on real devices.

### Work Items

- JNI bridge between Android and C++
- Camera input integration
- Audio output system
- Permission and lifecycle handling (Android runtime)

### Outcome
Working Android application with Helios core integration.

---

## Phase 5 — Optimization

### Goals
Make system efficient and deployable at scale.

### Work Items

- Memory optimization
- Latency reduction
- Battery-aware processing
- Hardware acceleration (CPU/GPU/NPU exploration)

---

## Phase 6 — Assistive Intelligence Layer

### Goals
Deliver user-facing functionality.

### Work Items

- Scene description for visually impaired users
- Object detection feedback
- Context-aware assistance
- Real-world usability refinement

---

## Guiding Principles

- Every phase must produce working software
- No phase depends on incomplete previous functionality
- Tests must exist for all core components
- Platform independence is preserved in core logic

---

## Non-Goals

- No cloud dependency
- No monolithic AI redesign
- No UI-first development
- No experimental features without integration path

---

## Execution Model

Development follows a strict loop:
Design → Implement → Test → Commit → Document → Repeat

Each cycle must be small and verifiable.

---

## Success Definition (6 months)

At the end of the roadmap:

- Fully offline Android AI assistant
- Real-time camera-based perception
- Audio feedback for users
- Stable C++ core architecture
- Extensible AI pipeline