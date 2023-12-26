#ifndef _GRAPH_H_
#define _GRAPH_H_

#define MAX_VERTEX_NUM 10
#define ValueType int
#define VertexType char

// Arc Node
typedef struct ArcNode {
	int adjvex;			// node index
	ArcNode* nextarc;
	//ValueType value;	// arc weigh value
} ArcNode;

//  Vertex Node
typedef struct VNode {
	VertexType data;	// node name
	ArcNode* firstarc;
} VNode, AdjList[MAX_VERTEX_NUM];

// Adjacency Graph
typedef struct Graph{
	AdjList vertices;
	int vexnum, arcnum;
}AGraph; 

#endif // _GRAPH_H_
