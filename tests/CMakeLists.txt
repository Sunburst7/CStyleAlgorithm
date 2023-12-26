find_package(GTest REQUIRED)

add_executable(graph_test GraphTest.cpp)

set(targets_list
    graph_test)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/out) 
link_directories(${CMAKE_SOURCE_DIR}/out)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
message("Test Build Type: ${BUILD_TYPE}")
message("Test Include Directory: ${CMAKE_CURRENT_SOURCE_DIR}") 
message("Test Link Directory: ${CMAKE_SOURCE_DIR}") 

foreach(T ${targets_list})
    message("Test Executable: ${T}")
    target_link_libraries(${T} PRIVATE algorithm GTest::GTest)
    gtest_discover_tests(${T})
endforeach()

message("=========================UnitTest Complie Finish==========================")