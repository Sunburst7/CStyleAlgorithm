/*
 * @Author       : hh
 * @Date         : 2024-01-03 11:39:02
 * @LastEditors  : hh
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
    PurgeQueue(q);
}

TEST(QueueTest, EnqueueAndDequeueAndSize)
{
    Queue* q = InitQueue();

    int max_queue_size = MAX_QUEUE_SIZE - 1;

    for (int i = 1; i <= max_queue_size; i++)
    {
        Enqueue(q, i);
        EXPECT_EQ(Size(q), i);
        //EXPECT_EQ(Rear(q), i);
    }
    Enqueue(q, 5);
    EXPECT_EQ(Size(q), MAX_QUEUE_SIZE - 1);

    for (int i = 1 ; i <= max_queue_size; i++)
    {
        ElemType e = Dequeue(q);
        EXPECT_EQ(e, i);
        EXPECT_EQ(Size(q), max_queue_size - i);
    }

    ElemType e1 = Dequeue(q);
    EXPECT_EQ(e1, INVALID_ELEM_VALUE);
    EXPECT_EQ(Size(q), 0);
    PurgeQueue(q);
}

TEST(QueueTest, QueueIsEmpty)
{
    Queue* q = InitQueue();
    EXPECT_EQ(IsEmpty(q), true);

    Enqueue(q, 1);
    EXPECT_EQ(IsEmpty(q), false);

    Dequeue(q);
    EXPECT_EQ(IsEmpty(q), true);
    PurgeQueue(q);
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
