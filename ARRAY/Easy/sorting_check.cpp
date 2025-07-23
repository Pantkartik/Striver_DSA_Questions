//  to check the sort and rotataed 

// Given an array nums, return true if the array was originally sorted 
//in non-decreasing order, then rotated some number of positions (including zero).
// Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an 
//array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

#include<iostream>
using namespace std;
int sort(int arr[],int size){
  int temp=0;
  for(int i=0;i<size;i++){
    if(arr[i+1]>arr[i]){
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    else return -1;
  }
}
int main(){
    int arr[6]={3,1,6,4,9,10};
    int size=6;
    for(int i=1;i<size;i++){

        cout<<sort(arr,size);
    }
}