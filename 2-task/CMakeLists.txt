cmake_minimum_required(VERSION 3.0.0)
project(2-task VERSION 0.1.0)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(2-task main.cpp)

target_link_libraries(2-task PRIVATE nlohmann_json::nlohmann_json)