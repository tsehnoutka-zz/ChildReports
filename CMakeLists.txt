cmake_minimum_required (VERSION 2.6)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required

set (CMAKE_C_COMPILER "C:/cygwin64/bin/gcc.exe")
set (CMAKE_CXX_COMPILER "C:/cygwin64/bin/gcc.exe")
INCLUDE(CMakeForceCompiler) 
CMAKE_FORCE_C_COMPILER(gcc GNU)
CMAKE_FORCE_CXX_COMPILER(g++ GNU)

####   Communication Library shared Object
project(CommLib)
set( SOURCES "Com_Lib.c")
 #Generate the shared library from the sources
add_library(CommLib SHARED ${SOURCES})

####     Child process
project (ChildThread)
# The version number.
set (Opaid_VERSION_MAJOR 1)
set (Opaid_VERSION_MAJOR 0)

SET(STATE "TIM" CACHE STRING "Some user-specified option")
message(STATUS "State is: " ${STATE})

# add the binary tree to the search path for include files
# so that we will find the common header files
include_directories("${PROJECT_BINARY_DIR}")
include_directories(include/) 

set ( PROJECT_LINK_LIBS CommLib )
link_directories( "/cygdrive/c/Users/Fox/Documents/NetBeansProjects/childprocess/build")

file(GLOB SOURCES "Reports/*.c")
if ("${STATE}" STREQUAL "IL")
    message(STATUS "In Illinois")
	set (OTHER_SOURCES server.c Reports.c ChildThread.c ILLINOIS/ChildThreadSpecial.c ILLINOIS/ReportA_IL.c ILLINOIS/ReportsIL.c )
else()
    message(STATUS "In Common")
	set (OTHER_SOURCES  server.c Reports.c  ChildThread.c ChildThreadSpecial.c ReportA.c  )
endif()
#string(CONCAT SOURCES ${COMMON} " " ${STATE_FILES})
message (STATUS "The source files are: " "${SOURCES}" )	
message (STATUS "The OTHER source files are: "  "${OTHER_SOURCES}")	

find_package (Threads)
# add the executable
add_executable(ChildThread ${SOURCES} ${OTHER_SOURCES})
target_link_libraries(ChildThread ${PROJECT_LINK_LIBS} )
#add_dependencies(ChildThread, CommLib)

#For the shared library:



