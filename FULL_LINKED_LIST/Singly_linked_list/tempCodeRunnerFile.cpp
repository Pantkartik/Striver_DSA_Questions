// method 2 ( using the class node)

#include<bits/stdc++.h>
using namespace std ;



class Node{
    int data;
    Node*next;



    Node(int data1,Node*next){
        data=data1;
        next=next1;
    }



};
int main(){
    vector<int>arr={1,2,3,4,5};


    // creating a singlt ll and than pushing index 0 to it and poiniting the next address

    Node*y=new Node(arr[0],nullptr);
    cout<<y->data<<endl;
}