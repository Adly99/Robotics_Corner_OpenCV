#include "object_detector.hpp"

ObjectDetector::ObjectDetector(const std::string& cascadePath) {
    if (!face_cascade.load(cascadePath)) {
        std::cerr << "Error loading cascade file." << std::endl;
    }
}

void ObjectDetector::detectAndDisplay(cv::Mat& frame) {
    std::vector<cv::Rect> faces;
    cv::Mat grayFrame;
    cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);
    face_cascade.detectMultiScale(grayFrame, faces);
    
    for (const auto& face : faces) {
        cv::rectangle(frame, face, cv::Scalar(255, 0, 0), 2);
    }
    cv::imshow("Face Detection", frame);
}
