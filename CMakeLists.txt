cmake_minimum_required(VERSION 3.10)
project(DataStructures-Interview-Prep)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

# Set Eigen path
set(EIGEN3_INCLUDE_DIR "/opt/homebrew/Cellar/eigen/3.4.0_1/include/eigen3")

# Create executable for LinkedList test
add_executable(test-LinkedList 
    Playground/test-LinkedList.cpp
    src/linear/LinkedList/LinkedList.cpp
    src/linear/LinkedList/Node.cpp
)

# Add include directories for LinkedList
target_include_directories(test-LinkedList PRIVATE 
    src
    src/linear/LinkedList
    src/hashing
)

# Numerical essentials executables
add_executable(cpp-template-vector-basic numerical-essentials/cpp-template-vector-basic.cpp)
add_executable(cpp-functions numerical-essentials/cpp-functions.cpp)
add_executable(some-eigen numerical-essentials/some-eigen.cpp)
add_executable(square-lin-sys numerical-essentials/square-lin-sys.cpp)
add_executable(general-lin-sys numerical-essentials/general-lin-sys.cpp)

# Add Eigen include directories to all numerical essentials targets
target_include_directories(cpp-template-vector-basic PRIVATE ${EIGEN3_INCLUDE_DIR})
target_include_directories(cpp-functions PRIVATE ${EIGEN3_INCLUDE_DIR})
target_include_directories(some-eigen PRIVATE ${EIGEN3_INCLUDE_DIR})
target_include_directories(square-lin-sys PRIVATE ${EIGEN3_INCLUDE_DIR})
target_include_directories(general-lin-sys PRIVATE ${EIGEN3_INCLUDE_DIR})