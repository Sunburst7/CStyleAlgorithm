cmake_minimum_required(VERSION 2.28)
project(CStyleAlgorithm)
enable_language(CXX)
if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++17 -Wno-narrowing")
    endif ()
else ()
    set (CMAKE_CXX_STANDARD 17)
endif ()

set(LIB_NAME algorithm)                                                 # lib's name
set(LIB_DEPENDENCE)	                                                    # lib dependence
set(LIB_DEFINE)                                                         # lib's defination 
set(LIB_COMPILE_OPTIONS -Wall -fPIC -shared)                            # lib's compile options
set(LIB_SOURCE)                                                         # lib's source file
set(LIB_HEADER)                                                         # lib's header file
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/out)                                                      
file(GLOB LIB_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc")
file(GLOB LIB_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h")
file(COPY ${LIB_HEADER} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/tests)


option(BUILD_DEBUG "Build On Debug Mode" OFF)
option(BUILD_TRACE "Build Open Algorithm Trace" OFF)

if (BUILD_DEBUG)
	set(LIB_DEFINE ${LIB_DEFINE} _DEBUG)
	set(LIB_COMPILE_OPTIONS ${LIB_COMPILE_OPTIONS} -O0 -g)
else()
	set(LIB_COMPILE_OPTIONS ${LIB_COMPILE_OPTIONS} -O5)
endif()

if (BUILD_TRACE)
    set(LIB_DEFINE ${LIB_DEFINE} LOG_TRACE_ON)
endif()

message("Lib Build Type Is Debug: ${BUILD_DEBUG}")
message("Lib Output Path: ${LIBRARY_OUTPUT_DDIRECTORY}") 
message("Lib Name: ${LIB_NAME}") 
message("Lib Compile Options: ${LIB_COMPILE_OPTIONS}")
message("Lib Complie Definition: ${LIB_DEFINE}")

# libalgorithm
add_library(${LIB_NAME} SHARED ${LIB_SOURCE} ${LIB_HEADER})

target_compile_options(${LIB_NAME} PUBLIC  ${LIB_COMPILE_OPTIONS})
target_compile_definitions(${LIB_NAME} PUBLIC ${LIB_DEFINE})

message("=========================Lib Complie Finish==========================")
add_subdirectory(tests)
