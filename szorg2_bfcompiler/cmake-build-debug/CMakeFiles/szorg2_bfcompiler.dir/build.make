# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/bzsom/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/bzsom/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/szorg2_bfcompiler.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/szorg2_bfcompiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/szorg2_bfcompiler.dir/flags.make

CMakeFiles/szorg2_bfcompiler.dir/main.c.o: CMakeFiles/szorg2_bfcompiler.dir/flags.make
CMakeFiles/szorg2_bfcompiler.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/szorg2_bfcompiler.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/szorg2_bfcompiler.dir/main.c.o -c /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/main.c

CMakeFiles/szorg2_bfcompiler.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/szorg2_bfcompiler.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/main.c > CMakeFiles/szorg2_bfcompiler.dir/main.c.i

CMakeFiles/szorg2_bfcompiler.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/szorg2_bfcompiler.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/main.c -o CMakeFiles/szorg2_bfcompiler.dir/main.c.s

# Object files for target szorg2_bfcompiler
szorg2_bfcompiler_OBJECTS = \
"CMakeFiles/szorg2_bfcompiler.dir/main.c.o"

# External object files for target szorg2_bfcompiler
szorg2_bfcompiler_EXTERNAL_OBJECTS =

szorg2_bfcompiler.exe: CMakeFiles/szorg2_bfcompiler.dir/main.c.o
szorg2_bfcompiler.exe: CMakeFiles/szorg2_bfcompiler.dir/build.make
szorg2_bfcompiler.exe: CMakeFiles/szorg2_bfcompiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable szorg2_bfcompiler.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/szorg2_bfcompiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/szorg2_bfcompiler.dir/build: szorg2_bfcompiler.exe
.PHONY : CMakeFiles/szorg2_bfcompiler.dir/build

CMakeFiles/szorg2_bfcompiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/szorg2_bfcompiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/szorg2_bfcompiler.dir/clean

CMakeFiles/szorg2_bfcompiler.dir/depend:
	cd /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug /cygdrive/d/programok/progalap1_labor/szorg2_bfcompiler/cmake-build-debug/CMakeFiles/szorg2_bfcompiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/szorg2_bfcompiler.dir/depend

