//Write a program to create a binary search tree of integers and perform the following operations using linked list.

#include <stdio.h>
		root -> left = deleteNode (root -> left , key);
	else if(key>root -> key)
		root -> right = deleteNode(root-> right ,key);
	else{
		if(root-> left == NULL){
			struct node *temp = root->right ;
			free(root);
			return temp;
		}else if(root->right == NULL){
			struct node *temp = root->left;
			free(root);
			return temp;
			
		}
		struct node *temp = minValueNode(root -> right);
		root -> key = temp ->key;
		root -> right = deleteNode(root -> right , temp -> key);
	}
	return root;


}

// Driver code
int main() {
  struct node *root = NULL;
  int n,data;
  printf("Enter how many nodes you want to insert in BST :");
  scanf("%d",&n);
  for( int i =0 ; i < n ; i++){
      printf("Enter the value: ");
      scanf("%d", &data);
      root = insert(root, data);
  }

  printf("Inorder traversal(Always gives ascending order): ");
  inorder(root);
  printf("\nPreorder traversal: ");
  preorder(root);
  printf("\nEnter the data to delete: ");
  scanf("%d",&data);

  printf("After deleting %d\n",data);
  root = deleteNode(root, data);
  printf("Inorder traversal: ");
  inorder(root);
  printf("\nPreorder traversal: ");
  preorder(root);
}
