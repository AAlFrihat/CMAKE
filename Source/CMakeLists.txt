cmake_minimum_required(VERSION 2.0)
project(HelloApp)

#add_executable(HelloAppBinary main.cpp src/dog.cpp src/operations.cpp)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SOURCE_FILES})
#target_compile_features(HelloAppBinary)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
