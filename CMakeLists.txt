cmake_minimum_required (VERSION 3.10)

project (CppMessenger)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "./src/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (CppMessenger ${source_files})
