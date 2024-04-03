//bst_search.c:

#include <stdio.h>
#include "bst_functions.h"

TreeNode* search(TreeNode* root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    }

    if (key < root->key) {
        return search(root->left, key);
    }
    return search(root->right, key);
}


