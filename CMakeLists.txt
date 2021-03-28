cmake_minimum_required(VERSION 3.17)
project(T_early C)

set(CMAKE_C_STANDARD 99)
if (MSVC)
    set(CMAKE_C_FLAGS "/utf-8")
endif ()

find_package(PkgConfig REQUIRED)

pkg_check_modules(PYTHON38 REQUIRED python-3.8)
include_directories(${PYTHON38_INCLUDE_DIRS})
link_directories(${PYTHON38_LIBRARY_DIRS})
add_definitions(${PYTHON38_CFLAGS_OTHER})

include_directories(lib)
aux_source_directory(lib LIBRARY_DIRS)

add_executable(${PROJECT_NAME} main.c ${LIBRARY_DIRS})
target_link_libraries(${PROJECT_NAME} ${PYTHON38_LIBRARIES})
