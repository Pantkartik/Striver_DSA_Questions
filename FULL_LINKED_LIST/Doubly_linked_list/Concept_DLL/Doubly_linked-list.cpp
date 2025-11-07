#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node*prev;
    Node*next;
public:

 Node(int data1){
    data=data1;
    prev=nullptr;
    next=nullptr;
}
};
// converting the array to the doubly linked list 

Node*converting_array_dll(vector<int>array){
    Node*head=new Node(array[0]);
    Node*mover=head;

    for(int i=1;i<array.size();i++){
        Node*temp=new Node(array[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
}


// to print the doubly linked list
void printdll(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    vector<int>array={12,34,52,63,73,72,1,3};
    Node*head=converting_array_dll(array);
    printdll(head);
    return 0;
}