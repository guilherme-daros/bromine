cmake_minimum_required(VERSION 3.12)

set(PICO_SDK_PATH "${CMAKE_CURRENT_LIST_DIR}/lib/pico-sdk")
set(PICO_BOARD pico_w CACHE STRING "Board type")
set(CMAKE_EXPORT_COMPILE_COMMANDS "YES")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/images)

include(${CMAKE_SOURCE_DIR}/cmake/pico_sdk_import.cmake)

project(bromine C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

pico_sdk_init()

add_subdirectory(apps)
add_subdirectory(lib)
