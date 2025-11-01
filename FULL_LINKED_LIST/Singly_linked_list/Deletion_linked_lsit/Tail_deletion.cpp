#include<bits/stdc++.h>
using namespace std;

// Making a class 
class Node {
public: 
    int data;
    Node* next;

public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Converting array to linked list
Node* convert_array_ll(vector<int> array) {
    Node* head = new Node(array[0]);
    Node* mover = head;

    for(int i = 1; i < array.size(); i++) {
        Node* temp = new Node(array[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function for deleting the tail of the linked list
Node* delete_linked_list(Node* head) {
    // Edge case: empty list or single node
    if(head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }
    
    // Traverse to second-last node
    Node* temp = head;
    while(temp->next->next != nullptr) {
        temp = temp->next;
    }
    
    // Delete the tail node
    delete temp->next;
    
    // Set second-last node's next to nullptr
    temp->next = nullptr;
    
    return head;
}

// Function to print the linked list
void print_ll(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6};
    
    // Convert array to linked list
    Node* head = convert_array_ll(array);
    
    // Print original linked list
    cout << "Original linked list: ";
    print_ll(head);
    
    // Delete the tail
    head = delete_linked_list(head);
    
    // Print after deleting tail
    cout << "After deleting tail: ";
    print_ll(head);
    
    return 0;
}





// to remove the tail of the linked list 

/*  Logic  is that we first point temp to head and move head one elem before the last elem and remove the head*/

Node*delete_tail_linked_list(Node*head){
    Node*temp=head;
    if(head==nullptr || head->temp==nullptr)nullptr;
    while(head->next->next!=nullptr){
        temp=temp->next;
    }
    free(head);
    temp->next=nullptr;
    return head;
}



// to remove the head of the linked list 

/* The logic is this : we point the temp to the head and mover also to the head and pass the temp to next  which passes the head to the next elem and we delete the old head  */

// lets see

Node*removehead(Node*head){
    Node*head=temp;
    head=head->next;
    free(head);
    return head;
}




// remove the tail of the linked list 
Node*remove_tail(Node*head){
    Node*temp=head;
    if(head==nullptr || head->next==nullptr)return nullptr;
    while(head->next->next!=nullptr){
        temp=temp->next;
    }
    free(head);
    temp->next=nullptr;
    return head;
}



// to convert the array into linked list

Node*convert_array_ll(vector<int>array){
    Node*head=new node(array[0]);
    Node*mover=head;
    for(int i=1;i<array.size();i++){
        Node*temp=new node(array[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}