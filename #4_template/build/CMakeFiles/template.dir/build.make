# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/john/Desktop/c_review/#4_template"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/john/Desktop/c_review/#4_template/build"

# Include any dependencies generated for this target.
include CMakeFiles/template.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/template.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/template.dir/flags.make

CMakeFiles/template.dir/main.cpp.o: CMakeFiles/template.dir/flags.make
CMakeFiles/template.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/home/john/Desktop/c_review/#4_template/build/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/template.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/template.dir/main.cpp.o -c "/home/john/Desktop/c_review/#4_template/main.cpp"

CMakeFiles/template.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/home/john/Desktop/c_review/#4_template/main.cpp" > CMakeFiles/template.dir/main.cpp.i

CMakeFiles/template.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/home/john/Desktop/c_review/#4_template/main.cpp" -o CMakeFiles/template.dir/main.cpp.s

CMakeFiles/template.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/template.dir/main.cpp.o.requires

CMakeFiles/template.dir/main.cpp.o.provides: CMakeFiles/template.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/template.dir/build.make CMakeFiles/template.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/template.dir/main.cpp.o.provides

CMakeFiles/template.dir/main.cpp.o.provides.build: CMakeFiles/template.dir/main.cpp.o

# Object files for target template
template_OBJECTS = \
"CMakeFiles/template.dir/main.cpp.o"

# External object files for target template
template_EXTERNAL_OBJECTS =

template: CMakeFiles/template.dir/main.cpp.o
template: CMakeFiles/template.dir/build.make
template: CMakeFiles/template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable template"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/template.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/template.dir/build: template
.PHONY : CMakeFiles/template.dir/build

CMakeFiles/template.dir/requires: CMakeFiles/template.dir/main.cpp.o.requires
.PHONY : CMakeFiles/template.dir/requires

CMakeFiles/template.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/template.dir/cmake_clean.cmake
.PHONY : CMakeFiles/template.dir/clean

CMakeFiles/template.dir/depend:
	cd "/home/john/Desktop/c_review/#4_template/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/john/Desktop/c_review/#4_template" "/home/john/Desktop/c_review/#4_template" "/home/john/Desktop/c_review/#4_template/build" "/home/john/Desktop/c_review/#4_template/build" "/home/john/Desktop/c_review/#4_template/build/CMakeFiles/template.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/template.dir/depend

