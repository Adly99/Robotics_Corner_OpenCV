#ifndef FACE_DETECTOR_HPP
#define FACE_DETECTOR_HPP

#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"
#include <opencv2/core.hpp>
#include <vector>

class FaceDetector 
{
    private:
        cv::CascadeClassifier faceClassifier;
    
    public:
        // Constructor loads the Haar Cascade XML model
        explicit FaceDetector(const std::string& cascadePath);
    
        // Detect faces in the given image and return bounding boxes
        std::vector<cv::Rect> detectFaces(const cv::Mat& frame);
    
        // Destructor
        ~FaceDetector() = default;
};

#endif // FACE_DETECTOR_HPP
