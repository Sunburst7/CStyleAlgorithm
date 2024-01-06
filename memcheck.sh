valgrind --tool=memcheck --leak-check=full ./out/stack_test
valgrind --tool=memcheck --leak-check=full ./out/queue_test 
valgrind --tool=memcheck --leak-check=full ./out/graph_test