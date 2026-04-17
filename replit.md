# No Orbs Mod - Geometry Dash

## Overview
A **Geometry Dash 2.206** mod (ID: `neuru.noorbs`) built with C++20 and the [Geode SDK](https://geode-sdk.org/) v3.9.3. Hooks into `PlayerObject::ringJump` to block all ring/orb jumps in levels, giving bots like **xdbot** full control over player inputs.

## Project Structure
- `mod.json` — Geode mod manifest (ID, version, GD targets, description)
- `CMakeLists.txt` — CMake build configuration
- `src/main.cpp` — Hooks `PlayerObject::ringJump` to block orb jumps
- `include/NoOrbs.hpp` — Header file
- `.github/workflows/build.yml` — GitHub Actions: builds `.geode` for Win64, Android32, Android64
- `index.html` — Informational web page (served in Replit preview)
- `server.py` — Simple Python static file server (port 5000)

## Tech Stack
- **Language:** C++20
- **Framework:** Geode SDK 3.9.3
- **Build System:** CMake 3.21+ (built via GitHub Actions)
- **GD Version:** 2.206
- **Platforms:** Windows, Android, Mac, iOS

## How it Works
```cpp
class $modify(NoOrbsMod, PlayerObject) {
    void ringJump(RingObject* ring, bool invert) {
        // Block all ring/orb jumps — original not called
    }
};
```
By overriding `PlayerObject::ringJump` and not calling the original, any ring/orb the player touches does nothing. This prevents unintended jumps during bot sessions (e.g. xdbot).

## Build (GitHub Actions)
The workflow at `.github/workflows/build.yml` builds for Win64, Android32, and Android64 on every push to `main`. The SDK is **pinned to 3.9.3** to match `mod.json`.

## Replit Setup
Since this is a C++ game mod (not a web app), Replit serves an informational HTML page at port 5000 via a simple Python server.
