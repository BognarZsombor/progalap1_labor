# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\programok\progalap1_labor\lab8_hf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\programok\progalap1_labor\lab8_hf\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab8_hf.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab8_hf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab8_hf.dir/flags.make

CMakeFiles/lab8_hf.dir/main.c.obj: CMakeFiles/lab8_hf.dir/flags.make
CMakeFiles/lab8_hf.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programok\progalap1_labor\lab8_hf\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab8_hf.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lab8_hf.dir\main.c.obj -c D:\programok\progalap1_labor\lab8_hf\main.c

CMakeFiles/lab8_hf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab8_hf.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\programok\progalap1_labor\lab8_hf\main.c > CMakeFiles\lab8_hf.dir\main.c.i

CMakeFiles/lab8_hf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab8_hf.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\programok\progalap1_labor\lab8_hf\main.c -o CMakeFiles\lab8_hf.dir\main.c.s

# Object files for target lab8_hf
lab8_hf_OBJECTS = \
"CMakeFiles/lab8_hf.dir/main.c.obj"

# External object files for target lab8_hf
lab8_hf_EXTERNAL_OBJECTS =

lab8_hf.exe: CMakeFiles/lab8_hf.dir/main.c.obj
lab8_hf.exe: CMakeFiles/lab8_hf.dir/build.make
lab8_hf.exe: CMakeFiles/lab8_hf.dir/linklibs.rsp
lab8_hf.exe: CMakeFiles/lab8_hf.dir/objects1.rsp
lab8_hf.exe: CMakeFiles/lab8_hf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\programok\progalap1_labor\lab8_hf\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab8_hf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab8_hf.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab8_hf.dir/build: lab8_hf.exe
.PHONY : CMakeFiles/lab8_hf.dir/build

CMakeFiles/lab8_hf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab8_hf.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab8_hf.dir/clean

CMakeFiles/lab8_hf.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\programok\progalap1_labor\lab8_hf D:\programok\progalap1_labor\lab8_hf D:\programok\progalap1_labor\lab8_hf\cmake-build-debug D:\programok\progalap1_labor\lab8_hf\cmake-build-debug D:\programok\progalap1_labor\lab8_hf\cmake-build-debug\CMakeFiles\lab8_hf.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab8_hf.dir/depend

