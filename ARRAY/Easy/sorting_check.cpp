//  to check the sort and rotataed 

// Given an array nums, return true if the array was originally sorted 
//in non-decreasing order, then rotated some number of positions (including zero).
// Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an 
//array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 
#include<bits/stdc++.h>
using namespace std;

int main(){
  int array[5]={1,2,3,5,7};
  int n=5;
  for(int i=1;i<n;i++){
        if(array[i]>=array[i-1]){
          continue;
        }
        else{
          cout<<"Not sorted"<<endl;
          break;
        }
        cout<<"Array is sorted"<<endl;
  }
}