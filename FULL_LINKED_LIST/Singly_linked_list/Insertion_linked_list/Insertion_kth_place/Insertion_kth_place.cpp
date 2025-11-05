// the logic is that we iterate from the head to the nullptr-1 and with the help of temp we move in the linked list ,

// edge case 
/* 
1. if the linked list is empty which means head == nullptr we make a new Node(el,head)  and return head;
2. if the k == 1 we make a new node(el,head) and temp=temp->next;
*/

// approach :
/* 

if(head==nullptr)return new Node(el,head);
Node*temp=head;
int cnt=1;
while(temp!=nullptr){
if(k==1){return new Node(el,head)
temp=temp->next;
}
cnt++;
if(cnt==k-1){
Node*newnode=new Node(el);
x->next=temp->next;
temp->next=x;
break;
}
}return head;


*/

Node*insertion_kth_place(Node*head,int k,int elem){
    if(head==nullptr){
        if(k==1){
            return new Node(elem,nullptr);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new node(elem,head);
    }
    int cnt=0;
    Node*temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            Node*x=new Node(elem);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}