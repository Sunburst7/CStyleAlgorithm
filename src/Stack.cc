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
}

void Push(Stack* s, ElemType e)
{

}

ElemType Pop(Stack* s)
{

}
