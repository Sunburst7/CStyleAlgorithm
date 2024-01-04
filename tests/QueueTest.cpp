/*
 * @Author       : hh
 * @Date         : 2024-01-03 11:39:02
 * @LastEditors  : your Name
 * @LastEditTime : 2024-01-04 10:01:32
 * @Description  : 
 */
#include <gtest/gtest.h>
#include "Queue.h"

TEST(QueueTest, InitializeQueue)
{
    Queue* q = InitQueue();
	EXPECT_EQ(q->front, 0);
    EXPECT_EQ(q->rear, 0);
    EXPECT_EQ(Size(q), 0);
}

TEST(QueueTest, EnqueueAndDequeueAndSize)
{
    Queue* q = InitQueue();
    Enqueue(q, 1);
    EXPECT_EQ(Size(q), 1);
    Enqueue(q, 2);
    EXPECT_EQ(Size(q), 2);
    Enqueue(q, 3);
    EXPECT_EQ(Size(q), 3);
    Enqueue(q, 4);
    EXPECT_EQ(Size(q), 4);
    Enqueue(q, 5);
    EXPECT_EQ(Size(q), 4);

    ElemType e1 = Dequeue(q);
    EXPECT_EQ(e1, 1);
    EXPECT_EQ(Size(q), 3);

    ElemType e2 = Dequeue(q);
    EXPECT_EQ(e2, 2);
    EXPECT_EQ(Size(q), 2);

    ElemType e3 = Dequeue(q);
    EXPECT_EQ(e3, 3);
    EXPECT_EQ(Size(q), 1);

    ElemType e4 = Dequeue(q);
    EXPECT_EQ(e4, 4);
    EXPECT_EQ(Size(q), 0);

    ElemType e5 = Dequeue(q);
    EXPECT_EQ(e5, INVALID_ELEM_VALUE);
    EXPECT_EQ(Size(q), 0);
}

TEST(QueueTest, QueueIsEmpty)
{
    Queue* q = InitQueue();
    EXPECT_EQ(IsEmpty(q), true);
    Enqueue(q, 1);
}

TEST(QueueTest, PurgeQueue)
{
    Queue* q = InitQueue();
    Enqueue(q, 1);
    EXPECT_EQ(Size(q), 1);

    PurgeQueue(q);
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
