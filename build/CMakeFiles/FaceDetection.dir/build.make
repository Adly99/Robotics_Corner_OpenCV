# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build

# Include any dependencies generated for this target.
include CMakeFiles/FaceDetection.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FaceDetection.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FaceDetection.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FaceDetection.dir/flags.make

CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o: CMakeFiles/FaceDetection.dir/flags.make
CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o: /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FeatureExecutor/FeatureExecutor.cpp
CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o: CMakeFiles/FaceDetection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o -MF CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o.d -o CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o -c /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FeatureExecutor/FeatureExecutor.cpp

CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FeatureExecutor/FeatureExecutor.cpp > CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.i

CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FeatureExecutor/FeatureExecutor.cpp -o CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.s

CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o: CMakeFiles/FaceDetection.dir/flags.make
CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o: /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FaceDetector/FaceDetector.cpp
CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o: CMakeFiles/FaceDetection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o -MF CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o.d -o CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o -c /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FaceDetector/FaceDetector.cpp

CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FaceDetector/FaceDetector.cpp > CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.i

CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/FaceDetector/FaceDetector.cpp -o CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.s

CMakeFiles/FaceDetection.dir/main.cpp.o: CMakeFiles/FaceDetection.dir/flags.make
CMakeFiles/FaceDetection.dir/main.cpp.o: /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/main.cpp
CMakeFiles/FaceDetection.dir/main.cpp.o: CMakeFiles/FaceDetection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FaceDetection.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FaceDetection.dir/main.cpp.o -MF CMakeFiles/FaceDetection.dir/main.cpp.o.d -o CMakeFiles/FaceDetection.dir/main.cpp.o -c /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/main.cpp

CMakeFiles/FaceDetection.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FaceDetection.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/main.cpp > CMakeFiles/FaceDetection.dir/main.cpp.i

CMakeFiles/FaceDetection.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FaceDetection.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/main.cpp -o CMakeFiles/FaceDetection.dir/main.cpp.s

# Object files for target FaceDetection
FaceDetection_OBJECTS = \
"CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o" \
"CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o" \
"CMakeFiles/FaceDetection.dir/main.cpp.o"

# External object files for target FaceDetection
FaceDetection_EXTERNAL_OBJECTS =

FaceDetection: CMakeFiles/FaceDetection.dir/FeatureExecutor/FeatureExecutor.cpp.o
FaceDetection: CMakeFiles/FaceDetection.dir/FaceDetector/FaceDetector.cpp.o
FaceDetection: CMakeFiles/FaceDetection.dir/main.cpp.o
FaceDetection: CMakeFiles/FaceDetection.dir/build.make
FaceDetection: /usr/local/lib/libopencv_gapi.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_stitching.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_aruco.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_bgsegm.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_bioinspired.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_ccalib.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudabgsegm.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudafeatures2d.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudaobjdetect.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudastereo.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_dnn_objdetect.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_dnn_superres.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_dpm.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_face.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_freetype.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_fuzzy.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_hfs.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_img_hash.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_intensity_transform.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_line_descriptor.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_mcc.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_quality.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_rapid.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_reg.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_rgbd.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_saliency.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_signal.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_stereo.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_structured_light.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_superres.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_surface_matching.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_tracking.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_videostab.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_wechat_qrcode.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_xfeatures2d.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_xobjdetect.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_xphoto.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_shape.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_highgui.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_datasets.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_plot.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_text.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_ml.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_phase_unwrapping.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_videoio.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudaoptflow.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudalegacy.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudawarping.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_optflow.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_ximgproc.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_video.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_imgcodecs.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_objdetect.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_calib3d.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_dnn.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_features2d.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_flann.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_photo.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudaimgproc.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudafilters.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_imgproc.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudaarithm.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_core.so.4.10.0
FaceDetection: /usr/local/lib/libopencv_cudev.so.4.10.0
FaceDetection: CMakeFiles/FaceDetection.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable FaceDetection"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FaceDetection.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FaceDetection.dir/build: FaceDetection
.PHONY : CMakeFiles/FaceDetection.dir/build

CMakeFiles/FaceDetection.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FaceDetection.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FaceDetection.dir/clean

CMakeFiles/FaceDetection.dir/depend:
	cd /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build /home/abdelrahman-elgharabawy/Documents/Projects/Robotics_Corner_OpenCV/build/CMakeFiles/FaceDetection.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/FaceDetection.dir/depend

