#!/bin/bash
for file in `ls ./out`
	do
        if [[ "${file}" == *"_test"* ]];then
            echo ""
            echo "===================== ${file} memcheck will start! ======================="
            valgrind --tool=memcheck --leak-check=full ./out/${file}
            echo "===================== ${file} memcheck end! ======================="
            echo ""
        fi
	done


#valgrind --tool=memcheck --leak-check=full ./out/stack_test
#valgrind --tool=memcheck --leak-check=full ./out/queue_test 
#valgrind --tool=memcheck --leak-check=full ./out/graph_test
