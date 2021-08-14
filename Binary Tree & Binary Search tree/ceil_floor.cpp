#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;

	Node(int value)
	{
		data = value;
		left = right = NULL;
	}
};

void floorCeilBSTHelper(Node* root, int key, int& floor, int& ceil)
{

	while (root) {

		if (root->data == key) {
			ceil = root->data;
			floor = root->data;
			return;
		}

		if (key > root->data) {
			floor = root->data;
			root = root->right;
		}
		else {
			ceil = root->data;
			root = root->left;
		}
	}
	return;
}

// Display the floor and ceil of a given key in BST.
// If key is less than the min key in BST, floor will be -1;
// If key is more than the max key in BST, ceil will be -1;
void floorCeilBST(Node* root, int key)
{

	// Variables 'floor' and 'ceil' are passed by reference
	int floor = -1, ceil = -1;

	floorCeilBSTHelper(root, key, floor, ceil);

	cout << key << ' ' << floor << ' ' << ceil << '\n';
}

int main()
{
	Node* root = new Node(8);

	root->left = new Node(4);
	root->right = new Node(12);

	root->left->left = new Node(2);
	root->left->right = new Node(6);

	root->right->left = new Node(10);
	root->right->right = new Node(14);

	for (int i = 0; i < 16; i++)
		floorCeilBST(root, i);

	return 0;
}

/*
INPUT / OUTPUT
0 -1 2
1 -1 2
2 2 2
3 2 4
4 4 4
5 4 6
6 6 6
7 6 8
8 8 8
9 8 10
10 10 10
11 10 12
12 12 12
13 12 14
14 14 14
15 14 -1
*/