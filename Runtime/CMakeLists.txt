
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(SAN-RUNTIME)

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(../Engine/include)

file(GLOB_RECURSE Sources "main.cpp")

add_executable(${PROJECT_NAME} ${Sources})
target_link_libraries(${PROJECT_NAME} -lSAN -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut)