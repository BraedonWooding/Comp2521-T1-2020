#include <stdio.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
  int value;
  BSTree left;
  BSTree right;
} BSTNode;

// print the height difference between both left and right subtrees
// for every node in a given binary tree.
int printHeightDiff(BSTree t) {
    if (t == NULL) {
        return 0;
    } else {
        int left = printHeightDiff(t->left);
        int right = printHeightDiff(t->right);
        int diff = left - right;
        if (diff < 0) diff *= -1;
        printf("Diff is %d for node %d\n", diff, t->value);
        if (left > right) return left + 1;
        else              return right + 1;
    }
}
