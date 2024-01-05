/*
 * @Author       : hh
 * @Date         : 2024-01-03 17:57:41
 * @LastEditors  : your Name
 * @LastEditTime : 2024-01-04 09:54:58
 * @Description  : 
 */
#include "Stack.h"

Stack* InitStack()
{
    Stack* s = (Stack*)calloc(1, sizeof(Stack));
    s->top = -1;
    return s;
}

void PurgeStack(Stack* s)
{
    free(s);
    s = NULL;
}

int Size(Stack* s)
{
    return s->top + 1;
}

bool IsEmpty(Stack* s)
{
    return s->top == -1;
}

ElemType Top(Stack* s)
{
    if (IsEmpty(s))
    {
        LOG_WARNING("Stack Is Empty");
        return INVALID_ELEM_VALUE;
    }
    return s->e[s->top];
}

void Push(Stack* s, ElemType e)
{
    if (Size(s) == MAX_STACK_SIZE)
    {
        LOG_WARNING("Stack Is Full");
        return;
    }
    s->e[++s->top] = e;
}

ElemType Pop(Stack* s)
{
    if (IsEmpty(s))
    {
        LOG_WARNING("Stack Is Empty");
        return INVALID_ELEM_VALUE;
    }
    return s->e[s->top--];
}
