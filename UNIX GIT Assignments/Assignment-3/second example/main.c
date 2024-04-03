//main.c:

#include <stdio.h>
#include "bst_functions.h"

int main() {
    TreeNode* root = NULL;

    // Insert some nodes into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Search for a node in the BST
    TreeNode* searchResult = search(root, 40);
    if (searchResult != NULL) {
        printf("Node with key 40 found in the BST.\n");
    } else {
        printf("Node with key 40 not found in the BST.\n");
    }

    // Delete a node from the BST
    root = deleteNode(root, 30);

    // Print the BST
    printf("Inorder traversal of the BST after deletion:\n");
    printInorder(root);

    return 0;
}

