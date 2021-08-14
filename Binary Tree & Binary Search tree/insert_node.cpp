#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	struct Node *left, *right;
};

Node* newNode(int data)
{
	Node* temp = new Node;

	temp->key = data;

	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

Node* insert(Node* root, int key)
{
	// Create a new Node containing
	// the new element
	Node* newnode = newNode(key);

	// Pointer to start traversing from root and
	// traverses downward path to search
	// where the new node to be inserted
	Node* x = root;

	// Pointer y maintains the trailing
	// pointer of x
	Node* y = NULL;

	while (x != NULL) {
		y = x;
		if (key < x->key)
			x = x->left;
		else
			x = x->right;
	}

	// If the root is NULL i.e the tree is empty
	// The new node is the root node
	if (y == NULL)
		y = newnode;

	// If the new key is less then the leaf node key
	// Assign the new node to be its left child
	else if (key < y->key)
		y->left = newnode;

	// else assign the new node its right child
	else
		y->right = newnode;

	// Returns the pointer where the
	// new node is inserted
	return y;
}

void Inorder(Node* root)
{
	if (root == NULL)
		return;
	else {
		Inorder(root->left);
		cout << root->key << " ";
		Inorder(root->right);
	}
}

int main()
{

	Node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	Inorder(root);

	return 0;
}
/*
INPUT / OUTPUT
20 30 40 50 60 70 80
*/