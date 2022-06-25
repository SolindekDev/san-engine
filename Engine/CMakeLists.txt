cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(SAN)

find_package(OpenGL REQUIRED)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(include)

file(GLOB_RECURSE Sources "src/**.cpp")

add_library(SAN STATIC ${Sources})
target_link_libraries(${PROJECT_NAME} -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut)