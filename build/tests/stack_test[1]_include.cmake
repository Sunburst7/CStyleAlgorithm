if(EXISTS "/home/sunburst7/workspace/CStyleAlgorithm/build/tests/stack_test[1]_tests.cmake")
  include("/home/sunburst7/workspace/CStyleAlgorithm/build/tests/stack_test[1]_tests.cmake")
else()
  add_test(stack_test_NOT_BUILT stack_test_NOT_BUILT)
endif()
