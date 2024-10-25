#include "object_detector.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <filesystem> // C++17 feature

int main(int argc, char** argv) 
{
    // Define the relative path to the Haar cascade file
    std::string cascadeFile = "/home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/data/haarcascade_frontalface_default.xml";

    // Check if the file exists
    if (!std::filesystem::exists(cascadeFile)) {
        std::cerr << "Error: Cascade file not found at: " << cascadeFile << std::endl;
        std::cerr << "Please ensure the file is in the correct directory." << std::endl;
        return -1;
    }

    // Initialize the ObjectDetector
    ObjectDetector detector(cascadeFile);

    // Use default camera
    cv::VideoCapture cap(0); 
    if (!cap.isOpened()) 
    {
        std::cerr << "Error opening video stream." << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (cap.read(frame)) 
    {
        detector.detectAndDisplay(frame);

        // Show the frame (optional)
        cv::imshow("Video Feed", frame);

        // Press 'q' to exit
        if (cv::waitKey(30) == 'q') break; 
    }

    return 0;
}
