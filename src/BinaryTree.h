#ifndef _BITNODE_H_
#define _BITNODE_H_
#include <Core.h>

typedef struct BiTNode{
    ElemType data;
    BiTNode* left;
    BiTNode* right;
} BiTNode;

typedef void BiTNodeHandle(BiTNode* node);

LIB_API BiTNode* InitBinaryTNode();
LIB_API void PurgeBinaryTree(BiTNode* root);
LIB_API void PreOrder(BiTNode* root, BiTNodeHandle f);
LIB_API void InOrder(BiTNode* root, BiTNodeHandle f);
LIB_API void PostOrder(BiTNode* root, BiTNodeHandle f);
// LIB_API void PreOrderNoRecursive(BiTNode* root, BiTNodeHandle f);
// LIB_API void InOrderNoRecursive(BiTNode* root, BiTNodeHandle f);
// LIB_API void PostOrderNoRecursive(BiTNode* root, BiTNodeHandle f);

#endif