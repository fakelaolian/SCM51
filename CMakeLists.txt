# cmake_minimum_required(VERSION <specify CMake version here>)
project(microcomputer51 C)
set(CMAKE_C_STANDARD 11)
add_executable(${PROJECT_NAME} led.c main.c tool.h tool.c key.c nixie-tube.c ds18b20.c)
