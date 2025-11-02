// to remove the kth element from a linked list we use the three pointer approach 

// taking temp pointing to the head and saving it moving temp till nullptr and counter++ if counter==k we delete that position using prev=null and prev->next=prev->next->next   this points the k-1 elem with the k+1 elem and than we free the temp which is at k ,
/*
we resolve the edge case 
1. if linked list is empty or having 1 elem we return the head itself 
2. if we have to delete the head of the linked list when k = 1
*/


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

// converting a array into  linked list 
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


// to remove the kth elemenent in the linked list 


Node*remove_kth_elem(Node*head,int k){
    if(head==nullptr)return nullptr;
    if(k==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    // we need to declare the counter for comparison to k and node*temp=head,prev=nullptr
    int cnt=0;
    Node*temp=head;
    Node*prev=nullptr;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}



int main(){
    vector<int>array={1,2,34,5,6};
    Node*head=convert_array__ll(array);
    cout<<head->data<<endl;


    head=remove_kth_elem(head,1);
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}