#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node *createNode(int value)
{
	struct node newNode = (struct node)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

struct node *insert(struct node *root, int value)
{
	if (root == NULL)
{
	return createNode(value);
}
if(value <= root->data)
{
	root->left = insert (root->left, value);
}
else if(value>root->data)
{
	root->right = insert(root->right, value);
}
return root;
}

void inorderTraversal(struct node *root)
{
if(root != NULL)
{
	inorderTraversal(root->left)	;
	printf("%d ", root->data);
	inorderTraversal(root->right);
	}	
}

int main()
{
	struct node *root = NULL;
	
	root = insert (root, 1);
	insert(root, 10);
	insert(root, 100);
	insert(root, 1000);
	insert(root, 10000);
	insert(root, 100000);
	
	printf("Inorder Traversal of the BST: ");
	inorderTraversal(root);
	printf("\n");
	return 0;
}