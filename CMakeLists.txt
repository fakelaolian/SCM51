# cmake_minimum_required(VERSION <specify CMake version here>)
project(51 C)

set(CMAKE_C_STANDARD 11)

add_executable(51
        led.c
        main.c
        tool.h tool.c key.c key.h types.h)
