#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

// function to generate array of ancestors
void generateArray(Node *root, int ancestors[])
{
	// There will be no ancestor of root node
	ancestors[root->data] = -1;

	// level order traversal to
	// generate 1st ancestor
	queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();

		if (temp->left)
		{
			ancestors[temp->left->data] = temp->data;
			q.push(temp->left);
		}

		if (temp->right)
		{
			ancestors[temp->right->data] = temp->data;
			q.push(temp->right);
		}
	}
}

// function to calculate Kth ancestor
int kthAncestor(Node *root, int n, int k, int node)
{
	// create array to store 1st ancestors
	int ancestors[n+1] = {0};

	// generate first ancestor array
	generateArray(root,ancestors);

	// variable to track record of number of
	// ancestors visited
	int count = 0;

	while (node!=-1)
	{
		node = ancestors[node];
		count++;

		if(count==k)
			break;
	}

	return node;
}

Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	int k = 2;
	int node = 5;

	cout<<kthAncestor(root,5,k,node);
	return 0;
}
/*
INPUT / OUTPUT
1
*/