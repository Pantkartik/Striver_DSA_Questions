#include<bits/stdc++.h>

using namespace std;


void bubble_sort(int array[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j>=i-1;j++){
            if(array[j]>array[j+1])  {
                swap(array[j],array[j+1]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        cout<<array[i]<<" ";

    }
}

int main(){


    int array[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    bubble_sort(array,n);
    return 0;
}