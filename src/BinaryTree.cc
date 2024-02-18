#include "BinaryTree.h"
#include "Stack.h"

static void PurgeHandle(BiTNode* node)
{
    free(node);
}

BiTNode *InitBinaryTNode()
{
    BiTNode* n = (BiTNode*)calloc(1, sizeof(BiTNode));
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

void PreOrder(BiTNode* root, BiTNodeHandle f)
{
    if (root == nullptr) return;
    f(root);
    PreOrder(root->left, f);
    PreOrder(root->right, f);
}

void InOrder(BiTNode* root, BiTNodeHandle f)
{
    if (root == nullptr) return;
    PreOrder(root->left, f);
    f(root);
    PreOrder(root->right, f);
}

void PostOrder(BiTNode* root, BiTNodeHandle f)
{
    if (root == nullptr) return;
    PreOrder(root->left, f);
    PreOrder(root->right, f);
    f(root);
}

void PurgeBinaryTree(BiTNode* root)
{
    PostOrder(root, PurgeHandle);
}

// void PreOrderNoRecursive(BiTNode* root, BiTNodeHandle f)
// {
//     Stack* s = InitStack();
//     BiTNode* p = root;
//     while (p || !IsEmpty(s))
//     {
//         if (p)
//         {
//             //Push(s, )
//         }
//     }
// }

// void InOrderNoRecursive(BiTNode* root, BiTNodeHandle f)
// {

// }

// void PostOrderNoRecursive(BiTNode* root, BiTNodeHandle f)
// {

// }

