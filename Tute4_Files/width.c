#include <stdio.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
  int value;
  BSTree left;
  BSTree right;
} BSTNode;

int width(BSTree t) {
    if (t == NULL) {
        return 0;
    } else if (t->left == NULL && t->right == NULL) {
        return 3;
    } else {
        return 3 + width(t->left) + width(t->right);
    }
}
