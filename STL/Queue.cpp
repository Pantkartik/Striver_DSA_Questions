//  A queue is same as stack but FIFO ( first in first out )

#include<bits/stdc++.h>
using namespace std; 

int main(){


    queue<int>que;


    que.push(5);
    que.push(10);
    que.push(15);
    que.push(20);
    que.push(25);

    cout<<que.front()<<endl;

    // deleting front and checking for the next in line 

    que.pop();

    cout<<que.front()<<endl;

    // to know the last element 
    cout<<que.back()<<endl;

    // this proves that the queue is a fifo 


}