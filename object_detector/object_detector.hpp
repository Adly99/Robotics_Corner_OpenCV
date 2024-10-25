#ifndef OBJECT_DETECTOR_H
#define OBJECT_DETECTOR_H

#include <opencv2/opencv.hpp>

class ObjectDetector {
public:
    ObjectDetector(const std::string& cascadePath);
    void detectAndDisplay(cv::Mat& frame);

private:
    cv::CascadeClassifier face_cascade;
};

#endif
