#include <stdlib.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
    int value;
    BSTree left;
    BSTree right;
} BSTNode;

int countInternal(BSTree t) {
    if (t == NULL) {
        // Case: Empty Tree, an empty tree has no internal nodes
        return 0;
    } else if (t->left == NULL && t->right == NULL) {
        // Case: A leaf node, a leaf node is not an internal node
        //       You could also visualise this as a single tree with a single
        //       node.
        return 0;
    } else {
        // Case: Other, this has children so it's an internal node
        //       either of it's children could also be internal so we check both
        return countInternal(t->left) + countInternal(t->right) + 1;
    }
}