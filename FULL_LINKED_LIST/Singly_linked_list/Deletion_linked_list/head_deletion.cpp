// to delete the head in the linked list we just make a node head temp and temp pass to next and than delete the temp 

// a little code snippet is like this 


Node*delete_head(Node*head){

    Node*head=temp;
    head=head->next;
    free(head);

    return head;

    
}



