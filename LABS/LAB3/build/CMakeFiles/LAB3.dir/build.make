# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build"

# Include any dependencies generated for this target.
include CMakeFiles/LAB3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LAB3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LAB3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LAB3.dir/flags.make

CMakeFiles/LAB3.dir/src/main.c.obj: CMakeFiles/LAB3.dir/flags.make
CMakeFiles/LAB3.dir/src/main.c.obj: ../src/main.c
CMakeFiles/LAB3.dir/src/main.c.obj: CMakeFiles/LAB3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LAB3.dir/src/main.c.obj"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LAB3.dir/src/main.c.obj -MF CMakeFiles/LAB3.dir/src/main.c.obj.d -o CMakeFiles/LAB3.dir/src/main.c.obj -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/src/main.c"

CMakeFiles/LAB3.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LAB3.dir/src/main.c.i"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/src/main.c" > CMakeFiles/LAB3.dir/src/main.c.i

CMakeFiles/LAB3.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LAB3.dir/src/main.c.s"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/src/main.c" -o CMakeFiles/LAB3.dir/src/main.c.s

# Object files for target LAB3
LAB3_OBJECTS = \
"CMakeFiles/LAB3.dir/src/main.c.obj"

# External object files for target LAB3
LAB3_EXTERNAL_OBJECTS =

LAB3: CMakeFiles/LAB3.dir/src/main.c.obj
LAB3: CMakeFiles/LAB3.dir/build.make
LAB3: MDIO/libMDIO.a
LAB3: CMakeFiles/LAB3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LAB3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LAB3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LAB3.dir/build: LAB3
.PHONY : CMakeFiles/LAB3.dir/build

CMakeFiles/LAB3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LAB3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LAB3.dir/clean

CMakeFiles/LAB3.dir/depend:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB3/build/CMakeFiles/LAB3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LAB3.dir/depend

