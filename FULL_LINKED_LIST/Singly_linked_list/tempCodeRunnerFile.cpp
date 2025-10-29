#include<bits/stdc++.h>
using namespace std ;



class Node{

    public:

    int data;
    Node*next;


    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }



};
int main(){
    vector<int>arr={1,2,3,4,5};


    // creating a singlt ll and than pushing index 0 to it and poiniting the next address

    Node*head=new Node(arr[0],nullptr);
    cout<<head->data<<endl;

    Node*temp=head;
    while(temp!=nullptr){
        cout<< temp->data <<" "<<endl;
        temp=temp->next;
    }
}

