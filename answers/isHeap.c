// Btree.h : Binary Tree ADT  ... 

typedef struct Node *BTree;
typedef struct Node {
   int  data;
   BTree left, right;
} Node;

// Max-Heap
// for every node 't' is t > then it's children
int isHeap(BTree t) {
    return t->data > t->left->data && t->data > t->right->data &&
           isHeap(t->left) && isHeap(t->right);
}
