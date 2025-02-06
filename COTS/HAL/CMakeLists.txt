cmake_minimum_required(VERSION 3.10)

# Collect all sources in HAL (recursive search)
file(GLOB_RECURSE HAL_SOURCES "*/src/*.c")
file(GLOB_RECURSE HAL_HEADERS "*/inc/*.h")

# Set AVR toolchain
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER "/usr/bin/avr-gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/avr-g++")
set(CMAKE_ASM_COMPILER "/usr/bin/avr-gcc")

# Create a static library for HAL from all the collected sources
add_library(HAL STATIC ${HAL_SOURCES})

# Link with MCAL to resolve dependencies like MPORT.h
target_link_libraries(HAL PRIVATE MCAL)

# Include directories for HAL
target_include_directories(HAL PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/LED/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/SEVENSEG/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/SWITCH/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../common/stdlib
)
