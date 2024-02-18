/*
 * @Author       : hh
 * @Date         : 2024-01-03 10:40:06
 * @LastEditors  : hh
 * @LastEditTime : 2024-01-04 09:51:44
 * @Description  : Queue
 */
#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Core.h"

typedef struct Queue{
    ElemType e[MAX_QUEUE_SIZE];
    int front, rear; 
}Queue;

LIB_API Queue* InitQueue();
LIB_API void PurgeQueue(Queue* q);
LIB_API int Size(Queue* q);
LIB_API bool IsEmpty(Queue* q);
LIB_API ElemType Front(Queue* q);
LIB_API ElemType Rear(Queue* q);
LIB_API void Enqueue(Queue* q, ElemType e);
LIB_API ElemType Dequeue(Queue* q);

#endif // _QUEUE_H_