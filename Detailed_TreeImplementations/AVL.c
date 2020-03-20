#include <stdlib.h>

/*
 * This is a skeleton implementation...
 * To help for the lab
 */

typedef struct avl_node_t AVLNode;
struct avl_node_t {
    AVLNode *left;
    AVLNode *right;
    int key;
    // Could we also store height?
    // Yes -- it would make it faster
    // But we won't since its easy to get

    // In the lab you'll have to store the height!
};

/* Instead of storing height we'll just recalculate it each time
 * of course if we want to actually reach O(log n) insertions we'll need
 * to have this be cached and only updated when necessary.
 * 
 * In the lab you won't do it this way ;)
 */
int height(AVLNode *n) {
    if (n == NULL) {
        return 0;
    } else {
        int left = height(n->left);
        int right = height(n->right);
        return (left > right ? left : right) + 1;
    }
}

/*
Right Rotating at 7
      7
     / \
    3   8
   /     \
  2       5

1)
        3
       / \
      2   7
     /     \
    3       8
   /         \
  2           5

2)
     3
    / \
   2   7
  /     \
 5       8
*/
AVLNode *right_rotate(AVLNode *root) {
    AVLNode *left = root->left;
    AVLNode *left_right = left->right;
    // 1) TODO:
    // 2) TODO:
    return left;
}

/*
Left Rotating at 3
     3
    / \
   2   7
  /     \
 5       8

1)
        7
       / \
      3   8
     /     \
    2       7
   /         \
  5           8

2)
     7
    / \
   3   8
  /     \
 2       5
*/
AVLNode *left_rotate(AVLNode *root) {
    AVLNode *right = root->right;
    AVLNode *right_left = right->left;
    // 1) TODO:
    // 2) TODO:
    return right;
}

AVLNode *insert(AVLNode *root, int key) {
    // Case 1) Empty Tree
    if (root == NULL) {

    }

    // Case 2) Duplicates
    if (root->key == key) {

    } else if (key < root->key) /* Case 3) Left */ {

    } else /* Case 4) Right */ {

    }

    // What happens if we do height(root->right) - height(root->left)
    // Answer: The tree prefers to be more balanced on the right than on the left
    // TODO: In the lab you'll use a different way to calculate balance won't
    // This is taken from lecture slides mostly
    int balance = height(root->left) - height(root->right);
    if (balance > 1) {
        // Unbalanced in left
        // What way do we rotate?? (RR vs LL)
        // When do we need to double rotate?
        if (key < root->left->key) {
            
        } else /* key > root->left->key; */ {
            
        }
    } else if (balance < -1) {
        // Unbalanced in right
        // What way do we rotate??
        // Which one do we need to double rotate?
        if (key > root->right->key) {

        } else /* key < root->right->key */ {

        }
    }
    return root;
}

AVLNode *find_node(AVLNode *root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    } else if (key < root->key) {
        return find_node(root->left, key);
    } else if (key > root->key) {
        return find_node(root->right, key);
    }
}
