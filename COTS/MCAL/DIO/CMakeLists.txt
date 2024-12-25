

cmake_minimum_required(VERSION 3.2)

project(MDIO C)

set(CMAKE_C_COMPILER avr-gcc)

file(GLOB_RECURSE ${PROJECT_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c" )

message(STATUS "${CMAKE_C_COMPILER}")
message(STATUS "${${PROJECT_NAME}_SOURCES}")

add_library(${PROJECT_NAME} STATIC "${${PROJECT_NAME}_SOURCES}")

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc"  "${CMAKE_CURRENT_SOURCE_DIR}/../../common/stdlib" )



