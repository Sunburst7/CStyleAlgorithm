#include <gtest/gtest.h>
#include "Visualize.h"
#include "Graph.h"

TEST(GraphTest, InitGraphAndAddArc)
{
	Graph* g = InitGraph();
	AddArc(g, 'a', 'b', 1);
	AddArc(g, 'a', 'c', 2);
	AddArc(g, 'a', 'd', 3);
	AddArc(g, 'a', 'e', 4);
	AddArc(g, 'b', 'c', 1);
	AddArc(g, 'c', 'd', 1);
	AddArc(g, 'd', 'e', 1);
	PrintGraph(g);
	EXPECT_EQ(g->vexnum, 5);
	EXPECT_EQ(g->arcnum, 7);
	AddArc(g, 'd', 'e', 1);
	EXPECT_EQ(g->vexnum, 5);
	EXPECT_EQ(g->arcnum, 7);

	PurgeGraph(g);
}

TEST(GraphTest, BFSTest)
{
	Graph* g = InitGraph();	
	AddArc(g, 'a', 'b', 1);
	AddArc(g, 'a', 'c', 2);
	AddArc(g, 'b', 'd', 3);
	AddArc(g, 'd', 'e', 4);
	PrintGraph(g);

	EXPECT_EQ(BFS(g, 'a'), true);
	EXPECT_EQ(g->bfspath[0], 0);
	EXPECT_EQ(g->bfspath[1], 2);
	EXPECT_EQ(g->bfspath[2], 1);
	EXPECT_EQ(g->bfspath[3], 3);
	EXPECT_EQ(g->bfspath[4], 4);
	printf("\n");
}

TEST(GraphTest, DFSTest1)
{
	Graph* g = InitGraph();	
	AddArc(g, 'a', 'b', 1);
	AddArc(g, 'a', 'c', 2);
	AddArc(g, 'b', 'd', 3);
	AddArc(g, 'd', 'e', 4);
	PrintGraph(g);
	DFS(g);
	for (int i = 0; i < g->vexnum; i++)
		printf("%d ", g->dfspath[i]);
	
	EXPECT_EQ(g->dfspath[0], 0);
	EXPECT_EQ(g->dfspath[1], 2);
	EXPECT_EQ(g->dfspath[2], 1);
	EXPECT_EQ(g->dfspath[3], 3);
	EXPECT_EQ(g->dfspath[4], 4);
}

TEST(GraphTest, DFSTest2)
{
	Graph* g = InitGraph();	
	AddArc(g, 'a', 'b', 1);
	AddArc(g, 'a', 'c', 2);
	AddArc(g, 'b', 'd', 3);
	AddArc(g, 'e', 'f', 1);
	AddArc(g, 'f', 'e', 1);
	PrintGraph(g);
	DFS(g);
	for (int i = 0; i < g->vexnum; i++)
		printf("%d ", g->dfspath[i]);
	
	EXPECT_EQ(g->dfspath[0], 0);
	EXPECT_EQ(g->dfspath[1], 2);
	EXPECT_EQ(g->dfspath[2], 1);
	EXPECT_EQ(g->dfspath[3], 3);
	EXPECT_EQ(g->dfspath[4], 4);
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}