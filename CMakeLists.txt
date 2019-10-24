cmake_minimum_required(VERSION 3.9)
project(CS4202_P1_Branch_Prediction)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS4202_P1_Branch_Prediction src/main.cpp src/branch.cpp src/predictor.cpp src/alwaysTaken.cpp src/twoBit.cpp src/GShare.cpp src/profiled.cpp)