/*
 * @Author       : hh
 * @Date         : 2024-01-03 11:00:56
 * @LastEditors  : your Name
 * @LastEditTime : 2024-01-04 09:55:25
 * @Description  : 
 */
#include "Queue.h"

Queue* InitQueue()
{
    Queue* q = (Queue*)calloc(1, sizeof(Queue));
    q->front = 0;
    q->rear = 0;   // insert index
    return q;
}

void PurgeQueue(Queue* q)
{
    free(q);
    q = NULL;
}

int Size(Queue* q)
{
    return (q->rear - q->front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

bool IsEmpty(Queue* q)
{
    return q->front == q->rear;
}

ElemType Front(Queue* q)
{
    if (Size(q) > 0)
        return q->e[q->front];
    else
    {
        LOG_WARNING("Queue Is Empty");
        return INVALID_ELEM_VALUE;
    }
}

void Enqueue(Queue* q, ElemType a)
{
    if (Size(q) == MAX_QUEUE_SIZE - 1) // Avaliable Space Is MAX_QUEUE_SIZE - 1
    {
        LOG_WARNING("Queue Is Full, Size %d", MAX_QUEUE_SIZE - 1);
        return;
    }
    q->e[q->rear] = a;
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
}

ElemType Dequeue(Queue* q)
{
    if (IsEmpty(q))
    {
        LOG_WARNING("Queue Is Empty");
        return INVALID_ELEM_VALUE;
    }
    ElemType ret = q->e[q->front];
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return ret;
}