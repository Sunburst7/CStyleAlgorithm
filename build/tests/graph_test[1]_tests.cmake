add_test( GraphTest.InitGraphAndAddArc /home/CStyleAlgorithm/out/graph_test [==[--gtest_filter=GraphTest.InitGraphAndAddArc]==] --gtest_also_run_disabled_tests)
set_tests_properties( GraphTest.InitGraphAndAddArc PROPERTIES WORKING_DIRECTORY /home/CStyleAlgorithm/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( GraphTest.BFSTest /home/CStyleAlgorithm/out/graph_test [==[--gtest_filter=GraphTest.BFSTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( GraphTest.BFSTest PROPERTIES WORKING_DIRECTORY /home/CStyleAlgorithm/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( GraphTest.DFSTest1 /home/CStyleAlgorithm/out/graph_test [==[--gtest_filter=GraphTest.DFSTest1]==] --gtest_also_run_disabled_tests)
set_tests_properties( GraphTest.DFSTest1 PROPERTIES WORKING_DIRECTORY /home/CStyleAlgorithm/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( graph_test_TESTS GraphTest.InitGraphAndAddArc GraphTest.BFSTest GraphTest.DFSTest1)