# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = "C:/Program Files (x86)/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files (x86)/CMake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:/VS_WorkSpace/Algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/VS_WorkSpace/Algorithm/build

# Include any dependencies generated for this target.
include src/CMakeFiles/srclib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/srclib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/srclib.dir/flags.make

src/CMakeFiles/srclib.dir/test.cpp.obj: src/CMakeFiles/srclib.dir/flags.make
src/CMakeFiles/srclib.dir/test.cpp.obj: src/CMakeFiles/srclib.dir/includes_CXX.rsp
src/CMakeFiles/srclib.dir/test.cpp.obj: ../src/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/VS_WorkSpace/Algorithm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/srclib.dir/test.cpp.obj"
	cd E:/VS_WorkSpace/Algorithm/build/src && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/srclib.dir/test.cpp.obj -c E:/VS_WorkSpace/Algorithm/src/test.cpp

src/CMakeFiles/srclib.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/srclib.dir/test.cpp.i"
	cd E:/VS_WorkSpace/Algorithm/build/src && g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:/VS_WorkSpace/Algorithm/src/test.cpp > CMakeFiles/srclib.dir/test.cpp.i

src/CMakeFiles/srclib.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/srclib.dir/test.cpp.s"
	cd E:/VS_WorkSpace/Algorithm/build/src && g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:/VS_WorkSpace/Algorithm/src/test.cpp -o CMakeFiles/srclib.dir/test.cpp.s

# Object files for target srclib
srclib_OBJECTS = \
"CMakeFiles/srclib.dir/test.cpp.obj"

# External object files for target srclib
srclib_EXTERNAL_OBJECTS =

../lib/libsrclib.a: src/CMakeFiles/srclib.dir/test.cpp.obj
../lib/libsrclib.a: src/CMakeFiles/srclib.dir/build.make
../lib/libsrclib.a: src/CMakeFiles/srclib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:/VS_WorkSpace/Algorithm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libsrclib.a"
	cd E:/VS_WorkSpace/Algorithm/build/src && $(CMAKE_COMMAND) -P CMakeFiles/srclib.dir/cmake_clean_target.cmake
	cd E:/VS_WorkSpace/Algorithm/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/srclib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/srclib.dir/build: ../lib/libsrclib.a

.PHONY : src/CMakeFiles/srclib.dir/build

src/CMakeFiles/srclib.dir/clean:
	cd E:/VS_WorkSpace/Algorithm/build/src && $(CMAKE_COMMAND) -P CMakeFiles/srclib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/srclib.dir/clean

src/CMakeFiles/srclib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/VS_WorkSpace/Algorithm E:/VS_WorkSpace/Algorithm/src E:/VS_WorkSpace/Algorithm/build E:/VS_WorkSpace/Algorithm/build/src E:/VS_WorkSpace/Algorithm/build/src/CMakeFiles/srclib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/srclib.dir/depend
