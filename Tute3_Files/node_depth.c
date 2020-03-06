#include <stdlib.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
    int value;
    BSTree left;
    BSTree right;
} BSTNode;

int nodeDepth(BSTree t, int key) {
    if (t == NULL) {
        // Case: Empty tree, in an empty tree the key cannot exist
        //       so we return -1 to signify that it has no node with value key
        return -1
    } else if (t->value == key) {
        // Case: Tree with 'root' value == key so we found it
        // Note: 'root' since this isn't necessarily the very root of the tree
        //       but we can view it as the root of this subtree
        return 1;
    } else if (key > t->value) {
        // Case: Tree with key > 'root' value therefore we must visit
        //       right subtree.
        int count = nodeDepth(t->right);
        if (count != -1) {
            count++;
        }
        return count;
    } else { /* key < t->value */
        // Case: Tree with key < 'root' value therefore we must visit
        //       left subtree.
        int count = nodeDepth(t->left);
        if (count != -1) {
            count++;
        }
        return count;
    }
}