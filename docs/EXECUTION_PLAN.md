# Helios Vision — Execution Plan (6-Month Focus)

## Goal

Build a privacy-first, on-device AI assistant for visually impaired users,
capable of running on Android devices without cloud dependency.

---

## Time Horizon

6 months of focused iterative development.

---

## Core Principles

- On-device processing first (privacy by design)
- C++ core engine (performance + portability)
- Android as primary deployment target
- Incremental delivery (small working systems)
- Test-driven development from early stage
- No premature optimization, but performance awareness always

---

## Success Definition (6 Months)

By the end of 6 months, Helios should:

- Run on Android device (offline)
- Process camera input
- Perform basic vision tasks (object detection / scene description)
- Provide audio output to user
- Operate fully without cloud dependency
- Be architecturally extensible for AI model upgrades

---

## Development Strategy

### Phase 1 — Foundation (Completed)
- C++ core engine
- Build system (CMake)
- Testing framework (GoogleTest)
- Basic lifecycle structure

### Phase 2 — Engine Design (Current)
- Lifecycle-based engine API
- Error handling model
- Logging system
- Modular architecture

### Phase 3 — Vision Pipeline
- Image ingestion
- Preprocessing
- Model integration layer

### Phase 4 — Android Integration
- JNI bridge
- Camera input pipeline
- Audio output system

### Phase 5 — Optimization
- Performance tuning
- Memory optimization
- Battery-aware execution

---

## Non-Goals (Important)

- No cloud dependency
- No UI-first development
- No premature ML research without integration path

---

## Working Style

- Incremental commits
- Every feature must compile
- Every feature must be testable
- Every design decision documented