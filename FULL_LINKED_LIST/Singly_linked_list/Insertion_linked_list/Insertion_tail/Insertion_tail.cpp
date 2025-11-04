// logic is this we move the head from starting to end in form of temp stop the movement of temp before it becomes the nullptr the last location of temp->next should become the new node with the val data


Node*tail_insertion_ll(Node*head,int val){
    if(head==nullptr){
        // we add the new node at the empty linked list
        return new Node(val);
        
    }
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    // point the temp next to the new node 
    Node*newnode=new Node(val);
    temp->next=newnode;
    return head;
}