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



Node*insertion_kth_place(Node*head,int k,int el){
    Node*temp=head;
    if(head==nullptr){
        if(k==1)return new Node(el,nullptr);
        return head;
        else cout<<"Error"<<endl;
    }
    // if k==1
    if(k==1){
        Node*temp=new Node(el,head);
        return temp;
    }
    // k >1
    int cnt=1,temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            Node*x=new Node(el);
            x->next=temp->next;
            temp->next=x;
           break;
        }
        temp=temp->next;
    }
    return head;
}