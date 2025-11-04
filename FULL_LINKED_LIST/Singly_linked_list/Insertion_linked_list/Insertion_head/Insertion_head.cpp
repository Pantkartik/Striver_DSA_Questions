// to insert at the head of a linked list we just need to make a new node and it should point to the head than we have to return the temp as it is our new node 

#include<bits/stdc++.h>
using namespace std;

class Node{
   public: 
    int data;
    Node*next;

    public:
      Node(int data1){
        data=data1;
        next=nullptr;
      }
};

// converting a array to the linked list 


Node* convert_array_ll(vector<int> array) {
    Node* head = new Node(array[0]);
    Node* mover = head;

    for(int i = 1; i < array.size(); i++) {
        Node* temp = new Node(array[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}



// lets write only the logic 

Node*insertion_head_ll(Node*head,int val){
    Node*temp=new Node(val,head);
    return temp;
}


