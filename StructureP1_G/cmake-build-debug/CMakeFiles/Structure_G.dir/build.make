# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\aasna\CLionProjects\Structure_G

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\aasna\CLionProjects\Structure_G\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Structure_G.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Structure_G.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Structure_G.dir/flags.make

CMakeFiles/Structure_G.dir/main.c.obj: CMakeFiles/Structure_G.dir/flags.make
CMakeFiles/Structure_G.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\aasna\CLionProjects\Structure_G\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Structure_G.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Structure_G.dir\main.c.obj   -c C:\Users\aasna\CLionProjects\Structure_G\main.c

CMakeFiles/Structure_G.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Structure_G.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\aasna\CLionProjects\Structure_G\main.c > CMakeFiles\Structure_G.dir\main.c.i

CMakeFiles/Structure_G.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Structure_G.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\aasna\CLionProjects\Structure_G\main.c -o CMakeFiles\Structure_G.dir\main.c.s

# Object files for target Structure_G
Structure_G_OBJECTS = \
"CMakeFiles/Structure_G.dir/main.c.obj"

# External object files for target Structure_G
Structure_G_EXTERNAL_OBJECTS =

Structure_G.exe: CMakeFiles/Structure_G.dir/main.c.obj
Structure_G.exe: CMakeFiles/Structure_G.dir/build.make
Structure_G.exe: CMakeFiles/Structure_G.dir/linklibs.rsp
Structure_G.exe: CMakeFiles/Structure_G.dir/objects1.rsp
Structure_G.exe: CMakeFiles/Structure_G.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\aasna\CLionProjects\Structure_G\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Structure_G.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Structure_G.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Structure_G.dir/build: Structure_G.exe

.PHONY : CMakeFiles/Structure_G.dir/build

CMakeFiles/Structure_G.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Structure_G.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Structure_G.dir/clean

CMakeFiles/Structure_G.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\aasna\CLionProjects\Structure_G C:\Users\aasna\CLionProjects\Structure_G C:\Users\aasna\CLionProjects\Structure_G\cmake-build-debug C:\Users\aasna\CLionProjects\Structure_G\cmake-build-debug C:\Users\aasna\CLionProjects\Structure_G\cmake-build-debug\CMakeFiles\Structure_G.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Structure_G.dir/depend

