add_test([=[GraphTest.InitGraphAndAddArc]=]  /home/sunburst7/workspace/CStyleAlgorithm/out/graph_test [==[--gtest_filter=GraphTest.InitGraphAndAddArc]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[GraphTest.InitGraphAndAddArc]=]  PROPERTIES WORKING_DIRECTORY /home/sunburst7/workspace/CStyleAlgorithm/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  graph_test_TESTS GraphTest.InitGraphAndAddArc)
