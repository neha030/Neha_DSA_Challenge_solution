#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
 
/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
 
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
 
    return 0;
}
/*
INPUT / OUTPUT
Preorder traversal of binary tree is
1 2 4 5 3 
Inorder traversal of binary tree is
4 2 5 1 3 
Postorder traversal of binary tree is
4 5 2 3 1
*/