set(CMAKE_SYSTEM_NAME "Windows")
set(CMAKE_SYSTEM_PROCESSOR "AMD64")

# Supposedly this is 64-bit, and Ubuntu calls it this (I think?)
set(CMAKE_CXX_COMPILER "/usr/bin/x86_64-w64-mingw32-g++")
# Specific to the location of 'qt5base-mingw-w64' Ubuntu ppa package
set(Qt5_DIR "/usr/x86_64-w64-mingw32/lib/cmake/Qt5")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
