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
CMAKE_SOURCE_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build"

# Include any dependencies generated for this target.
include CMakeFiles/MPORT.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MPORT.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MPORT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MPORT.dir/flags.make

CMakeFiles/MPORT.dir/src/MPORT.c.o: CMakeFiles/MPORT.dir/flags.make
CMakeFiles/MPORT.dir/src/MPORT.c.o: ../src/MPORT.c
CMakeFiles/MPORT.dir/src/MPORT.c.o: CMakeFiles/MPORT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MPORT.dir/src/MPORT.c.o"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MPORT.dir/src/MPORT.c.o -MF CMakeFiles/MPORT.dir/src/MPORT.c.o.d -o CMakeFiles/MPORT.dir/src/MPORT.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c"

CMakeFiles/MPORT.dir/src/MPORT.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MPORT.dir/src/MPORT.c.i"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c" > CMakeFiles/MPORT.dir/src/MPORT.c.i

CMakeFiles/MPORT.dir/src/MPORT.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MPORT.dir/src/MPORT.c.s"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c" -o CMakeFiles/MPORT.dir/src/MPORT.c.s

CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o: CMakeFiles/MPORT.dir/flags.make
CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o: ../src/MPORT_LCFG.c
CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o: CMakeFiles/MPORT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o -MF CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o.d -o CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c"

CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.i"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c" > CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.i

CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.s"
	avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c" -o CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.s

# Object files for target MPORT
MPORT_OBJECTS = \
"CMakeFiles/MPORT.dir/src/MPORT.c.o" \
"CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o"

# External object files for target MPORT
MPORT_EXTERNAL_OBJECTS =

libMPORT.a: CMakeFiles/MPORT.dir/src/MPORT.c.o
libMPORT.a: CMakeFiles/MPORT.dir/src/MPORT_LCFG.c.o
libMPORT.a: CMakeFiles/MPORT.dir/build.make
libMPORT.a: CMakeFiles/MPORT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libMPORT.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MPORT.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MPORT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MPORT.dir/build: libMPORT.a
.PHONY : CMakeFiles/MPORT.dir/build

CMakeFiles/MPORT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MPORT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MPORT.dir/clean

CMakeFiles/MPORT.dir/depend:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/build/CMakeFiles/MPORT.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MPORT.dir/depend

