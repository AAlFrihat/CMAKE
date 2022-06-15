cmake_minimum_required(VERSION 2.0)
project(HelloApp)

add_executable(HelloAppBinary main.cpp src/dog.cpp src/operations.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_14)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)