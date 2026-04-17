# No Orbs Mod - Geometry Dash

## Overview
This is a **Geometry Dash mod** named "No Orbs Mod" (ID: `neuru.noorbs`), built with C++20 and the [Geode SDK](https://geode-sdk.org/). The mod hooks into `GameLevelManager` to block orb rewards by returning 0 for `getRewardForLevel`.

## Project Structure
- `mod.json` — Geode mod manifest (ID, version, targets, description)
- `CMakeLists.txt` — CMake build configuration
- `src/main.cpp` — Main mod logic using `$modify` macro
- `include/NoOrbs.hpp` — Header file
- `index.html` — Informational web page (served in Replit preview)
- `server.py` — Simple Python static file server (port 5000)

## Tech Stack
- **Language:** C++20
- **Framework:** Geode SDK 3.9.3
- **Build System:** CMake 3.21+
- **Platforms:** Windows, Android, Mac, iOS

## Building the Mod (outside Replit)
1. Install the Geode SDK and set the `GEODE_SDK` environment variable.
2. Run:
   ```bash
   cmake -B build
   cmake --build build
   ```
3. The compiled `.geode` mod file can be loaded by the Geode mod loader in Geometry Dash.

## Replit Setup
Since this is a C++ game mod (not a web app), Replit serves an informational HTML page at port 5000 via a simple Python server. There is no backend database or API.
