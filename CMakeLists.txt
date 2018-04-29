cmake_minimum_required(VERSION 3.6)
project(Composite)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        CMakeLists.txt
        Component.cpp
        Component.h
        Directory.cpp
        Directory.h
        File.cpp
        File.h
        main.cpp)

add_executable(Composite ${SOURCE_FILES})