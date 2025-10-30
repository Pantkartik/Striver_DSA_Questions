// convert the  array into the linkedlist and find the length and to traverse in the linked list 


#include<bits/stdc++.h>
using namespace std;

// making a class node which is used for the node formation

class Node{
    public:
    int data;
    Node*next;
    
    // design  a constructor 
    public: 

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

// function to convert the array into the linked list

Node*convert_array_ll(vector<int>array){
    Node*head=new Node(array[0]);
    Node*mover=head;

    for(int i=1;i<array.size();i++){
        Node*temp=new Node(array[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

// to check if the element is present in the linked list 
int check_elem(Node*head,int y){
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==y){
            return 1;
            temp=temp->next;
        }
        return 0;
    }
}
// design a main function for calling all the function 

int main(){

    vector<int>array={1,2,3,45,6,7,78};
    Node*head=convert_array_ll(array);
    cout<<head->data;
}