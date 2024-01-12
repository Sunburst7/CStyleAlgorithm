#include "Visualize.h"
#include <iostream>
#include <sstream>

void PrintStack(Stack* s)
{
    int size = Size(s);
    for (int i = 0; i < size * 3; i++)
        std::cout << "-";
    std::cout << std::endl << "| ";

    for (int i = s->top; i >= 0; i--)
        std::cout << s->e[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < size * 3; i++)
        std::cout << "-";
    std::cout << std::endl;
}

void PrintQueue(Queue* q)
{
    std::stringstream ss;
    for (int i = q->front; i != q->rear; i = (i + 1) % MAX_QUEUE_SIZE)
        ss << q->e[i] << " ";
    
    std::string info = ss.str();
    int size = info.size();

    for (int i = 0; i < size; i++)
        std::cout << "-";
    std::cout << std::endl;

    std::cout << info << std::endl;

    for (int i = 0; i < size; i++)
        std::cout << "-";
    std::cout << std::endl;
}

void PrintGraph(Graph* g)
{
    for (int i = 0; i < g->vexnum; i++)
    {
        std::cout << i << " | " << g->vertices[i].data << " |";
        ArcNode* p = g->vertices[i].firstarc;
        while (p)
        {
            std::cout << "--->" << p->adjvex << "(" << p->value << ")";
            p = p->nextarc;
        }
        std::cout << std::endl;
    }
}