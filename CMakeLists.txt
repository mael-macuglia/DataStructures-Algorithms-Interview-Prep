cmake_minimum_required(VERSION 3.10)
project(DataStructures-Interview-Prep)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

# Create executable for LinkedList test
add_executable(test-LinkedList 
    Playground/test-LinkedList.cpp
    src/linear/LinkedList/LinkedList.cpp
    src/linear/LinkedList/Node.cpp
)

# Add include directories
target_include_directories(test-LinkedList PRIVATE 
    src
    src/linear/LinkedList
    src/hashing
)