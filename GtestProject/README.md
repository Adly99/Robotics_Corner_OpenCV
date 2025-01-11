GtestProject
===
## Papar Information
- Authors:  `Abdelrahman Elgharabawy`

## Install & Dependence
- C++ compiler (e.g., g++, clang++)
- CMake (build system generator)
- Google Test (included via CMake, or you can link it externally)

## Installation

Follow these steps to clone, build the project:

1. **Clone the repository**:
  ```bash
  git clone https://github.com/your-username/gtestproject.git
  cd GtestProject

2. **Configure and build the project**: 
  ```Run the following commands to clean the build directory, configure the project using CMake, and build it:

***rm -rf build/* && cmake -S . -B build && cmake --build build -j**
- rm -rf build/: Clears the build directory to ensure a clean build.
- cmake -S . -B build: Configures the project from the source (.) and generates build files in the build/ directory.
- cmake --build build -j: Builds the project using all available CPU cores for faster compilation.
  ```
## Use
- for build calculator
  ```
  rm -rf build/* && cmake -S . -B build -DTEST_FILE=test_calculator && cmake --build build -j
  ```
- for build mycode "example"
  ```
  rm -rf build/* && cmake -S . -B build -DTEST_FILE=test_my_code && cmake --build build -j
  ```
- for run "example"
  ```
  cd /build/bin 
  ./my_code
  ./my_code --gtest_verbose=1
  or
  cd /build
  ctest
  ```

## Directory Hierarchy
```
|—— .gitignore
|—— CMakeLists.txt
|—— LICENSE
|—— build
|—— src
|    |—— calculator
|        |—— Calculator.cpp
|        |—— Calculator.hpp
|    |—— testproject
|        |—— my_code.cpp
|        |—— my_code.hpp
|—— test
|    |—— test_calculator.cpp
|    |—— test_my_code.cpp
```
## Code Details
### Tested Platform
- software
  ```
  OS: Debian unstable, Ubuntu LTS
  Python 3.12.3 
  CMake: version 3.30.3
  Google Test: version 1.15.2
  ```
- hardware
  ```
  GPU: Nvidia GTX1050Ti
  RAM: 16GB
  ```

## References
- https://google.github.io/googletest/

## License

## Citing
@misc{gtestproject,
  author = {Abdelrahman Elgharabawy},
  title = {GtestProject},
  year = {2024},
  url = {https://github.com/Adly99/GtestProject}
}
