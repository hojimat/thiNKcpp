cmake_minimum_required(VERSION 3.27)
project(nknorms VERSION 1.0 LANGUAGES CXX)

add_executable(NKProg
    src/main.cpp)

target_include_directories(NKProg
    PUBLIC
        include/
)