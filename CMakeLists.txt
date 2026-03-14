cmake_minimum_required(VERSION 3.21)

project(RateWorthyGenerator)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
    src/generator.cpp
)

target_link_libraries(${PROJECT_NAME} geode-sdk)
