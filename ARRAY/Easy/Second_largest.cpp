// // to check the second largest element in an array 
// Given an array of integers nums, return the second-largest element in the array.
// If the second-largest element does not exist, return -1.


// Examples:
// Input: nums = [8, 8, 7, 6, 5]

// Output: 7

// Explanation: The largest value in nums is 8, the second largest is 7

// Input: nums = [10, 10, 10, 10, 10]

// Output: -1

// Explanation: The only value in nums is 10, so there is no second largest value, thus -1 is returned





//  approach 1 : Brute force 
// we have to first sort the array than traversing negatively form index last to index first we check that the 
//  largest = arr[n-1]  
//  loop from arr[n-2]   to i =0 checking if the arr[i]!=largest than second_largest is the arr[i]

largest=arr[n-1];
for(int i=n-2;i>=0;i--){
if (arr[i]!=largest){
    int second_largest=arr[i] ;
}
}





//  optimal code 
// #include<iostream>
// #include<climits>
// using namespace std;
// int largest_elem(int arr[],int size){
// int max=arr[0];
// for(int i=1;i<size;i++){
//     if(arr[i]>max ) max=arr[i];
// }return max;
// }
// int second_largest_elem(int arr[],int size){
// int max=largest_elem(arr,size);
// int max_2=INT_MIN;

// for(int i=1;i<size;i++){
//     if(arr[i] != max && arr[i] > max_2 ){
//         max_2=arr[i];
//     }
// } return max_2;
// }

// int main(){
//     int arr[6]={1,2,3,4,5,6};   // largest = 6 and second largest = 5
//     int size =6;
//     int largest= largest_elem(arr,size);
//     int second_largest=second_largest_elem(arr,size);
//     cout<<" Largest : "<<largest<<endl;
//     cout<<" Second  Largest : "<<second_largest;


// }


//  to find the max and second max element in the array 

#include<iostream>
#include<climits>
using namespace std;
int largest(int arr[],int size){
    int max=arr[0];   // declaring the max initially
    // now comapring it with the next iteration 
    for(int i=1;i<size;i++){
        if(arr[i+1]>max){
            max=arr[i+1];
        }
    }return max;
}
int sec_largest(int arr[],int size){

    /// for max_2 approach is this we name sec. max by INT_MIN and comapre it with the max 
    // if arr[i] != max 1  and arr[i] >max_2 .......> update max2=arr[i]
    int max=largest(arr,size);
    int max_2=INT_MIN;
    for(int i=1;i<size;i++){
        if(arr[i]!=max && arr[i]>max_2){
            max_2=arr[i];
        }
    } return max_2;

}

int main(){
    int arr[6]={4,1,23,5,6,77};
    int size =6;
    cout<<" Largest : "<<largest(arr,size)<<endl;
    cout<<" Second Largest : "<<sec_largest(arr,size)<<endl;

}