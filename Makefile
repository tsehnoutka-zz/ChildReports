# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Fox/workspace/childthreadswitch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Fox/workspace/childthreadswitch/build

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake.exe -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake.exe -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/Fox/workspace/childthreadswitch/build/CMakeFiles /home/Fox/workspace/childthreadswitch/build/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/Fox/workspace/childthreadswitch/build/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named ChildThread

# Build rule for target.
ChildThread: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ChildThread
.PHONY : ChildThread

# fast build rule for target.
ChildThread/fast:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/build
.PHONY : ChildThread/fast

ChildThread.o: ChildThread.c.o

.PHONY : ChildThread.o

# target to build an object file
ChildThread.c.o:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ChildThread.c.o
.PHONY : ChildThread.c.o

ChildThread.i: ChildThread.c.i

.PHONY : ChildThread.i

# target to preprocess a source file
ChildThread.c.i:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ChildThread.c.i
.PHONY : ChildThread.c.i

ChildThread.s: ChildThread.c.s

.PHONY : ChildThread.s

# target to generate assembly for a file
ChildThread.c.s:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ChildThread.c.s
.PHONY : ChildThread.c.s

ChildThreadSpecial.o: ChildThreadSpecial.c.o

.PHONY : ChildThreadSpecial.o

# target to build an object file
ChildThreadSpecial.c.o:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ChildThreadSpecial.c.o
.PHONY : ChildThreadSpecial.c.o

ChildThreadSpecial.i: ChildThreadSpecial.c.i

.PHONY : ChildThreadSpecial.i

# target to preprocess a source file
ChildThreadSpecial.c.i:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ChildThreadSpecial.c.i
.PHONY : ChildThreadSpecial.c.i

ChildThreadSpecial.s: ChildThreadSpecial.c.s

.PHONY : ChildThreadSpecial.s

# target to generate assembly for a file
ChildThreadSpecial.c.s:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ChildThreadSpecial.c.s
.PHONY : ChildThreadSpecial.c.s

ReportA.o: ReportA.c.o

.PHONY : ReportA.o

# target to build an object file
ReportA.c.o:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ReportA.c.o
.PHONY : ReportA.c.o

ReportA.i: ReportA.c.i

.PHONY : ReportA.i

# target to preprocess a source file
ReportA.c.i:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ReportA.c.i
.PHONY : ReportA.c.i

ReportA.s: ReportA.c.s

.PHONY : ReportA.s

# target to generate assembly for a file
ReportA.c.s:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ReportA.c.s
.PHONY : ReportA.c.s

ReportB.o: ReportB.c.o

.PHONY : ReportB.o

# target to build an object file
ReportB.c.o:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ReportB.c.o
.PHONY : ReportB.c.o

ReportB.i: ReportB.c.i

.PHONY : ReportB.i

# target to preprocess a source file
ReportB.c.i:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ReportB.c.i
.PHONY : ReportB.c.i

ReportB.s: ReportB.c.s

.PHONY : ReportB.s

# target to generate assembly for a file
ReportB.c.s:
	$(MAKE) -f CMakeFiles/ChildThread.dir/build.make CMakeFiles/ChildThread.dir/ReportB.c.s
.PHONY : ReportB.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... ChildThread"
	@echo "... ChildThread.o"
	@echo "... ChildThread.i"
	@echo "... ChildThread.s"
	@echo "... ChildThreadSpecial.o"
	@echo "... ChildThreadSpecial.i"
	@echo "... ChildThreadSpecial.s"
	@echo "... ReportA.o"
	@echo "... ReportA.i"
	@echo "... ReportA.s"
	@echo "... ReportB.o"
	@echo "... ReportB.i"
	@echo "... ReportB.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

