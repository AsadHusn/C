#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int n;
	struct node *left, *right;
}
node;
node *root = NULL;
//	Print
void print(node *root)
{
	if(root == NULL)
	return;
	printf("%i\t", root->n);
	print(root->left);
	print(root->right);
}

int main()
{
	for(int i=0; i<10; i++)
	{
//		Creating new node
		node *newnode = malloc(sizeof(node));
		newnode->n = i+1;
		newnode->left = newnode->right = NULL;
		
		if(root == NULL)
		root = newnode;
		else
		{
//			Traversing the tree
			node *parent, *temp = root;
			while(temp != NULL)
			{
//				Remember Parent temp-1 location
				parent = temp;
//				if n is less increase temp to left
				if(newnode->n < temp->n)
				temp = temp->left;
//				if n is greater increase temp to right
				else
				temp = temp->right;
			}
//			Now we have parent at last position, check values
			if(newnode->n > parent->n)
			parent->right = newnode;
			else
			parent->left = newnode;
		}
	}

//	Print
	print(root);
	
//	Memory Leak clear
	while(root != NULL)
	{
		node *temp;
		if(root->left == NULL)
		{
			temp = root->right;
		}
		else
		{
			temp = root->left;
		}
		free(root);
		root = temp;
	}
}
