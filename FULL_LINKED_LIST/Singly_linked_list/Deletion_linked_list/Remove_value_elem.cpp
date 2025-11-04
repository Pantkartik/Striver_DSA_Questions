// now we have to remove the elem of value in a linked list logic is same as deleting elem at k 

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

// converting array to linked list 

Node*convert_array__ll(vector<int>array){
    Node*head=new Node(array[0]);
    Node*mover=head;

    for(int i=1;i<array.size();i++){
        Node*temp=new Node(array[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}


// remove the kth element from the linked list 
Node*remove_kth_elem(Node*head,int k){
    int cnt=0;
    Node*prev=nullptr;
    Node*head=temp;
    if(head==nulllptr)return head;
     while(temp!=nullptr){
         cnt++;
            if(cnt==k){
       prev->next=prev->next->next;
            delete(temp);
            break;
        }
        
        prev=temp;
        temp=temp->next;
    
     }
 
    return head;
}



// remove the given elem from linked list 


Node*remove_elem(Node*head,int elem){
    if(head==nullptr)return nullptr;
    Node*temp=head;
    Node*prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==elem){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}




