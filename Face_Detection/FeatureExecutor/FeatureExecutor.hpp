#ifndef FEATURE_EXECUTOR_HPP
#define FEATURE_EXECUTOR_HPP

#include "FaceDetector.hpp"

class FeatureExecutor 
{
    public:
        // Constructor and destructor
        FeatureExecutor();
        ~FeatureExecutor();
        // Start feature execution using FaceDetector
        void executeFaceDetection(const std::string& cascadePath);


};

#endif // FEATURE_EXECUTOR_HPP
