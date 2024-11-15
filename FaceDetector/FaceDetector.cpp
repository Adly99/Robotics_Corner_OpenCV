#include "FaceDetector.hpp"
#include <iostream>

FaceDetector::FaceDetector(const std::string& cascadePath) 
{
    if (!faceClassifier.load(cascadePath)) 
    {
        std::cerr << "Error: Could not load cascade file!" << std::endl;
        throw std::runtime_error("Failed to load cascade classifier.");
    }
}

std::vector<cv::Rect> FaceDetector::detectFaces(const cv::Mat& frame) 
{
    std::vector<cv::Rect> faces;
    faceClassifier.detectMultiScale(frame, faces);
    return faces;
}
