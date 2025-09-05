//  stack is lifo
//  last in first out 

#include<bits/stdc++.h>
using namespace std ;
int main(){



    stack<int>st;
    stack<int>::iterator it;

    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);

    cout<<"Top element : "<<st.top()<<endl;

    // deleting the top elem
    st.pop();

    cout<<"Next top : "<<st.top()<<endl;

    // to clear the stack

    stack.empty();
    stack<int>::iterator it;
    for(it=st.top();it!=st.size();++it){
        cout<<*it<<endl;
    }

}