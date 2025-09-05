//  priority queue logic is that the LARGEST ELEMENT WILL BE ALWAYS AT THE TOP 



#include<bits/stdc++.h>
using namespace std ;
int main(){


    priority_queue<int>pq;
    
    pq.push(10);
    pq.push(20);
    pq.push(3);
    pq.push(40);
    pq.push(5);
    pq.push(11);



    // cout<<"The topmost will be the largest : "<<pq.top()<<endl;

    // // deleting the topmost and seeing the next coming

    // pq.pop();

    // cout<<"Next top is the second largest : "<<pq.top()<<endl;


    while(!pq.empty){
        cout<<pq.top<<endl;
    }

}