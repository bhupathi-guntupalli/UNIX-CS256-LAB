//bst_insert.c
#include <stdio.h>
#include <stdlib.h>
#include "bst_functions.h"

TreeNode* insert(TreeNode* root, int key) {
    if (root == NULL) {
        TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
        newNode->key = key;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}


