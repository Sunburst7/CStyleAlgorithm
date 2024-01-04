#include <stdlib.h>

#include "Graph.h"
#include "Core.h"

Graph* CreateGraph(int vexnum)
{
    Graph* g = (Graph*)calloc(1, sizeof(Graph));
    g->vexnum = vexnum;
    return g;
}

void DeleteGraph(Graph* g)
{

}

void AddArc(Graph* g, char a, char b, ValueType w)
{
    int ia = -1, ib = -1;
    for (int i = 0; i < g->vexnum; i++)
    {
        char c = g->vertices[i].data;
        if (c == a) ia = i;
        if (c == b) ib = i;
    }

    if (ia == -1 && ib == -1) // new node
    {
        ia = g->vexnum;
        g->vertices[g->vexnum++].data = a;
        ib = g->vexnum;
        g->vertices[g->vexnum++].data = b;
        ArcNode* new_arc = (ArcNode*)calloc(1, sizeof(ArcNode));
        new_arc->adjvex = ib;
        new_arc->nextarc = NULL;
        new_arc->value = w;
        g->vertices[ia].firstarc = new_arc;
    }
    else if (ia == -1)
    {
        ia = g->vexnum;
        g->vertices[g->vexnum++].data = a;
        ArcNode* new_arc = (ArcNode*)calloc(1, sizeof(ArcNode));
        new_arc->adjvex = ib;
        new_arc->nextarc = NULL;
        new_arc->value = w;
        g->vertices[ia].firstarc = new_arc;
    }
    else if (ib == -1)
    {
        ib = g->vexnum;
        g->vertices[g->vexnum++].data = b;
        ArcNode* new_arc = (ArcNode*)calloc(1, sizeof(ArcNode));
        new_arc->adjvex = ib;
        new_arc->nextarc = g->vertices[ia].firstarc;
        new_arc->value = w;
        g->vertices[ia].firstarc = new_arc;
    }
    else
    {
        ArcNode* new_arc = (ArcNode*)calloc(1, sizeof(ArcNode));
        new_arc->adjvex = ib;
        new_arc->nextarc = g->vertices[ia].firstarc;
        new_arc->value = w;
        g->vertices[ia].firstarc = new_arc;
    }
}
