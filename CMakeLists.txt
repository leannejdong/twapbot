cmake_minimum_required(VERSION 3.10)

add_compile_options(-std=c++17 -Wall -Wextra -Wunused -pedantic)
project(twapbot)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(
        twapbot
        main.cpp)

target_link_libraries(twapbot ${CONAN_LIBS})