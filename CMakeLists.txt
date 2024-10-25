# cmake_minimum_required(VERSION 3.10)
# project(Robotics_Corner_OpenCV)

# cmake_policy(SET CMP0146 NEW)

# # Find OpenCV
# find_package(OpenCV REQUIRED)

# # Optionally disable CUDA in OpenCV if not required
# set(OpenCV_DNN_CUDA OFF)  # Disable CUDA for OpenCV if not needed


# # Find OpenCV
# find_package(OpenCV REQUIRED)

# # Include directories
# include_directories(
#     ${OpenCV_INCLUDE_DIRS} 
#     ${CMAKE_SOURCE_DIR}/object_detector/   # Adjusted to include "include" directory
#     )

# # Source files
# add_executable(object_detector main.cpp object_detector/object_detector.cpp)

# # Link OpenCV libraries
# target_link_libraries(object_detector ${OpenCV_LIBS})


#########################################################
# Minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(Robotics_Corner_OpenCV)

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
    ${CMAKE_SOURCE_DIR}/object_detector/   # Adjusted to include "include" directory
    )

set(PROJECT_SOURCES
    ${CMAKE_SOURCE_DIR}/object_detector/object_detector.cpp
    ${CMAKE_SOURCE_DIR}/main.cpp
    # Add more source files here as needed
)
# Add the executable (replace main.cpp with your source file)
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

# Link the OpenCV libraries to your executable
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
