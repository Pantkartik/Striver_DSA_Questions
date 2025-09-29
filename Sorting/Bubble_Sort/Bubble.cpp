#include<bits/stdc++.h>

using namespace std;


void bubble_sort(int array[],int n){
    for(int i=n-1;i>=0;i--){
        int swapdone=0;
        for(int j=0;j<=i-1;j++){
            if(array[j]>array[j+1])  {
                swap(array[j],array[j+1]);
                swapdone=1;
            }
        }
        if(swapdone==0){
           break; 
        } 
    }
    for(int i=0;i<=n;i++){
        cout<<array[i]<<" ";

    }
}

int main(){


    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    bubble_sort(array,n);
    return 0;
}