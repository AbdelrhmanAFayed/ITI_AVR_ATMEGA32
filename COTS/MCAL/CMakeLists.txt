cmake_minimum_required(VERSION 3.10)

# Collect all sources in MCAL
file(GLOB_RECURSE MCAL_SOURCES "*/src/*.c")
file(GLOB_RECURSE MCAL_HEADERS "*/inc/*.h")

# Set AVR toolchain
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER "/usr/bin/avr-gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/avr-g++")
set(CMAKE_ASM_COMPILER "/usr/bin/avr-gcc")

# Create a static library for MCAL
add_library(MCAL STATIC ${MCAL_SOURCES})

# Link with HAL to resolve dependencies
target_link_libraries(MCAL PRIVATE HAL)

# Include directories for MCAL
target_include_directories(MCAL PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/DIO/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/PORT/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../common/stdlib  # Ensure the common/stdlib path is included for STD_TYPES.h
)
