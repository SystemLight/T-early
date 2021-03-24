cmake_minimum_required(VERSION 3.17)
project(T_early C)

set(CMAKE_C_STANDARD 99)

include_directories(lib)
aux_source_directory(lib LIB_SRCS)

add_executable(T_early main.c ${LIB_SRCS})
