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
CMAKE_SOURCE_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build"

# Include any dependencies generated for this target.
include MPORT/CMakeFiles/MPORT.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include MPORT/CMakeFiles/MPORT.dir/compiler_depend.make

# Include the progress variables for this target.
include MPORT/CMakeFiles/MPORT.dir/progress.make

# Include the compile flags for this target's objects.
include MPORT/CMakeFiles/MPORT.dir/flags.make

MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.obj: MPORT/CMakeFiles/MPORT.dir/flags.make
MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.obj: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c
MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.obj: MPORT/CMakeFiles/MPORT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.obj"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.obj -MF CMakeFiles/MPORT.dir/src/MPORT.c.obj.d -o CMakeFiles/MPORT.dir/src/MPORT.c.obj -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c"

MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MPORT.dir/src/MPORT.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c" > CMakeFiles/MPORT.dir/src/MPORT.c.i

MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MPORT.dir/src/MPORT.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c" -o CMakeFiles/MPORT.dir/src/MPORT.c.s

MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj: MPORT/CMakeFiles/MPORT.dir/flags.make
MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c
MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj: MPORT/CMakeFiles/MPORT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj -MF CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj.d -o CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c"

MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c" > CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.i

MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c" -o CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.s

# Object files for target MPORT
MPORT_OBJECTS = \
"CMakeFiles/MPORT.dir/src/MPORT.c.obj" \
"CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj"

# External object files for target MPORT
MPORT_EXTERNAL_OBJECTS =

MPORT/libMPORT.a: MPORT/CMakeFiles/MPORT.dir/src/MPORT.c.obj
MPORT/libMPORT.a: MPORT/CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.obj
MPORT/libMPORT.a: MPORT/CMakeFiles/MPORT.dir/build.make
MPORT/libMPORT.a: MPORT/CMakeFiles/MPORT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libMPORT.a"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && $(CMAKE_COMMAND) -P CMakeFiles/MPORT.dir/cmake_clean_target.cmake
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MPORT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MPORT/CMakeFiles/MPORT.dir/build: MPORT/libMPORT.a
.PHONY : MPORT/CMakeFiles/MPORT.dir/build

MPORT/CMakeFiles/MPORT.dir/clean:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" && $(CMAKE_COMMAND) -P CMakeFiles/MPORT.dir/cmake_clean.cmake
.PHONY : MPORT/CMakeFiles/MPORT.dir/clean

MPORT/CMakeFiles/MPORT.dir/depend:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/Testing/Lab1/build/MPORT/CMakeFiles/MPORT.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : MPORT/CMakeFiles/MPORT.dir/depend

