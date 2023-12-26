#include <gtest/gtest.h>
#include "Graph.h"

TEST(GraphTest, InitializeGraph)
{
	EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
