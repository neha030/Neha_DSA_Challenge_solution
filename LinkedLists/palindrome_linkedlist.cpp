#include<bits/stdc++.h>
 using namespace std;

class Node {
public:
        int data;
        Node(int d){
            data = d;
        }
        Node *ptr;
};

bool isPalin(Node* head){
    
        Node* slow= head;
        stack <int> s;
        while(slow != NULL){
                s.push(slow->data);
                slow = slow->ptr;
        }

        while(head != NULL ){
            
            int i=s.top();
            s.pop();
            if(head -> data != i){
                return false;
            }
        head=head->ptr;
        }
 
return true;
}
 

int main(){

    Node one = Node(31);
    Node two = Node(32);
    Node three = Node(33);
    Node four = Node(34);
    Node five = Node(35);

    five.ptr = NULL;
    one.ptr = &two;
    two.ptr = &three;
    three.ptr = &four;
    four.ptr = &five;
    Node* temp = &one;
 
    int result = isPalin(&one);
 
    if(result == 1)
            cout<<"The value is True\n";
    else
        cout<<"The value is False\n";
 
return 0;
}
/*
INPUT / OUTPUT
The value is not a palindrome. 
*/
