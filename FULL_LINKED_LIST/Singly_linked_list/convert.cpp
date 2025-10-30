// to convert the array into the linked list using the oops concepts 


#include<bits/stdc++.h>
using namespace std ;

// defining a class node which will decide the structure of the head and other node 

class   Node{
    // lets make it public
   public: 
    int data;
    Node*next;
   public:
    // constructor
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node*convert_array_2_ll(vector<int>array){
    Node*head=new Node(array[0]);
    // setting a mover pointer for gathering the further of the data 
    Node*mover=head;


    // iterating over the rest of the array from the index 1 till the size of the array and than changinig the location of the mover , linking it with the next which than after points to the rest of the elements mover=temp ;

    for(int i=1;i<array.size();i++){
        Node*temp=new Node(array[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
} 


// now creating a main function which is used has a array and than we access the node function of converting the array to linekd list

int main(){
    vector<int>array={1,2,3,4,5};
    Node*head=convert_array_2_ll(array);
    // acccesing the fucntion 
    cout<<head->data;
}