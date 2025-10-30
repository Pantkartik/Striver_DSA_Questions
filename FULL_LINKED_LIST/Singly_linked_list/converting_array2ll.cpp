#include<bits/stdc++.h>
using namespace std;

// structure of node head

class Node{
    public :
    int data;
    Node*next;

    
    Node(int data1){
        data=data1;
        next=nullptr;

    }
    
};


// converting the array into the linked list 

Node*Convert_array2LL(vector<int>&array){
    Node*head=new Node(array[0]);    // this is the initial head 
    Node*mover=head;                 // this is for the moving pointer

    for(int i=1;i<array.size();i++){
        Node*temp=new Node(array[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
// to find the length of the linkdlist 
int length_ll(Node *head){
    // traversal in ll 
    Node*temp=head;
    int count=0;
    while(temp!=nullptr){
        
        cout<< temp->data <<endl;
        temp=temp->next;
        count++;
    }
    return count;
}

// to search the given element in a linked list
int search(Node *head,int k){
    Node*temp=head;
    while(temp!=nullptr){
        
        if(temp->data==k){

            return 1;
        }
        temp=temp->next;
    }
     return 0;
}
int main(){
    vector<int>array={1,2,3,4,5,6};
    Node*head=Convert_array2LL(array);
    // cout<<head->data;


    // traversal in ll 
    Node*temp=head;
    while(temp!=nullptr){
        // cout<< temp->data <<endl;
        temp=temp->next;
    }

    // length of ll 

    // cout<<length_ll(head);

    // search the k element in ll
    cout<<search(head,1);
}