#include <bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   Node *next;
};
void createList(Node ** headPtr, int new_data){
   Node* newNode = new Node();
   newNode->data = new_data;
   newNode->next = (*headPtr);
   (*headPtr) = newNode;
}
void printList(Node *head){
   Node *temp = head;
   while (temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
void deleteNnodesAfterM(Node *head, int M, int N){
   Node *current = head, *t;
   int nodeCount;
   while (current){
      for (nodeCount = 1; nodeCount < M && current!= NULL; nodeCount++)
      current = current->next;
      if (current == NULL)
      return;
      t = current->next;
      for (nodeCount = 1; nodeCount<=N && t!= NULL; nodeCount++){
         Node *temp = t;
         t = t->next;
         free(temp);
      }
      current->next = t;
      current = t;
   }
}
int main(){
   Node* head = NULL;
   int M=2, N=2;
   createList(&head, 2);
   createList(&head, 4);
   createList(&head, 6);
   createList(&head, 8);
   createList(&head, 10);
   createList(&head, 12);
   createList(&head, 14);
   cout << "M = " << M<< " N = " << N<<endl;
   cout<< "Original linked list :"<<endl;
   printList(head);
   deleteNnodesAfterM(head, M, N);
   cout<<"Linked list after deletion :"<<endl;
   printList(head);
   return 0;
}
/*
INPUT / OUTPUT
M = 2 N = 2

Original linked list :
14 12 10 8 6 4 2

Linked list after deletion :
14 12 6 4
*/