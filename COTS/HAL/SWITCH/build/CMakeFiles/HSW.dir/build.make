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
CMAKE_SOURCE_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build"

# Include any dependencies generated for this target.
include CMakeFiles/HSW.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HSW.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HSW.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HSW.dir/flags.make

CMakeFiles/HSW.dir/src/HSW.c.o: CMakeFiles/HSW.dir/flags.make
CMakeFiles/HSW.dir/src/HSW.c.o: ../src/HSW.c
CMakeFiles/HSW.dir/src/HSW.c.o: CMakeFiles/HSW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HSW.dir/src/HSW.c.o"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/HSW.dir/src/HSW.c.o -MF CMakeFiles/HSW.dir/src/HSW.c.o.d -o CMakeFiles/HSW.dir/src/HSW.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/src/HSW.c"

CMakeFiles/HSW.dir/src/HSW.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HSW.dir/src/HSW.c.i"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/src/HSW.c" > CMakeFiles/HSW.dir/src/HSW.c.i

CMakeFiles/HSW.dir/src/HSW.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HSW.dir/src/HSW.c.s"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/src/HSW.c" -o CMakeFiles/HSW.dir/src/HSW.c.s

CMakeFiles/HSW.dir/src/HSW_LCFG.c.o: CMakeFiles/HSW.dir/flags.make
CMakeFiles/HSW.dir/src/HSW_LCFG.c.o: ../src/HSW_LCFG.c
CMakeFiles/HSW.dir/src/HSW_LCFG.c.o: CMakeFiles/HSW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HSW.dir/src/HSW_LCFG.c.o"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/HSW.dir/src/HSW_LCFG.c.o -MF CMakeFiles/HSW.dir/src/HSW_LCFG.c.o.d -o CMakeFiles/HSW.dir/src/HSW_LCFG.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/src/HSW_LCFG.c"

CMakeFiles/HSW.dir/src/HSW_LCFG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HSW.dir/src/HSW_LCFG.c.i"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/src/HSW_LCFG.c" > CMakeFiles/HSW.dir/src/HSW_LCFG.c.i

CMakeFiles/HSW.dir/src/HSW_LCFG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HSW.dir/src/HSW_LCFG.c.s"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/src/HSW_LCFG.c" -o CMakeFiles/HSW.dir/src/HSW_LCFG.c.s

# Object files for target HSW
HSW_OBJECTS = \
"CMakeFiles/HSW.dir/src/HSW.c.o" \
"CMakeFiles/HSW.dir/src/HSW_LCFG.c.o"

# External object files for target HSW
HSW_EXTERNAL_OBJECTS =

libHSW.a: CMakeFiles/HSW.dir/src/HSW.c.o
libHSW.a: CMakeFiles/HSW.dir/src/HSW_LCFG.c.o
libHSW.a: CMakeFiles/HSW.dir/build.make
libHSW.a: CMakeFiles/HSW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libHSW.a"
	$(CMAKE_COMMAND) -P CMakeFiles/HSW.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HSW.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HSW.dir/build: libHSW.a
.PHONY : CMakeFiles/HSW.dir/build

CMakeFiles/HSW.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HSW.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HSW.dir/clean

CMakeFiles/HSW.dir/depend:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/SWITCH/build/CMakeFiles/HSW.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HSW.dir/depend

