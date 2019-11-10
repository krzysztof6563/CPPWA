cmake_minimum_required(VERSION 3.5)

project(CPPWA LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB CPPWA_SRC
    "*.hpp"
    "*.cpp"
    "src/**/*.hpp"
    "src/**/*.cpp"
    "src/*.hpp"
    "src/*.cpp"
)

add_executable(CPPWA ${CPPWA_SRC})
set_target_properties(
    CPPWA
    PROPERTIES
        SUFFIX ".cgi"
)
