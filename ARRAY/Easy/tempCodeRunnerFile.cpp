#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n;

    // dynamically entering the array size and the elements of array
    cout<<"Enter the size of the array "<<endl;
    cin>>n;

    for(int z=0;z<n;z++){
        cout<<"Enter the element of array : "<<" ";
        cin>>arr[z];
    }

    // checking if the array is created or not 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // two pointer approach is the method in which we lets take a i pointer at the index 0 and j at index 1 and compare the arr[j] with the preious till when we know if the values are equal than we move the pointer ahead and if not than return the value

    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"The number of elem unique  :" <<i+1;   // this returns the number of unique numbers in the array
}