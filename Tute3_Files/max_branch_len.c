#include <stdlib.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
    int value;
    BSTree left;
    BSTree right;
} BSTNode;

int BSTreeMaxBranchLen(BSTree t) {
    if (t == NULL) {
        // Case: Empty tree has a max branch len of 0
        return 0;
    } else {
        // Case: Non empty tree has a max branch length of the maximum
        //       branch length of it's left subtree and right subtree
        //       +1 (for itself)
        int left = BSTreeMaxBranchLen(t->left);
        int right = BSTreeMaxBranchLen(t->right);
        // This is called a 'ternary' operator (ternary meaning 3 arguments)
        // often called the 'ternary' conditional operator
        // structure is: cond ? if_true : if_false
        // i.e. this is very very similar to...
        // if (left > right) { return left + 1; } else { return right + 1; }
        return (left > right ? left : right) + 1;
    }
}