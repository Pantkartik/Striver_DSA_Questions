#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,1,2,3,4,5,4,2,7,8};
    int size=10;

    // declaring the map 

    unordered_map<int,int>mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;

        // pre computing the arr element in the map as key:value pair 
    }

    // calling the map

    int number;
    cout<<"Enter the number of element to check freq."<<endl;
    cin>>number;

    while(number--){
        int query;
        cout<<"Enter the number to find frquencies  : "<<endl;
        cin>>query;

        // calling the map 

        cout<<mpp[query]<<endl;
    }


    // iterating in a map using an iterator 

    for(auto it: mpp   ){
        cout<<"First key value is "<<it.first<<" : "<<it.second
        <<endl;
    }
}