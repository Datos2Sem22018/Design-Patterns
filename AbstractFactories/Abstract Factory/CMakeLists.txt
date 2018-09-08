cmake_minimum_required(VERSION 3.10)
project(Abstract_Factory)

set(CMAKE_CXX_STANDARD 11)

add_executable(Abstract_Factory main.cpp Animal.cpp Animal.h Lion.cpp Lion.h Elephant.cpp Elephant.h Deer.cpp Deer.h Factory.h Wolf.cpp Wolf.h Europeans.cpp Europeans.h Africans.cpp Africans.h)