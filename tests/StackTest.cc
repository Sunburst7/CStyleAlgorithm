/*
 * @Author       : hh
 * @Date         : 2024-01-03 11:39:02
 * @LastEditors  : hh
 * @LastEditTime : 2024-01-04 10:01:32
 * @Description  : 
 */
#include <gtest/gtest.h>
#include "Stack.h"

TEST(StackTest, InitializeStack)
{
    Stack* s = InitStack();
	EXPECT_EQ(s->top, -1);
    EXPECT_EQ(Size(s), 0);
}

TEST(StackTest, PushAndPopAndSize)
{
    Stack* s = InitStack();

    for (int i = 1; i <= MAX_STACK_SIZE; i++)
    {
        Push(s, i);
        EXPECT_EQ(Size(s), i);
        EXPECT_EQ(Top(s), i);
    }

    Push(s, MAX_STACK_SIZE + 1);
    EXPECT_EQ(Size(s), MAX_STACK_SIZE);
    EXPECT_EQ(Top(s), MAX_STACK_SIZE);

    for (int i = MAX_STACK_SIZE; i > 0; i--)
    {
        ElemType e = Pop(s);
        EXPECT_EQ(e, i);
        EXPECT_EQ(Size(s), i - 1);
    }

    ElemType e1 = Pop(s);
    EXPECT_EQ(e1, INVALID_ELEM_VALUE);
    EXPECT_EQ(Size(s), 0);
}

TEST(StackTest, StackIsEmpty)
{
    Stack* s = InitStack();
    EXPECT_EQ(IsEmpty(s), true);

    Push(s, 1);
    EXPECT_EQ(IsEmpty(s), false);

    Pop(s);
    EXPECT_EQ(IsEmpty(s), true);
}

TEST(StackTest, PurgeStack)
{
    Stack* s = InitStack();
    Push(s, 1);
    EXPECT_EQ(Size(s), 1);

    PurgeStack(s);
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
