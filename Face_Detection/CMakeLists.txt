# Minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(FaceDetection)

# Set C++ standard (if necessary)
set(CMAKE_CXX_STANDARD 17)

# Specify the path to OpenCV if CMake has trouble finding it
set(OpenCV_DIR "/usr/local/include/opencv4")

# Find the OpenCV package
find_package(OpenCV REQUIRED)

# Check if OpenCV was found
if(OpenCV_FOUND)
    message(STATUS "OpenCV found at: ${OpenCV_INCLUDE_DIRS}")
else()
    message(FATAL_ERROR "OpenCV not found. Please install OpenCV and set OpenCV_DIR.")
endif()

# Include OpenCV headers
include_directories(
    ${OpenCV_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/FaceDetector/   
    ${CMAKE_SOURCE_DIR}/FeatureExecutor/
    )
    
set(PROJECT_SOURCES
    ${CMAKE_SOURCE_DIR}/FeatureExecutor/FeatureExecutor.cpp
    ${CMAKE_SOURCE_DIR}/FaceDetector/FaceDetector.cpp
    ${CMAKE_SOURCE_DIR}/main.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
