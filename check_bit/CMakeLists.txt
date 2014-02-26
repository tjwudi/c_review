# Specify the min version of CMake required
cmake_minimum_required(VERSION 2.6)
# Specify the project name 
project(check_bit)

# Add -O2 optimization
add_definitions(-O2)

# Load executables
add_executable(check_bit check_bit.cpp)
