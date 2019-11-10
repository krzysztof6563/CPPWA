cmake_minimum_required(VERSION 3.5)

project(CPPWA LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -static -static-libgcc -static-libstdc++")

file(GLOB_RECURSE CPPWA_SRC
        "*.hxx"
        "*.cxx"
        "src/*.hpp"
        "src/*.h"
        "src/*.cpp"
        )

add_executable(CPPWA ${CPPWA_SRC})
set_target_properties(
        CPPWA
        PROPERTIES
        SUFFIX ".cgi"
)
