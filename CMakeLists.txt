cmake_minimum_required(VERSION 3.26)
project(libtard C)

set(CMAKE_C_STANDARD 11)

add_library(libtard
        tard.c
        tard.h)

add_executable(libtard_example example.c)
target_link_libraries(libtard_example libtard)