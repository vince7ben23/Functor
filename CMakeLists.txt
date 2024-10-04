cmake_minimum_required(VERSION 3.5.0)
project(functor)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main.out src/main.cpp)
add_subdirectory(src/utils)

target_link_libraries(main.out PUBLIC power)
target_include_directories(main.out PUBLIC
                          "${PROJECT_SOURCE_DIR}/src/utils"
                          )

message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
