cmake_minimum_required(VERSION 3.10)
project(COTS)

# Set the base directory
set(COTS_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# Set AVR toolchain
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER "/usr/bin/avr-gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/avr-g++")
set(CMAKE_ASM_COMPILER "/usr/bin/avr-gcc")


# Add subdirectories (Each has its own CMakeLists.txt)
add_subdirectory(HAL)
add_subdirectory(MCAL)

# Common headers (stdlib)
include_directories(${COTS_DIR}/common/stdlib)
