#include <stdlib.h>

#include "Graph.h"
#include "Queue.h"
#include "Core.h"

#define INVALID_INDEX -1

Graph* InitGraph()
{
    Graph* g = (Graph*)calloc(1, sizeof(Graph));
    g->vexnum = 0;
    return g;
}

void PurgeGraph(Graph* g)
{
    for (int i = 0; i < g->vexnum; i++)
    {
        ArcNode* p = g->vertices[i].firstarc;
        while (p)
        {
            ArcNode* pp = p;
            p = p->nextarc;
            free(pp);
        }
    }
    free(g);
}

void AddNode(Graph* g, char a)
{
    int ia = -1;
    //for (int i = 0; i < g->vexnum; i++)
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

    ArcNode* new_arc = (ArcNode*)calloc(1, sizeof(ArcNode));
    if (ia == -1 && ib == -1) // neither a nor b exists
    {
        ia = g->vexnum;
        g->vertices[g->vexnum++].data = a;
        ib = g->vexnum;
        g->vertices[g->vexnum++].data = b;
    }
    else if (ia == -1)  
    {
        ia = g->vexnum;
        g->vertices[g->vexnum++].data = a;
    }
    else if (ib == -1)
    {
        ib = g->vexnum;
        g->vertices[g->vexnum++].data = b;
        new_arc->nextarc = g->vertices[ia].firstarc;    // head insert
    }
    else    // Both a and b exist
    {
        // Detect Whether Arc a to b exist
        bool exist = false;
        ArcNode* p = g->vertices[ia].firstarc;
        while (p)
        {
            if (p->adjvex == ib)
                exist = true;
            break;
        }
        if (exist) 
        {
            LOG_WARNING("Graph Arc %c To %c Is Exist", a, b);
            free(new_arc);
            return;
        }
        new_arc->nextarc = g->vertices[ia].firstarc;
    }
    new_arc->adjvex = ib;
    new_arc->value = w;
    g->vertices[ia].firstarc = new_arc;
    g->arcnum++;
}

static int IndexOf(Graph* g, char a)
{
    for(int i = 0; i < g->vexnum; i++)
    {
        if (g->vertices[i].data == a)
            return i;
    }
    return INVALID_INDEX;
}

bool BFS(Graph* g, char a)
{
    int ia = IndexOf(g, a);
    int path_idx = 0;
    if (ia == INVALID_INDEX) 
    {
        LOG_WARNING("Graph Don't Have Node %c", a);
        return false;
    }
    bool visit[g->vexnum] = { false };   
    Queue* q = InitQueue();

    visit[ia] = true;
    g->bfspath[path_idx++] = ia;
    Enqueue(q, ia);
    LOG_TRACE("BFS: index=%d Enqueue", ia);
    while(!IsEmpty(q))
    {
        int p = Dequeue(q);
        LOG_TRACE("BFS: index=%d Dequeue", p);
        for (ArcNode* adj_arc = g->vertices[p].firstarc; adj_arc != nullptr; adj_arc = adj_arc->nextarc)
        {
            int w = adj_arc->adjvex;
            if (!visit[w])
            {
                visit[w] = true;
                g->bfspath[path_idx++] = w;
                Enqueue(q, w);
                LOG_TRACE("BFS: index=%d Enqueue", w);
            }
        }
    }
    return true;
}  

void DFSTraver(Graph* g, int p, bool visit[], int* path)
{
    g->dfspath[*path] = p;
    (*path)++;
    visit[p] = true;
    LOG_TRACE("DFSTraver: index=%d", p);
    LOG_TARCE_ARRAY(g->dfspath, g->vexnum, "%d");
    for (ArcNode* adj_arc = g->vertices[p].firstarc; adj_arc != nullptr; adj_arc = adj_arc->nextarc)
    {
        int w = adj_arc->adjvex;
        if (!visit[w])
            DFSTraver(g, w, visit, path);
    }
}

void DFS(Graph* g)
{
    int path_idx = 0; // recode dfs path index
    bool visit[g->vexnum] = { false };
    for (int i = 0; i < g->vexnum; i++)
    {
        if (!visit[i])
            DFSTraver(g, i, visit, &path_idx);
    }
}
