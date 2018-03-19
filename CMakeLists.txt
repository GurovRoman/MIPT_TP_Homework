cmake_minimum_required(VERSION 3.8)
project(TP_project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp concrete_factories.cpp forsen_units.cpp cancer_units.cpp)
add_executable(TP_project ${SOURCE_FILES})