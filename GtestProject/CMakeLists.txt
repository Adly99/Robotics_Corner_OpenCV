# @file CMakeLists.txt
# @brief CMake configuration file for the Calculator project
#
# This file sets up the build configuration for the Calculator project,
# including the necessary paths for Google Test and Google Mock libraries.
# It defines the project name, version, C++ standard, and sources for the
# main application and tests. The configuration also registers tests with 
# CTest for automated testing.
#
# @author Abdelrahman Elgharabawy
# @date 2024-09-27
#
# @usage
# To build the project, navigate to the build directory and run:
#   cmake .. 
#   make
#   or...
#   rm -rf build/* && cmake -S . -B build && cmake --build build -j
# Ensure that the Google Test and Google Mock libraries are properly 
# linked and the paths are correctly set in the CMake configuration.
#
# The compiled executable will be located in the bin directory within 
# the build folder.

cmake_minimum_required(VERSION 3.28.3)

# Define project name and version
project(Calculator VERSION 1.0 LANGUAGES CXX)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  #void compiler-specific extensions

enable_testing()

# Include directories for GoogleTest and project sources
include_directories(
  ${CMAKE_SOURCE_DIR}/src/calculator/
  ${CMAKE_SOURCE_DIR}/test/gtest/googletest/include
  # ${CMAKE_SOURCE_DIR}/test/gtest/googlemock/include  # if you need to use mocking
)

set(PROJECT_SOURCES
    ${CMAKE_SOURCE_DIR}/src/calculator/Calculator.cpp
    # Add more source files here as needed
)

set(TEST_SOURCES
    ${CMAKE_SOURCE_DIR}/test/test_calculator.cpp
    # Add more test files here as needed
)

# Create an executable for the project
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${TEST_SOURCES})

# Register tests with CTest
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} 
    PRIVATE
        ${CMAKE_SOURCE_DIR}/test/gtest/lib/libgtest.a 
        ${CMAKE_SOURCE_DIR}/test/gtest/lib/libgtest_main.a 
        ${CMAKE_SOURCE_DIR}/test/gtest/lib/libgmock.a 
        ${CMAKE_SOURCE_DIR}/test/gtest/lib/libgmock_main.a 
)

# Set output directory for executables
set_target_properties(${PROJECT_NAME} PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
