#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data)
{
	struct Node* node = (struct Node*)
						malloc(sizeof(struct Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return(node);
}

void mirror(struct Node* node)
{
	if (node == NULL)
		return;
	else
	{
		struct Node* temp;
		
		/* do the subtrees */
		mirror(node->left);
		mirror(node->right);
	
		/* swap the pointers in this node */
		temp	 = node->left;
		node->left = node->right;
		node->right = temp;
	}
}

void inOrder(struct Node* node)
{
	if (node == NULL)
		return;
	
	inOrder(node->left);
	cout << node->data << " ";
	inOrder(node->right);
}

int main()
{
	struct Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	
	/* Print inorder traversal of the input tree */
	cout << "Inorder traversal of the constructed"
		<< " tree is" << endl;
	inOrder(root);
	
	/* Convert tree to its mirror */
	mirror(root);
	
	/* Print inorder traversal of the mirror tree */
	cout << "\nInorder traversal of the mirror tree"
		<< " is \n";
	inOrder(root);
	
	return 0;
}


/*
INPUT / OUTPUT
Inorder traversal of the constructed tree is 
4 2 5 1 3 
Inorder traversal of the mirror tree is 
3 1 5 2 4 
*/