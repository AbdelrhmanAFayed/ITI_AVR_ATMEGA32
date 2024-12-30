

cmake_minimum_required(VERSION 3.2)
set(CMAKE_SYSTEM_NAME generic)

# Automatically remove the build directory
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "In-source builds are not allowed. Please use a separate build directory.")
endif()

# Custom command to remove the previous build directory
if (EXISTS ${CMAKE_BINARY_DIR})
    file(REMOVE_RECURSE ${CMAKE_BINARY_DIR})
    message(STATUS "Previous build folder removed: ${CMAKE_BINARY_DIR}")
endif()

project(LAB3 C)

set(MCU atmega32)
set(F_CPU 8000000UL)  
set(PROGRAMMER usbasp) 
set(PORT usb) 

set(CMAKE_EXE_LINKER_FLAGS "-mmcu=${MCU}")

file(GLOB_RECURSE ${PROJECT_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c" )


message(STATUS "${CMAKE_C_COMPILER}")
message(STATUS "${${PROJECT_NAME}_SOURCES}")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../../COTS/MCAL/DIO/ ${CMAKE_BINARY_DIR}/MDIO) 

set(CMAKE_C_COMPILER avr-gcc)
set(CMAKE_C_FLAGS "-Os -Wall -mmcu=${MCU} -DF_CPU=${F_CPU}")


add_executable(${PROJECT_NAME} "${${PROJECT_NAME}_SOURCES}")

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc"  "${CMAKE_CURRENT_SOURCE_DIR}/../../COTS/common/stdlib"  )

target_link_libraries(${PROJECT_NAME} MDIO)

add_custom_target(${PROJECT_NAME}.hex ALL
    COMMAND avr-objcopy -O ihex -R .eeprom ${PROJECT_NAME} ${PROJECT_NAME}.hex
    DEPENDS ${PROJECT_NAME}
)
add_custom_target(upload
    COMMAND avrdude -c ${PROGRAMMER} -p ${MCU} -P ${PORT} -U flash:w:${PROJECT_NAME}.hex
    DEPENDS ${PROJECT_NAME}.hex
)





