#include <gtest/gtest.h>
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



int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}