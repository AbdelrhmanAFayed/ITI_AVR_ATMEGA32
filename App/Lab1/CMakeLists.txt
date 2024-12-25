

cmake_minimum_required(VERSION 3.2)
set(CMAKE_SYSTEM_NAME generic)

project(LAB1 C)


file(GLOB_RECURSE ${PROJECT_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c" )


message(STATUS "${CMAKE_C_COMPILER}")
message(STATUS "${${PROJECT_NAME}_SOURCES}")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../../COTS/MCAL/DIO/ ${CMAKE_BINARY_DIR}/MDIO) 

set(CMAKE_C_COMPILER avr-gcc)

add_executable(${PROJECT_NAME} "${${PROJECT_NAME}_SOURCES}")

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc"  "${CMAKE_CURRENT_SOURCE_DIR}/../../COTS/common/stdlib"  )

target_link_libraries(${PROJECT_NAME} MDIO)

add_custom_target( 
    avr-hex
    COMMAND -E avr-objcopy -O ihex ${PROJECT_NAME} ${PROJECT_NAME}.hex
    DEPENDS ${PROJECT_NAME}
)

add_dependencies( avr-hex ${PROJECT_NAME})


