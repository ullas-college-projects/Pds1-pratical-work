cmake_minimum_required(VERSION 3.26)
project(pratical_work)

set(CMAKE_CXX_STANDARD 17)

add_executable(pratical_work main.c
        solar_system.h
        input_reader.c
        input_reader.h
        solar_system.c)
