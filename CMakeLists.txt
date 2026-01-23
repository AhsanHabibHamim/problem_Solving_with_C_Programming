cmake_minimum_required(VERSION 3.16)
project(PROBLEM_SOLVING)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include all source files in the Array and Code_Forces folders
file(GLOB_RECURSE SOURCES
    "Array/*.cpp"
    "Code_Forces/*.cpp"
)

# Create executable (you can rename it if you want)
add_executable(PROBLEM_SOLVING ${SOURCES})
