cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME intro_oop)
project ("${PROJECT_NAME}")

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc")

add_executable("${PROJECT_NAME}" main.cpp)
#копирование файла 
#file(COPY "input.txt" DESTINATION "/")