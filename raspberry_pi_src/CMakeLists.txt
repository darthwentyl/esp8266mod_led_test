cmake_minimum_required(VERSION 3.7.2)
project(esp8266_led_test)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR})

include_directories("${PROJECT_INCLUDE_DIR}/src")
add_subdirectory(src)
