#include <stdio.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
  int value;
  BSTree left;
  BSTree right;
} BSTNode;

#define TREE_IS_NOT_BALANCED (-99)

// Return height of tree if it is balanced else
// return -99 is it is not balanced
int isHeightBalanced(BSTree t) {
    if (t == NULL) {
        return 0;
    } else {
        int left = isHeightBalanced(t->left);
        int right = isHeightBalanced(t->right);
        int diff = left - right;
        if (diff < 0) diff *= -1;

        if (left == TREE_IS_NOT_BALANCED ||
            right == TREE_IS_NOT_BALANCED ||
            diff > 1) {
            return TREE_IS_NOT_BALANCED;
        } else {
            if (left > right) return left + 1;
            else              return right + 1;
        }
    }
}
