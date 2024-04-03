#include <stdio.h>
#include "bst_functions.h"

void printInorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printInorder(root->left);
    printf("%d ", root->key);
    printInorder(root->right);
}

