# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\JIERUI\Desktop\class\Data_Structure\work1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\JIERUI\Desktop\class\Data_Structure\build

# Include any dependencies generated for this target.
include CMakeFiles/work1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/work1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/work1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/work1.dir/flags.make

CMakeFiles/work1.dir/main.cpp.obj: CMakeFiles/work1.dir/flags.make
CMakeFiles/work1.dir/main.cpp.obj: C:/Users/JIERUI/Desktop/class/Data_Structure/work1/main.cpp
CMakeFiles/work1.dir/main.cpp.obj: CMakeFiles/work1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\JIERUI\Desktop\class\Data_Structure\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/work1.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/work1.dir/main.cpp.obj -MF CMakeFiles\work1.dir\main.cpp.obj.d -o CMakeFiles\work1.dir\main.cpp.obj -c C:\Users\JIERUI\Desktop\class\Data_Structure\work1\main.cpp

CMakeFiles/work1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work1.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\JIERUI\Desktop\class\Data_Structure\work1\main.cpp > CMakeFiles\work1.dir\main.cpp.i

CMakeFiles/work1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work1.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\JIERUI\Desktop\class\Data_Structure\work1\main.cpp -o CMakeFiles\work1.dir\main.cpp.s

# Object files for target work1
work1_OBJECTS = \
"CMakeFiles/work1.dir/main.cpp.obj"

# External object files for target work1
work1_EXTERNAL_OBJECTS =

work1.exe: CMakeFiles/work1.dir/main.cpp.obj
work1.exe: CMakeFiles/work1.dir/build.make
work1.exe: CMakeFiles/work1.dir/linkLibs.rsp
work1.exe: CMakeFiles/work1.dir/objects1.rsp
work1.exe: CMakeFiles/work1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\JIERUI\Desktop\class\Data_Structure\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable work1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\work1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/work1.dir/build: work1.exe
.PHONY : CMakeFiles/work1.dir/build

CMakeFiles/work1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\work1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/work1.dir/clean

CMakeFiles/work1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\JIERUI\Desktop\class\Data_Structure\work1 C:\Users\JIERUI\Desktop\class\Data_Structure\work1 C:\Users\JIERUI\Desktop\class\Data_Structure\build C:\Users\JIERUI\Desktop\class\Data_Structure\build C:\Users\JIERUI\Desktop\class\Data_Structure\build\CMakeFiles\work1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/work1.dir/depend
