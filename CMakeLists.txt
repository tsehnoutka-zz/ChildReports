cmake_minimum_required (VERSION 2.6)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required

set (CMAKE_C_COMPILER "C:/cygwin64/bin/gcc.exe")
set (CMAKE_CXX_COMPILER "C:/cygwin64/bin/gcc.exe")
INCLUDE(CMakeForceCompiler) 
CMAKE_FORCE_C_COMPILER(gcc GNU)
CMAKE_FORCE_CXX_COMPILER(g++ GNU)


project (ChildThread)
# The version number.
set (Opaid_VERSION_MAJOR 1)
set (Opaid_VERSION_MAJOR 0)

SET(STATE "TIM" CACHE STRING "Some user-specified option")
 message(STATUS "State is: " ${STATE})
 


# configure a header file to pass some of the CMake settings
# to the source code
#configure_file (
# "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
# "${PROJECT_BINARY_DIR}/TutorialConfig.h"
#  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
include_directories(include/) 

#set (COMMON "ChildThread.c " "ReportB.c "  )
if ("${STATE}" STREQUAL "IL")
    message(STATUS "In Illinois")
	set (SOURCES ChildThread.c ReportB.c ILLINOIS/ChildThreadSpecial.c ILLINOIS/ReportA_IL.c ILLINOIS/ReportX.c  ILLINOIS/ReportY.c ILLINOIS/ReportZ.c )
else()
    message(STATUS "In Common")
	set (SOURCES  ChildThread.c ReportB.c ChildThreadSpecial.c ReportA.c  )
endif()
#string(CONCAT SOURCES ${COMMON} " " ${STATE_FILES})
message (STATUS "The source files are: " "${SOURCES}")	

find_package (Threads)
# add the executable
add_executable(ChildThread ${SOURCES})