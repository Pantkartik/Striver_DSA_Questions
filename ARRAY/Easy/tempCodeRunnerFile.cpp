
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array1[5]={5,4,3,2,1};
    int n=5;
    int largest=array1[0];   // consider the first element to be the largest
    for(int i=1;i<n;i++){
        if(array1[i]>largest){
            largest=array1[i];
        }
    }
    cout<<"Largest elem :"<<largest<<endl;
 
    
}