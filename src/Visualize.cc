#include "Visualize.h"

void PrintGraph(Graph* g)
{
    for (int i = 0; i < g->vexnum; i++)
    {
        printf("%d | %c |", i, g->vertices[i].data);
        ArcNode* p = g->vertices[i].firstarc;
        while (p)
        {
            printf("--->%d(%d)", p->adjvex, p->value);
            p = p->nextarc;
        }
        printf("\n");
    }
}