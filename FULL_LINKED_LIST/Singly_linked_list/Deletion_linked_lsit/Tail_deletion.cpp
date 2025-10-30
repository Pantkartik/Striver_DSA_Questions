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
