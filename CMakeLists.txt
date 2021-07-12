cmake_minimum_required(VERSION 3.19)
project(ET580)

set(CMAKE_CXX_STANDARD 14)

add_executable(ET580 main.cpp Lecture01.cpp ClassesI.cpp ClassesIPractice.cpp ClasssesII.cpp Composition_by_value.cpp Nested_class.cpp Temporary-object.cpp Lvalue_vs_Rvalue.cpp Homework1.cpp N_Queens.cpp Operator_Overloading.cpp)
add_executable(Lecture01 Lecture01.cpp)