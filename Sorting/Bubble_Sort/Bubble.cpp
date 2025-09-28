#include<iostream>
using namespace std;

void bubble_sort(int array[],int n){
    for(int i=0;i<n-1;i++){
        if(array[i+1]>array[i]){
            swap(array[i+1],array[i]);
        }
    }
     for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){

    int array[6]={6,5,4,3,1,0};
    int n=6;
    bubble_sort(array,n);

}