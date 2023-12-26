add_test( GraphTest.InitializeGraph /home/CStyleAlgorithm/out/graph_test [==[--gtest_filter=GraphTest.InitializeGraph]==] --gtest_also_run_disabled_tests)
set_tests_properties( GraphTest.InitializeGraph PROPERTIES WORKING_DIRECTORY /home/CStyleAlgorithm/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( graph_test_TESTS GraphTest.InitializeGraph)
