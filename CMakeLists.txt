cmake_minimum_required(VERSION 2.8)
project (itk-vtk)
set (version 1.0)

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

include_directories(${PROJECT_SOURCE_DIR}/Source)

add_subdirectory(Source)
add_subdirectory(Testing)
