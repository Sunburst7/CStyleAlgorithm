/*
 * @Author       : hh
 * @Date         : 2024-01-03 17:50:48
 * @LastEditors  : your Name
 * @LastEditTime : 2024-01-04 09:55:03
 * @Description  : 
 */
#ifndef _STACK_H_
#define _STACK_H_

#include "Core.h"

typedef struct Stack{
    ElemType e[MAX_STACK_SIZE];
    int top;
}Stack;

LIB_API Stack* InitStack();
LIB_API void PurgeStack(Stack* s);
LIB_API int Size(Stack* s);
LIB_API bool IsEmpty(Stack* s);
LIB_API ElemType Top(Stack* s);
LIB_API void Push(Stack* s, ElemType e);
LIB_API ElemType Pop(Stack* s);

#endif // _STACK_H_