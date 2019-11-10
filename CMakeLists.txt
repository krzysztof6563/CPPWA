cmake_minimum_required(VERSION 3.5)

project(CPPWA LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CPPWA main.cpp)
set_target_properties(
    CPPWA
    PROPERTIES
        SUFFIX ".cgi"
)
