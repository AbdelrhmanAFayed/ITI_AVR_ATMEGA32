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
CMAKE_SOURCE_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build"

# Include any dependencies generated for this target.
include HLED/CMakeFiles/HLED.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include HLED/CMakeFiles/HLED.dir/compiler_depend.make

# Include the progress variables for this target.
include HLED/CMakeFiles/HLED.dir/progress.make

# Include the compile flags for this target's objects.
include HLED/CMakeFiles/HLED.dir/flags.make

HLED/CMakeFiles/HLED.dir/src/HLED.c.obj: HLED/CMakeFiles/HLED.dir/flags.make
HLED/CMakeFiles/HLED.dir/src/HLED.c.obj: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED.c
HLED/CMakeFiles/HLED.dir/src/HLED.c.obj: HLED/CMakeFiles/HLED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object HLED/CMakeFiles/HLED.dir/src/HLED.c.obj"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT HLED/CMakeFiles/HLED.dir/src/HLED.c.obj -MF CMakeFiles/HLED.dir/src/HLED.c.obj.d -o CMakeFiles/HLED.dir/src/HLED.c.obj -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED.c"

HLED/CMakeFiles/HLED.dir/src/HLED.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HLED.dir/src/HLED.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED.c" > CMakeFiles/HLED.dir/src/HLED.c.i

HLED/CMakeFiles/HLED.dir/src/HLED.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HLED.dir/src/HLED.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED.c" -o CMakeFiles/HLED.dir/src/HLED.c.s

HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj: HLED/CMakeFiles/HLED.dir/flags.make
HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED_LCFG.c
HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj: HLED/CMakeFiles/HLED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj -MF CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj.d -o CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED_LCFG.c"

HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HLED.dir/src/HLED_LCFG.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED_LCFG.c" > CMakeFiles/HLED.dir/src/HLED_LCFG.c.i

HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HLED.dir/src/HLED_LCFG.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED/src/HLED_LCFG.c" -o CMakeFiles/HLED.dir/src/HLED_LCFG.c.s

# Object files for target HLED
HLED_OBJECTS = \
"CMakeFiles/HLED.dir/src/HLED.c.obj" \
"CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj"

# External object files for target HLED
HLED_EXTERNAL_OBJECTS =

HLED/libHLED.a: HLED/CMakeFiles/HLED.dir/src/HLED.c.obj
HLED/libHLED.a: HLED/CMakeFiles/HLED.dir/src/HLED_LCFG.c.obj
HLED/libHLED.a: HLED/CMakeFiles/HLED.dir/build.make
HLED/libHLED.a: HLED/CMakeFiles/HLED.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libHLED.a"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && $(CMAKE_COMMAND) -P CMakeFiles/HLED.dir/cmake_clean_target.cmake
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HLED.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
HLED/CMakeFiles/HLED.dir/build: HLED/libHLED.a
.PHONY : HLED/CMakeFiles/HLED.dir/build

HLED/CMakeFiles/HLED.dir/clean:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" && $(CMAKE_COMMAND) -P CMakeFiles/HLED.dir/cmake_clean.cmake
.PHONY : HLED/CMakeFiles/HLED.dir/clean

HLED/CMakeFiles/HLED.dir/depend:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/HAL/LED" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_LED/build/HLED/CMakeFiles/HLED.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : HLED/CMakeFiles/HLED.dir/depend

