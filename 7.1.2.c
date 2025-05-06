//Write a program to create a binary search tree of integers and perform the following operations using linked list.

#include <stdio.h>
void postorderInBST(BSTNODE root) {
    if (root != NULL) {
        postorderInBST(root->left);
        postorderInBST(root->right);
        printf("%d ", root->data);
	}
}
// Function to search for an element in BST
BSTNODE searchNodeInBST(BSTNODE root, int ele) {     if (root == NULL) {
        return NULL;
    }
    if (root->data == ele) {
        return root;
    }
    if (ele < root->data) {
        return searchNodeInBST(root->left, ele);
    } else {
        return searchNodeInBST(root->right, ele);
    }
}

// Function to display the menu
void displayMenu() {
    printf("\n1.Insert\n");
    printf("2.Inorder Traversal\n");
    printf("3.Preorder Traversal\n");
    printf("4.Postorder\n");
    printf("5.Search an element\n");
    printf("6.Exit\n");
}
