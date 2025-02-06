cmake_minimum_required(VERSION 3.10)
project(LCD_TEST C ASM)

# Set path to external COTS
set(COTS_PATH "../../COTS")  # Change this to the correct path

# Include COTS subdirectories (only the ones with their own CMakeLists.txt)
add_subdirectory(${COTS_PATH}/MCAL ${CMAKE_BINARY_DIR}/MCAL)
add_subdirectory(${COTS_PATH}/HAL ${CMAKE_BINARY_DIR}/HAL)

# Set AVR toolchain
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER "/usr/bin/avr-gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/avr-g++")
set(CMAKE_ASM_COMPILER "/usr/bin/avr-gcc")

# Target MCU & frequency
set(MCU atmega32)
set(F_CPU 8000000UL)

# Compiler flags
add_definitions(-DF_CPU=${F_CPU})
add_compile_options(-mmcu=${MCU} -Os --save-temps -Wall -Wextra -ffunction-sections -fdata-sections)
add_link_options(-Wl,-Map=final.map)

# Linker flags
set(CMAKE_EXE_LINKER_FLAGS "-mmcu=${MCU} -Wl,--gc-sections")

file(GLOB MAIN_SOURCES ${PROJECT_SOURCE_DIR}/src/*.c)

# Include directories (make sure this is applied directly to the target)
include_directories(
    ${COTS_PATH}/common/stdlib  # For STD_TYPES.h
    ${COTS_PATH}/HAL/LED/inc
    ${COTS_PATH}/HAL/SEVENSEG/inc
    ${COTS_PATH}/HAL/SWITCH/inc
    ${COTS_PATH}/HAL/LCD/inc
    ${COTS_PATH}/MCAL/DIO/inc
    ${COTS_PATH}/MCAL/PORT/inc  # Ensure this is included for MPORT.h
    ${PROJECT_SOURCE_DIR}/inc  # Main project headers
)

# Define the executable
add_executable(LCD_TEST ${MAIN_SOURCES})

# Ensure include directories are applied to the target
target_include_directories(LCD_TEST PRIVATE
    ${COTS_PATH}/common/stdlib
    ${COTS_PATH}/HAL/LED/inc
    ${COTS_PATH}/HAL/SEVENSEG/inc
    ${COTS_PATH}/HAL/SWITCH/inc
    ${COTS_PATH}/HAL/LCD/inc
    ${COTS_PATH}/MCAL/DIO/inc
    ${COTS_PATH}/MCAL/PORT/inc  # Ensure this is included for MPORT.h
    ${PROJECT_SOURCE_DIR}/inc  # Main project headers
)

# Link the libraries for HAL and MCAL to the project
target_link_libraries(LCD_TEST PUBLIC HAL MCAL)

# Generate HEX file
add_custom_target(hex
    COMMAND avr-objcopy -O ihex -R .eeprom LCD_TEST LCD_TEST.hex
    DEPENDS LCD_TEST
    COMMENT "Generating HEX file..."
)

add_custom_target(flash
    COMMAND avrdude -c usbasp -p m32 -U flash:w:LCD_TEST.hex:i
    DEPENDS LCD_TEST
    COMMENT "Flashing ATmega32..."
)
