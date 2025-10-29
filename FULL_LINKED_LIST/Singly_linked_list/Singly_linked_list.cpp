// making a singly linked list 

// method 1 using a struct 
                                                                                    
#include<bits/stdc++.h>
using namespace std ;


struct NODE{
    int data;
    NODE *next;

    // constructor
    NODE(int data1,NODE*next1){
    data=data1;
    next=next1;
    }
};

int main(){
    vector<int>arr={1,2,3,45,5};


    // printing the first element of a vector array using the linked list 

    NODE*y=new NODE(arr[0],nullptr);    // created a linked list of data the index 0 of array and next pointer pointing to the next node 

    cout<<y->data<<endl;
}



// method 2 ( using the class node)

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

