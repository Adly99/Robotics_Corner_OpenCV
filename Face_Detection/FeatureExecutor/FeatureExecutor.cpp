/// 
/// @file FeatureExecutor.cpp
/// @brief Implements the FeatureExecutor class for face detection.
/// @author Abdelrahman Elgharabawy
/// @date 2024-11-15 
/// 

#include "FeatureExecutor.hpp" // Includes the FeatureExecutor header file.
#include "opencv2/highgui.hpp" // Includes OpenCV's highgui module.
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>

/// 
/// @brief Constructor for the FeatureExecutor class.
/// 
FeatureExecutor::FeatureExecutor()
{

} 
/// 
/// 
/// @brief Destructor for the FeatureExecutor class.
/// 
FeatureExecutor::~FeatureExecutor()
{
    
} 


/// 
/// @brief Executes face detection on a video stream from the default webcam.
/// 
/// This function initializes a FaceDetector object with the provided cascade file path,
/// opens the default webcam, captures frames, detects faces in the frames, draws
/// bounding boxes around the detected faces, and displays the results in a window.
/// If no faces are detected for 5 seconds, an error message is displayed.
/// The loop continues until the 'Esc' key is pressed.
/// 
/// @param cascadePath The path to the Haar cascade XML file for face detection.
/// 
/// @throws std::runtime_error If the webcam cannot be opened.
/// 
void FeatureExecutor::executeFaceDetection(const std::string& cascadePath) 
{
    FaceDetector faceDetector(cascadePath);

    // Opens the default webcam (device 0).
    cv::VideoCapture cap(0);

    // Checks if the webcam was opened successfully.
    if (!cap.isOpened()) 
    {
        std::cerr << "Error: Cannot open webcam!" << std::endl;
        throw std::runtime_error("Could not open default camera.");
        // Returns from the function if the camera couldn't be opened.
        return;
    }

    // Creates a Mat object to store the captured frames.
    cv::Mat frame;

    // Window name for display.
    std::string winName = "Face Detection";
    cv::namedWindow(winName);

    // Variables for no-face detection timeout
    // Counter for consecutive frames with no faces detected.
    int noFaceFrames = 0; 
    time_t lastFaceDetectionTime = time(0);

    while (true) 
    {
        cap.read(frame);
        // Checks if the frame is empty.
        if (frame.empty()) 
        {
            std::cerr << "Error: No frame captured!" << std::endl;

            break;
        }
        
        // Detects faces in the current frame.
        std::vector<cv::Rect> faces = faceDetector.detectFaces(frame); 

        // Checks if any faces were detected.
        if (faces.empty()) 
        {
            noFaceFrames++;

            // Checks timeout and minimum frame count.
            if (difftime(time(0), lastFaceDetectionTime) >= 5 && noFaceFrames > 25)
            {
                int secondsRemaining = 15 - static_cast<int>(difftime(time(0), lastFaceDetectionTime));
                //Ensure secondsRemaining does not go negative
                secondsRemaining=std::max(0, secondsRemaining);


                std::string message = "No Face Detected! Exiting in " + std::to_string(secondsRemaining) + " seconds";
                cv::putText(frame, message, cv::Point(10, frame.rows - 20), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(0, 0, 255), 2);

                // Check the actual time for exit
                if (secondsRemaining <= 0 )  
                {
                    std::cerr << "No face detected for 15 seconds. Exiting." << std::endl;
                    break;
                }
            }

        } 
        else 
        {
            noFaceFrames = 0; // Resets the no-face frame counter.
            lastFaceDetectionTime = time(0); // Resets the last face detection timestamp.
            for (const auto& face : faces) 
            {
                cv::rectangle(frame, face, cv::Scalar(0, 0, 255), 2); // Draws a rectangle around each detected face.
            }
        }

        cv::imshow(winName, frame); // Displays the frame with or without detected faces.
        if (cv::waitKey(10) == 27) 
        { 
            // Exit on 'Esc' key
            std::cout << "Esc key pressed. Exiting..." << std::endl;
            break;
        }
    }
}
