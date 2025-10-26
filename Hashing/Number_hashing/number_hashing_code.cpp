
#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[10]={1,2,1,2,3,4,5,7,7,0};
    int size=10;
    
    // creating a hash array 
    int hash[20]={0};
    // inputing into hash array pick and put and remember
    for(int i=0;i<size;i++){
        hash[arr[i]]+=1;
    }
    int num;
    cout<<"Enter the numbers to check the frequency : "<<endl;
    cin>>num;

    while(num--){
        int query;
        cout<<"Enter the number to check frequency "<<endl;
        cin>>query;

        cout<<hash[query]<<endl;
    }
    
}