#ifndef BST_FUNCTIONS_H
#define BST_FUNCTIONS_H

typedef struct TreeNode {
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* insert(TreeNode* root, int key);
TreeNode* deleteNode(TreeNode* root, int key);
TreeNode* search(TreeNode* root, int key);
void printInorder(TreeNode* root);

#endif /* BST_FUNCTIONS_H */
