# Face Detection
This project is focused on creating a simple object detection application using OpenCV in C++. The application can detect objects in both static images and real-time video streams from your webcam.

## Install OpenCV 4.11 on Ubuntu 22.04

OpenCV (Open Source Computer Vision Library) is a library of programming functions mainly for real-time computer vision.

---

## Installation of OpenCV and Dependencies

1. Update and upgrade the system:
   ```sh
   sudo apt-get update && sudo apt-get upgrade
   ```
2. Install essential build tools and libraries:
   ```sh
   sudo apt-get install build-essential cmake git unzip pkg-config
   ```
3. Install image I/O libraries:
   ```sh
   sudo apt-get install libjpeg-dev libpng-dev libtiff-dev
   ```

---

## Build OpenCV for C++ from Sources

1. Download the most recent release of OpenCV (4.11.0):
   [OpenCV 4.11.0](https://github.com/opencv/opencv/releases/tag/4.11.0)
2. Create a temporary folder for all archives:
   ```sh
   mkdir ~/opencv4.11-tmp && cd ~/opencv4.11-tmp
   ```
3. Download OpenCV sources:
   ```sh
   wget https://github.com/opencv/opencv/archive/4.11.0.zip -O opencv.zip
   ```
4. Download OpenCV-contrib sources:
   ```sh
   wget https://github.com/opencv/opencv_contrib/archive/4.11.0.zip -O opencv_contrib.zip
   ```
5. Unzip the OpenCV files:
   ```sh
   unzip opencv.zip
   ```
6. Unzip the OpenCV-contrib files:
   ```sh
   unzip opencv_contrib.zip
   ```
7. Move the files to simpler directories:
   ```sh
   mv opencv-4.11.0/ opencv
   mv opencv_contrib-4.11.0/ opencv_contrib
   ```
8. Create a build directory:
   ```sh
   cd opencv && mkdir build && cd build
   ```
9. Configure the build with CMake:
   ```sh
   cmake -D CMAKE_BUILD_TYPE=DEBUG \
         -D CMAKE_INSTALL_PREFIX=~/opencv4.11-custom \W
         -D OPENCV_EXTRA_MODULES_PATH=~/opencv4.11-tmp/opencv_contrib/modules \
         -D OPENCV_GENERATE_PKGCONFIG=ON \
         -D BUILD_EXAMPLES=ON ..
   ```
10. Build the project:
    ```sh
    make -j4
    ```
11. Install the project:
    ```sh
    sudo make install
    ```
12. Update the library cache:
    ```sh
    sudo ldconfig
    ```

## Build the Project

1. Navigate to the build directory:
   ```sh
   cd ./Face_Detection/build
   ```
2. Clean and build the project:
   ```sh
   rm -r * && cmake .. && make -j
   ```
3. Run the application:
   ```sh
   ./FaceDetection
   ```