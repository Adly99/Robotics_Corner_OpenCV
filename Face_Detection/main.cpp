#include "FeatureExecutor.hpp"
#include <iostream>

// c+17  and above
#include <filesystem>


int main() 
{
    // Create an instance of the FeatureExecutor class. This class likely contains methods
    // to execute various feature detection or processing tasks.    
    FeatureExecutor executor;

    std::filesystem::path executablePath = std::filesystem::current_path();
    std::filesystem::path dataDirectory = executablePath / "../data"; // If data is one level up
    std::filesystem::path cascadeFile = dataDirectory / "haarcascade_frontalface_default.xml";
    std::string cascadePath = cascadeFile.string();


    // Use a try-catch block to handle potential exceptions during face detection.  This is
    // good practice, as operations like loading the cascade file or accessing the webcam
    // can throw exceptions.
    try {
        // Call the executeFaceDetection method of the FeatureExecutor instance, passing
        // the cascade file path as an argument. This method will likely initialize a
        // FaceDetector object, open the default webcam, capture frames, detect faces in
        // the frames, draw bounding boxes around the detected faces, and display the
        // results in a window.
        executor.executeFaceDetection(cascadePath);
    } catch (const std::exception& e) {

        // If any exception derived from std::exception is caught, print an error message
        // to the standard error stream (cerr) including the exception's what() message.
        // This provides information about the error that occurred.
        std::cerr << "Exception occurred: " << e.what() << std::endl;
        // Return EXIT_FAILURE to indicate that the program terminated due to an error.
        return EXIT_FAILURE;
    }

    // If no exceptions occurred, return EXIT_SUCCESS to indicate successful execution.
    return EXIT_SUCCESS;
}
