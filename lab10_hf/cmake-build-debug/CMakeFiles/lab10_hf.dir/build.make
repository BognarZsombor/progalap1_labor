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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lab10_hf.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab10_hf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab10_hf.dir/flags.make

CMakeFiles/lab10_hf.dir/main.c.obj: CMakeFiles/lab10_hf.dir/flags.make
CMakeFiles/lab10_hf.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab10_hf.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lab10_hf.dir\main.c.obj -c "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\main.c"

CMakeFiles/lab10_hf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab10_hf.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\main.c" > CMakeFiles\lab10_hf.dir\main.c.i

CMakeFiles/lab10_hf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab10_hf.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\main.c" -o CMakeFiles\lab10_hf.dir\main.c.s

# Object files for target lab10_hf
lab10_hf_OBJECTS = \
"CMakeFiles/lab10_hf.dir/main.c.obj"

# External object files for target lab10_hf
lab10_hf_EXTERNAL_OBJECTS =

lab10_hf.exe: CMakeFiles/lab10_hf.dir/main.c.obj
lab10_hf.exe: CMakeFiles/lab10_hf.dir/build.make
lab10_hf.exe: CMakeFiles/lab10_hf.dir/linklibs.rsp
lab10_hf.exe: CMakeFiles/lab10_hf.dir/objects1.rsp
lab10_hf.exe: CMakeFiles/lab10_hf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab10_hf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab10_hf.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab10_hf.dir/build: lab10_hf.exe
.PHONY : CMakeFiles/lab10_hf.dir/build

CMakeFiles/lab10_hf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab10_hf.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab10_hf.dir/clean

CMakeFiles/lab10_hf.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf" "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf" "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\cmake-build-debug" "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\cmake-build-debug" "C:\Users\Zsombor\Documents\CLion projects\progalap1_labor\lab10_hf\cmake-build-debug\CMakeFiles\lab10_hf.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab10_hf.dir/depend
