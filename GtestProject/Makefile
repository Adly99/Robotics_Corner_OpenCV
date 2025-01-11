# @file Makefile
# @brief Makefile for building the Calculator project with Google Test and Google Mock
#
# This Makefile sets up the build environment for the Calculator project, including
# the necessary paths for Google Test and Google Mock libraries and headers.
# It compiles the main Calculator source file and the associated test file,
# and links them into a final executable.
#
# @author Abdelrahman Elgharabawy
# @date 2024-09-27
#
# @usage
# To build the project, run the following command in the terminal:
#   make
#
# To clean the build artifacts, run:
#   make clean

# dir for Google Test and Google Mock
GTEST_LIB = ./test/gtest/lib
GTEST_INCLUDE = ./test/gtest/googletest/include
GMOCK_INCLUDE = ./test/gtest/googlemock/include
# refer to c++
CC=g++
# Build directories
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj

# Create build and object directories if they don't exist
$(shell mkdir -p $(BUILD_DIR) $(OBJ_DIR))

# Build the final test executable
calc.exe: $(OBJ_DIR)/Calculator.o $(OBJ_DIR)/test_calculator.o
	@echo "Linking..."
	@echo "$(CC) -o $(BUILD_DIR)/calc.exe $(OBJ_DIR)/Calculator.o $(OBJ_DIR)/test_calculator.o \
		$(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a \
		$(GTEST_LIB)/libgmock.a $(GTEST_LIB)/libgmock_main.a"
	@$(CC) -o $(BUILD_DIR)/calc.exe $(OBJ_DIR)/Calculator.o $(OBJ_DIR)/test_calculator.o \
		$(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a \
		$(GTEST_LIB)/libgmock.a $(GTEST_LIB)/libgmock_main.a

# Build the main source file
$(OBJ_DIR)/Calculator.o: src/calculator/Calculator.cpp src/calculator/Calculator.hpp
	@echo "Compiling Calculator.cpp..."
	@$(CC) -c src/calculator/Calculator.cpp -o $(OBJ_DIR)/Calculator.o

# Build the test file
$(OBJ_DIR)/test_calculator.o: test/test_calculator.cpp src/calculator/Calculator.hpp
	@echo "Compiling test_calculator.cpp..."
	@$(CC) -I $(GTEST_INCLUDE) -I $(GMOCK_INCLUDE) -I ./src/calculator -c test/test_calculator.cpp -o $(OBJ_DIR)/test_calculator.o

# Clean up object files and executable
clean:
	@rm -rf $(BUILD_DIR)

