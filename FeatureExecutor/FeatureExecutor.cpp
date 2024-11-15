/// 
/// @file FeatureExecutor.cpp
/// @brief Implements the FeatureExecutor class for face detection.
/// @author Abdelrahman Elgharabawy
/// @date 2024-11-15 
/// 

#include "FeatureExecutor.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>

/// 
///@brief Constructor for the FeatureExecutor class.
/// 
FeatureExecutor::FeatureExecutor()
{

} 
/// 
/// 
///@brief Destructor for the FeatureExecutor class.
/// 
FeatureExecutor::~FeatureExecutor()
{
    
} 


///
///@brief Executes face detection on a video stream from the default webcam.
///
///This function initializes a FaceDetector object with the provided cascade file path,
///opens the default webcam, captures frames, detects faces in the frames, draws
///bounding boxes around the detected faces, and displays the results in a window.
///The loop continues until the 'Esc' key is pressed.
///
///@param cascadePath The path to the Haar cascade XML file for face detection.
///
///@throws std::runtime_error If the webcam cannot be opened or no frames are captured.
///
void FeatureExecutor::executeFaceDetection(const std::string& cascadePath) 
{
    FaceDetector faceDetector(cascadePath);

    cv::VideoCapture cap(0);
    if (!cap.isOpened()) 
    {
        std::cerr << "Error: Cannot open webcam!" << std::endl;
        return;
    }

    cv::Mat frame;
    std::string winName = "Face Detection";
    cv::namedWindow(winName);

    while (true) 
    {
        cap.read(frame);
        if (frame.empty()) 
        {
            std::cerr << "Error: No frame captured!" << std::endl;
            break;
        }

        std::vector<cv::Rect> faces = faceDetector.detectFaces(frame);

        for (const auto& face : faces) 
        {
            cv::rectangle(frame, face, cv::Scalar(0, 0, 255), 2);
        }

        cv::imshow(winName, frame);
        if (cv::waitKey(10) == 27) 
        { // Exit on 'Esc' key
            std::cout << "Esc key pressed. Exiting..." << std::endl;
            break;
        }
    }
}
