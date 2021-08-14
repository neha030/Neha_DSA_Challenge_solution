#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left, *right;
};

unsigned int getfullCount(struct Node* root)
{
	if (root == NULL)
	return 0;

	int res = 0;
	if (root->left && root->right)
	res++;

	res += (getfullCount(root->left) +
			getfullCount(root->right));
	return res;
}

struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

int main(void)
{
    struct Node *root = newNode(2);
	root->left = newNode(7);
	root->right = newNode(5);
	root->left->right = newNode(6);
	root->left->right->left = newNode(1);
	root->left->right->right = newNode(11);
	root->right->right = newNode(9);
	root->right->right->left = newNode(4);

	cout << getfullCount(root);

	return 0;
}
