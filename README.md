# Plants vs Zombies --- C++ / SFML 3

A **C++ reimplementation inspired by Plants vs Zombies**, built with
**SFML 3**, **CMake**, and **vcpkg**.\
This project focuses on **clean architecture**, **professional
tooling**, and **scalability**, rather than being a quick clone.

> ⚠️ This is an educational and technical project. All assets and logic
> are original or placeholders.

------------------------------------------------------------------------

## ✨ Features (in progress)

-   Modern **C++17**
-   **SFML 3.0** for graphics, windowing and audio
-   **CMake** as build system
-   **vcpkg** for dependency management
-   Lane-based gameplay architecture (PvZ-style)
-   Clean separation between **game logic**, **rendering**, and
    **resources**
-   Designed to later include a **custom level/editor tool**

------------------------------------------------------------------------

## 🛠 Requirements (Windows)

-   **Windows 10/11**
-   **Visual Studio 2022** (IDE morado) with:
    -   Desktop development with C++
-   **CMake ≥ 3.16**
-   **vcpkg** (installed locally)

------------------------------------------------------------------------

## 📦 Dependencies

Managed automatically via **vcpkg**:

-   SFML 3.0.2

You do **NOT** need to manually install SFML.

------------------------------------------------------------------------

## 🚀 Build Instructions (Windows)

``` bash
git clone https://github.com/hectoraliagam/PvZ
cd PvZ
```

Configure the project with vcpkg:

``` bash
cmake -S . -B out/build -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake
```

Build:

``` bash
cmake --build out/build
```

The executable will be generated inside:

    out/build/

------------------------------------------------------------------------

## ▶️ Running

You can: - Run the executable directly from the build folder, or - Press
**F5** from Visual Studio after CMake configuration

------------------------------------------------------------------------

## 📁 Project Structure

    pvz/
    ├─ src/            # C++ source files
    ├─ include/        # Public headers
    ├─ resources/      # Textures, audio, fonts
    ├─ CMakeLists.txt  # Build configuration
    ├─ .gitignore
    └─ README.md

Build folders (`out/`, `build/`, `.vs/`) are intentionally excluded from
the repository.

------------------------------------------------------------------------

## 🧠 Design Philosophy

This project prioritizes:

-   Explicit code over magic
-   Engine-like structure instead of monolithic code
-   Debug-first development
-   Long-term maintainability

------------------------------------------------------------------------

## 📌 Roadmap (high-level)

-   [ ] Core grid & lane system
-   [ ] Plant entities
-   [ ] Zombie entities
-   [ ] Collision & combat logic
-   [ ] Resource loading system
-   [ ] In-game debug tools
-   [ ] External editor (future)

------------------------------------------------------------------------

## 📜 License

This project is released for **educational purposes**.

------------------------------------------------------------------------

## 👤 Author

**Hector Aliaga**\
GitHub: https://github.com/hectoraliagam
