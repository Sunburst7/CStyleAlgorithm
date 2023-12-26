#include <stdlib.h>

#include "Graph.h"
#include "Core.h"

ERRNO CreateGraph(Graph* g, int vexnum)
{
    g = (Graph*)calloc(1, sizeof(Graph));
    g->vexnum = vexnum;
}

ERRNO FreeGraph(Graph* graph)
{

}
