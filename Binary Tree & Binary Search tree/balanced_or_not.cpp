#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
};

int height(node* node);

bool isBalanced(node* root)
{
	int lh; 
	int rh;

	if (root == NULL)
		return 1;

	/* Get the height of left and right sub trees */
	lh = height(root->left);
	rh = height(root->right);

	if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
		return 1;

	/* If we reach here then
	tree is not height-balanced */
	return 0;
}

/* returns maximum of two integers */
int max(int a, int b)
{
	return (a >= b) ? a : b;
}

/* The function Compute the "height"
of a tree. Height is the number of
nodes along the longest path from
the root node down to the farthest leaf node.*/
int height(node* node)
{
	/* base case tree is empty */
	if (node == NULL)
		return 0;

	/* If tree is not empty then
	height = 1 + max of left
		height and right heights */
	return 1 + max(height(node->left),
				height(node->right));
}

node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(8);

	if (isBalanced(root))
		cout << "Tree is balanced";
	else
		cout << "Tree is not balanced";
	return 0;
}

/*
INPUT / OUTPUT
Tree is not balanced
*/