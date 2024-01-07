# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/sunburst7/workspace/CStyleAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sunburst7/workspace/CStyleAlgorithm/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/stack_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/stack_test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/stack_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/stack_test.dir/flags.make

tests/CMakeFiles/stack_test.dir/StackTest.cc.o: tests/CMakeFiles/stack_test.dir/flags.make
tests/CMakeFiles/stack_test.dir/StackTest.cc.o: /home/sunburst7/workspace/CStyleAlgorithm/tests/StackTest.cc
tests/CMakeFiles/stack_test.dir/StackTest.cc.o: tests/CMakeFiles/stack_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sunburst7/workspace/CStyleAlgorithm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/stack_test.dir/StackTest.cc.o"
	cd /home/sunburst7/workspace/CStyleAlgorithm/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/stack_test.dir/StackTest.cc.o -MF CMakeFiles/stack_test.dir/StackTest.cc.o.d -o CMakeFiles/stack_test.dir/StackTest.cc.o -c /home/sunburst7/workspace/CStyleAlgorithm/tests/StackTest.cc

tests/CMakeFiles/stack_test.dir/StackTest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/stack_test.dir/StackTest.cc.i"
	cd /home/sunburst7/workspace/CStyleAlgorithm/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sunburst7/workspace/CStyleAlgorithm/tests/StackTest.cc > CMakeFiles/stack_test.dir/StackTest.cc.i

tests/CMakeFiles/stack_test.dir/StackTest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/stack_test.dir/StackTest.cc.s"
	cd /home/sunburst7/workspace/CStyleAlgorithm/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sunburst7/workspace/CStyleAlgorithm/tests/StackTest.cc -o CMakeFiles/stack_test.dir/StackTest.cc.s

# Object files for target stack_test
stack_test_OBJECTS = \
"CMakeFiles/stack_test.dir/StackTest.cc.o"

# External object files for target stack_test
stack_test_EXTERNAL_OBJECTS =

/home/sunburst7/workspace/CStyleAlgorithm/out/stack_test: tests/CMakeFiles/stack_test.dir/StackTest.cc.o
/home/sunburst7/workspace/CStyleAlgorithm/out/stack_test: tests/CMakeFiles/stack_test.dir/build.make
/home/sunburst7/workspace/CStyleAlgorithm/out/stack_test: /home/sunburst7/workspace/CStyleAlgorithm/out/libalgorithm.so
/home/sunburst7/workspace/CStyleAlgorithm/out/stack_test: /usr/local/lib/libgtest.a
/home/sunburst7/workspace/CStyleAlgorithm/out/stack_test: tests/CMakeFiles/stack_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/sunburst7/workspace/CStyleAlgorithm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/sunburst7/workspace/CStyleAlgorithm/out/stack_test"
	cd /home/sunburst7/workspace/CStyleAlgorithm/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack_test.dir/link.txt --verbose=$(VERBOSE)
	cd /home/sunburst7/workspace/CStyleAlgorithm/build/tests && /usr/bin/cmake -D TEST_TARGET=stack_test -D TEST_EXECUTABLE=/home/sunburst7/workspace/CStyleAlgorithm/out/stack_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/sunburst7/workspace/CStyleAlgorithm/build/tests -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=stack_test_TESTS -D CTEST_FILE=/home/sunburst7/workspace/CStyleAlgorithm/build/tests/stack_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.27/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/stack_test.dir/build: /home/sunburst7/workspace/CStyleAlgorithm/out/stack_test
.PHONY : tests/CMakeFiles/stack_test.dir/build

tests/CMakeFiles/stack_test.dir/clean:
	cd /home/sunburst7/workspace/CStyleAlgorithm/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/stack_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/stack_test.dir/clean

tests/CMakeFiles/stack_test.dir/depend:
	cd /home/sunburst7/workspace/CStyleAlgorithm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sunburst7/workspace/CStyleAlgorithm /home/sunburst7/workspace/CStyleAlgorithm/tests /home/sunburst7/workspace/CStyleAlgorithm/build /home/sunburst7/workspace/CStyleAlgorithm/build/tests /home/sunburst7/workspace/CStyleAlgorithm/build/tests/CMakeFiles/stack_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/stack_test.dir/depend

