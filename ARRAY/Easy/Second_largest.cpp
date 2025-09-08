// to find the largest elem in an array 

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// int main(){
//     // brute force : to sort the array and than the second last element will be the second largest 

//     int arr[5]={5,4,3,2,1};
//     int n=5;
//     sort(arr,arr+n);

//     cout<<"The second largest is the elem : "<<arr[n-2];
// }


// optimal code 

#include<bits/stdc++.h>
using namespace std;

int main(){

    // optimal approach is to take pointer as largest be the arr[n-1] and traverse from arr[n-2] to 1 if the arr[n-2]>arr[n-1] than the second largest
    
    int arr[5]={5,4,3,2,1};
    int n=5;
    int largest=arr[n-1];
    int second_largest=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            second_largest=arr[i];
            break;
        }
        
    }
    cout<<"Second largest : "<<second_largest<<endl;
    
}