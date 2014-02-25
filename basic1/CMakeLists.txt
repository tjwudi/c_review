# Set variables
set(fibonacci fibonacci fib.c)

# Specify the version of CMAKE required to compile this project
cmake_minimum_required(VERSION 2.6) 
# Specify the project name
project(fibonacci)

# Should use c99
add_definitions(-std=c99)
# This tells CMake to fib.c and name it fibonacci
add_executable(${fibonacci})




