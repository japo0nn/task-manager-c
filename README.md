# TSKMNG

## Overview
**TSKMNG** is a lightweight and fast task manager written in pure C. The application is designed for monitoring processes across multiple operating systems, including Linux, Windows, and macOS.

## Features
- Display a list of all running processes
- Show PID, PPID, process name, and memory usage
- Sorting and filtering processes
- Terminate processes by PID
- Cross-platform support (Windows and macOS are not supported yet)

## Installition
```
# Clone repo
git clone https://github.com/your-repo/tskmng.git
cd tskmng

# Build with CMake
mkdir build && cd build
cmake ..
make
```

## Usage
```
./tskmng
```
Once launched, the program will display a list of all active processes.

## Dependencies
- GCC/Clang/MSVC compiler
- CMake (for building)

## TODO
- [x] Linux support
- [ ] macOS support
- [ ] Windows support
- [ ] Add support for command-line arguments
- [ ] Implement color highlighting for important processes
- [ ] Optimize /proc file handling for better performance

