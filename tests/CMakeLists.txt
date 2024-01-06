find_package(GTest REQUIRED)
set(CMAKE_VERBOSE_MAKEFILE on)
add_executable(queue_test QueueTest.cc)
add_executable(stack_test StackTest.cc)
add_executable(graph_test GraphTest.cc)

set(targets_list
    queue_test
    stack_test
    graph_test)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/out) 
link_directories(${CMAKE_SOURCE_DIR}/out)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
message("Test Build Type: ${BUILD_TYPE}")
message("Test Include Directory: ${CMAKE_CURRENT_SOURCE_DIR}") 
message("Test Link Directory: ${CMAKE_SOURCE_DIR}") 

foreach(T ${targets_list})
    message("Test Executable: ${T}")
    target_link_libraries(${T} PRIVATE ${LIB_NAME} GTest::GTest pthread)
    gtest_discover_tests(${T})
endforeach()

message("=========================UnitTest Complie Finish==========================")