// pair is used to use the two or more data and data types 


#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int,int>p1={1,2};
    cout<<"To print the first elem: "<<p1.first<<endl;


    // nested pair 

    pair<int,pair<int,int>>p={1,{1,2}};

    cout<<"To print the first and second , first elem of the respective"<<p.first<<p.second.first<<p.second.second<<endl;

} 

