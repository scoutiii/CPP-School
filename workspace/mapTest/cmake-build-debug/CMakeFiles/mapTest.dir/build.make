# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /cygdrive/c/Users/scout/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/scout/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/CCode/CPP-School/workspace/mapTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mapTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mapTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mapTest.dir/flags.make

CMakeFiles/mapTest.dir/main.cpp.o: CMakeFiles/mapTest.dir/flags.make
CMakeFiles/mapTest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mapTest.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mapTest.dir/main.cpp.o -c /cygdrive/d/CCode/CPP-School/workspace/mapTest/main.cpp

CMakeFiles/mapTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapTest.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/CCode/CPP-School/workspace/mapTest/main.cpp > CMakeFiles/mapTest.dir/main.cpp.i

CMakeFiles/mapTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapTest.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/CCode/CPP-School/workspace/mapTest/main.cpp -o CMakeFiles/mapTest.dir/main.cpp.s

CMakeFiles/mapTest.dir/MAP.cpp.o: CMakeFiles/mapTest.dir/flags.make
CMakeFiles/mapTest.dir/MAP.cpp.o: ../MAP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mapTest.dir/MAP.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mapTest.dir/MAP.cpp.o -c /cygdrive/d/CCode/CPP-School/workspace/mapTest/MAP.cpp

CMakeFiles/mapTest.dir/MAP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapTest.dir/MAP.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/CCode/CPP-School/workspace/mapTest/MAP.cpp > CMakeFiles/mapTest.dir/MAP.cpp.i

CMakeFiles/mapTest.dir/MAP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapTest.dir/MAP.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/CCode/CPP-School/workspace/mapTest/MAP.cpp -o CMakeFiles/mapTest.dir/MAP.cpp.s

# Object files for target mapTest
mapTest_OBJECTS = \
"CMakeFiles/mapTest.dir/main.cpp.o" \
"CMakeFiles/mapTest.dir/MAP.cpp.o"

# External object files for target mapTest
mapTest_EXTERNAL_OBJECTS =

mapTest.exe: CMakeFiles/mapTest.dir/main.cpp.o
mapTest.exe: CMakeFiles/mapTest.dir/MAP.cpp.o
mapTest.exe: CMakeFiles/mapTest.dir/build.make
mapTest.exe: CMakeFiles/mapTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable mapTest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mapTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mapTest.dir/build: mapTest.exe

.PHONY : CMakeFiles/mapTest.dir/build

CMakeFiles/mapTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mapTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mapTest.dir/clean

CMakeFiles/mapTest.dir/depend:
	cd /cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/CCode/CPP-School/workspace/mapTest /cygdrive/d/CCode/CPP-School/workspace/mapTest /cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug /cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug /cygdrive/d/CCode/CPP-School/workspace/mapTest/cmake-build-debug/CMakeFiles/mapTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mapTest.dir/depend

