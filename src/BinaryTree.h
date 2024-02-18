/*
 * @Author       : hh
 * @Date         : 2024-01-12 14:13:55
 * @LastEditors  : hh
 * @LastEditTime : 2024-01-12 14:13:56
 * @Description  : Binary Tree
 */
#ifndef _BITNODE_H_
#define _BITNODE_H_
#include <Core.h>

typedef struct BiTNode{
    ElemType data;
    BiTNode* left;
    BiTNode* right;
} BiTNode;

#endif