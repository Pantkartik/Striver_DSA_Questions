#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[7]={1,2,3,4,5,6,7};
    int n=7;
    int k ;
    cout<<"Enter the k : "<<endl;
    cin>>k;



    // to rotate left by k times we use formula temp[[i+k]%n]
    // when we use modulo for any number it changes it to 0 to 9 
    // for example 
    /*  
    
            lets take k=3, 
               for i=0----->  temp[[0+3]%7] ----> this give the location of next 3 
               for i=1----->  temp[[1+3]%7] ----> 
               for i=2-----> temp[[2+3]%7] ---->
    */

    for(int i=0;i<n;i++){
        cout<<"Before rotating k times : "<<array[i]<<endl;
    }
    int temp;
    for(int i=0;i<n;i++){
        temp[[(i+k)%n]] == array[i];
    }
    

    for(int i=0;i<n;i++){
        cout<<"After rotating k times : "<<array[i]<<endl;
    }

}