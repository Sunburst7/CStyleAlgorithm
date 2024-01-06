#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "Core.h"

// Arc Node
typedef struct ArcNode {
	int adjvex;			// node index
	struct ArcNode* nextarc;
	ValueType value;	// arc weigh value
} ArcNode;

//  Vertex Node
typedef struct VNode {
	char data;			// node name
	ArcNode* firstarc;
} VNode, AdjList[MAX_VERTEX_NUM];

/*
	Adjacency Graph
	Directed Graph and Undirected Graph
*/ 
typedef struct Graph{
	AdjList vertices;
	int vexnum, arcnum;
	int dfspath[MAX_VERTEX_NUM];
	int bfspath[MAX_VERTEX_NUM];
}Graph; 

LIB_API Graph* InitGraph();
LIB_API void PurgeGraph(Graph* g);
LIB_API void AddArc(Graph* g, char a, char b, ValueType w);
LIB_API void PrintGraph(Graph* g);
LIB_API bool BFS(Graph* g, char a);
LIB_API void DFS(Graph* g, char a);

#endif // _GRAPH_H_
