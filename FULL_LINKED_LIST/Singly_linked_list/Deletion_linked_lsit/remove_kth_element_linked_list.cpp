// to remove the kth element from a linked list we use the three pointer approach 

// taking temp pointing to the head and saving it moving temp till nullptr and counter++ if counter==k we delete that position using prev=null and prev->next=prev->next->next   this points the k-1 elem with the k+1 elem and than we free the temp which is at k ,
/*
we resolve the edge case 
1. if linked list is empty or having 1 elem we return the head itself 
2. if we have to delete the head of the linked list when k = 1
*/


#include<bits/stdc++.h>
using namespace std;


//  making a class for the head 

class Node{
    // making in public 
public:
    int data;
    Node*next;
public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};



//  converting the array to the linked list

Node*convert_array_linked_list(vector<int>array){
  Node*head= new Node(array[0]);
  Node*mover=head;

  for(int i=1;i<array.size();i++){
    Node*temp=new Node(array[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}

Node*delete_head_linked_list(Node*head){
// to delete the head the logic is that we point the temp to head and save the head than we move temp =temp->next and free the head than return the head 

// lets seee 
Node*head=temp;
head=head->next;
delete head;
return head;
}
Node*delete_tail_linked_list(Node*head){
// to remove the tail we iterate the temp one elem before the nullptr and remove the temp->next 
if(head==nullptr || head->next==nullptr)return nullptr;
Node*head=temp;
while(head->next->next!=nullptr){
 temp=temp->next;
}
delete temp;
temp->next=nullptr;
return head;
}

Node*delete_kth_elem_linked_list((Node*head,int k)){
// to remove the kth elem 
// edge cases 
/*  1.  if ll is empty or have only 1 elem head we return the head
    2.  if cnt==k   we remove the head 
*/

// if cnt!=k we iterate till nullptr and prev->next=prev->next->next delete temp break and prev=temp, temp=temp->next


// first we declare the neccesary variables 

Node*temp=head;
Node*prev=nullptr;
int cnt=0;
while(temp!=nullptr){
    cnt++;
    if(cnt==k){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
}
return head;
}