# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\build"

# Include any dependencies generated for this target.
include CMakeFiles/CyclicExecutivePattern.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CyclicExecutivePattern.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CyclicExecutivePattern.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CyclicExecutivePattern.dir/flags.make

CMakeFiles/CyclicExecutivePattern.dir/main.c.obj: CMakeFiles/CyclicExecutivePattern.dir/flags.make
CMakeFiles/CyclicExecutivePattern.dir/main.c.obj: C:/Backup/GrUp/DesignePatterns/4\ Concurreny\ and\ Resource\ Managment/CyclicExecutivePattern/main.c
CMakeFiles/CyclicExecutivePattern.dir/main.c.obj: CMakeFiles/CyclicExecutivePattern.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CyclicExecutivePattern.dir/main.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CyclicExecutivePattern.dir/main.c.obj -MF CMakeFiles\CyclicExecutivePattern.dir\main.c.obj.d -o CMakeFiles\CyclicExecutivePattern.dir\main.c.obj -c "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\main.c"

CMakeFiles/CyclicExecutivePattern.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CyclicExecutivePattern.dir/main.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\main.c" > CMakeFiles\CyclicExecutivePattern.dir\main.c.i

CMakeFiles/CyclicExecutivePattern.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CyclicExecutivePattern.dir/main.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\main.c" -o CMakeFiles\CyclicExecutivePattern.dir\main.c.s

# Object files for target CyclicExecutivePattern
CyclicExecutivePattern_OBJECTS = \
"CMakeFiles/CyclicExecutivePattern.dir/main.c.obj"

# External object files for target CyclicExecutivePattern
CyclicExecutivePattern_EXTERNAL_OBJECTS =

CyclicExecutivePattern.exe: CMakeFiles/CyclicExecutivePattern.dir/main.c.obj
CyclicExecutivePattern.exe: CMakeFiles/CyclicExecutivePattern.dir/build.make
CyclicExecutivePattern.exe: CMakeFiles/CyclicExecutivePattern.dir/linkLibs.rsp
CyclicExecutivePattern.exe: CMakeFiles/CyclicExecutivePattern.dir/objects1
CyclicExecutivePattern.exe: CMakeFiles/CyclicExecutivePattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CyclicExecutivePattern.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CyclicExecutivePattern.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CyclicExecutivePattern.dir/build: CyclicExecutivePattern.exe
.PHONY : CMakeFiles/CyclicExecutivePattern.dir/build

CMakeFiles/CyclicExecutivePattern.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CyclicExecutivePattern.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CyclicExecutivePattern.dir/clean

CMakeFiles/CyclicExecutivePattern.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern" "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern" "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\build" "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\build" "C:\Backup\GrUp\DesignePatterns\4 Concurreny and Resource Managment\CyclicExecutivePattern\build\CMakeFiles\CyclicExecutivePattern.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CyclicExecutivePattern.dir/depend

