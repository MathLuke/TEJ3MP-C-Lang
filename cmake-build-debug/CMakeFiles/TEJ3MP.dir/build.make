# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TEJ3MP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TEJ3MP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TEJ3MP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEJ3MP.dir/flags.make

CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj: CMakeFiles/TEJ3MP.dir/flags.make
CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj: ../Exercise\ 6/Ex6.cpp
CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj: CMakeFiles/TEJ3MP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj -MF CMakeFiles\TEJ3MP.dir\Exercise_6\Ex6.cpp.obj.d -o CMakeFiles\TEJ3MP.dir\Exercise_6\Ex6.cpp.obj -c "C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\Exercise 6\Ex6.cpp"

CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\Exercise 6\Ex6.cpp" > CMakeFiles\TEJ3MP.dir\Exercise_6\Ex6.cpp.i

CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\Exercise 6\Ex6.cpp" -o CMakeFiles\TEJ3MP.dir\Exercise_6\Ex6.cpp.s

# Object files for target TEJ3MP
TEJ3MP_OBJECTS = \
"CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj"

# External object files for target TEJ3MP
TEJ3MP_EXTERNAL_OBJECTS =

TEJ3MP.exe: CMakeFiles/TEJ3MP.dir/Exercise_6/Ex6.cpp.obj
TEJ3MP.exe: CMakeFiles/TEJ3MP.dir/build.make
TEJ3MP.exe: CMakeFiles/TEJ3MP.dir/linklibs.rsp
TEJ3MP.exe: CMakeFiles/TEJ3MP.dir/objects1.rsp
TEJ3MP.exe: CMakeFiles/TEJ3MP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TEJ3MP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TEJ3MP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TEJ3MP.dir/build: TEJ3MP.exe
.PHONY : CMakeFiles/TEJ3MP.dir/build

CMakeFiles/TEJ3MP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TEJ3MP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TEJ3MP.dir/clean

CMakeFiles/TEJ3MP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\cmake-build-debug C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\cmake-build-debug C:\Users\mathd\CLionProjects\TEJ3MP-C-Lang\cmake-build-debug\CMakeFiles\TEJ3MP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEJ3MP.dir/depend

