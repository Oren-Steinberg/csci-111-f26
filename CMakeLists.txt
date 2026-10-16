cmake_minimum_required(VERSION 3.16)

project(excelCounter LANGUAGES CXX)

find_package(Xlnt CONFIG REQUIRED)

add_executable(excelCounter excelCounter.cpp)
target_compile_features(excelCounter PRIVATE cxx_std_17)
target_link_libraries(excelCounter PRIVATE xlnt::xlnt)
