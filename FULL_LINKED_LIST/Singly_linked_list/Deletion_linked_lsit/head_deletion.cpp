// deletion of node in a linked list 

#include<bits/stdc++.h>
using namespace std;


class Node{
    public:

        int data;
        Node*next;
    
    // constructor
    Node(int data1){
        data=data1;
        next=nullptr;

    }
};

Node*delete_node(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        
        head=head->next;
        free(temp);
        
    }
}

int main(){

}