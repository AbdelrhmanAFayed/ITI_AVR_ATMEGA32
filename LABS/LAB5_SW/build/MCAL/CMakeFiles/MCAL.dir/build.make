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
CMAKE_SOURCE_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build"

# Include any dependencies generated for this target.
include MCAL/CMakeFiles/MCAL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include MCAL/CMakeFiles/MCAL.dir/compiler_depend.make

# Include the progress variables for this target.
include MCAL/CMakeFiles/MCAL.dir/progress.make

# Include the compile flags for this target's objects.
include MCAL/CMakeFiles/MCAL.dir/flags.make

MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o: MCAL/CMakeFiles/MCAL.dir/flags.make
MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO.c
MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o: MCAL/CMakeFiles/MCAL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o -MF CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o.d -o CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO.c"

MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MCAL.dir/DIO/src/MDIO.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO.c" > CMakeFiles/MCAL.dir/DIO/src/MDIO.c.i

MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MCAL.dir/DIO/src/MDIO.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO.c" -o CMakeFiles/MCAL.dir/DIO/src/MDIO.c.s

MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o: MCAL/CMakeFiles/MCAL.dir/flags.make
MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO_LCFG.c
MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o: MCAL/CMakeFiles/MCAL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o -MF CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o.d -o CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO_LCFG.c"

MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO_LCFG.c" > CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.i

MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/DIO/src/MDIO_LCFG.c" -o CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.s

MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o: MCAL/CMakeFiles/MCAL.dir/flags.make
MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c
MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o: MCAL/CMakeFiles/MCAL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o -MF CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o.d -o CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c"

MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MCAL.dir/PORT/src/MPORT.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c" > CMakeFiles/MCAL.dir/PORT/src/MPORT.c.i

MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MCAL.dir/PORT/src/MPORT.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT.c" -o CMakeFiles/MCAL.dir/PORT/src/MPORT.c.s

MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o: MCAL/CMakeFiles/MCAL.dir/flags.make
MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o: /media/fazloka/Abdelrhman/9\ Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c
MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o: MCAL/CMakeFiles/MCAL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o -MF CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o.d -o CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o -c "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c"

MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.i"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c" > CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.i

MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.s"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && /usr/bin/avr-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL/PORT/src/MPORT_LCFG.c" -o CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.s

# Object files for target MCAL
MCAL_OBJECTS = \
"CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o" \
"CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o" \
"CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o" \
"CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o"

# External object files for target MCAL
MCAL_EXTERNAL_OBJECTS =

MCAL/libMCAL.a: MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO.c.o
MCAL/libMCAL.a: MCAL/CMakeFiles/MCAL.dir/DIO/src/MDIO_LCFG.c.o
MCAL/libMCAL.a: MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT.c.o
MCAL/libMCAL.a: MCAL/CMakeFiles/MCAL.dir/PORT/src/MPORT_LCFG.c.o
MCAL/libMCAL.a: MCAL/CMakeFiles/MCAL.dir/build.make
MCAL/libMCAL.a: MCAL/CMakeFiles/MCAL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C static library libMCAL.a"
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && $(CMAKE_COMMAND) -P CMakeFiles/MCAL.dir/cmake_clean_target.cmake
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MCAL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MCAL/CMakeFiles/MCAL.dir/build: MCAL/libMCAL.a
.PHONY : MCAL/CMakeFiles/MCAL.dir/build

MCAL/CMakeFiles/MCAL.dir/clean:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" && $(CMAKE_COMMAND) -P CMakeFiles/MCAL.dir/cmake_clean.cmake
.PHONY : MCAL/CMakeFiles/MCAL.dir/clean

MCAL/CMakeFiles/MCAL.dir/depend:
	cd "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/COTS/MCAL" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL" "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB5_SW/build/MCAL/CMakeFiles/MCAL.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : MCAL/CMakeFiles/MCAL.dir/depend

