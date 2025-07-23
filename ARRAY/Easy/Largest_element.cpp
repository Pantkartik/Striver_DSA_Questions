// Given an array of integers nums, return the value of the largest element in the array

// Examples:
// Input: nums = [3, 3, 6, 1]

// Output: 6

// Explanation: The largest element in array is 6

// Input: nums = [3, 3, 0, 99, -40]

// Output: 99

// Explanation: The largest element in array is 99


//  Approach : to check the largest number we have to acces each address 
//  and compare it with the next 

// #include<iostream>
// using namespace std;
// int largest(int arr[],int size){
//     int max= arr[0];
//     for(int i=1;i< size;i++){
//             if(arr[i]>max){
//                 max = arr[i];
            
//             }
//             } return max;
// }
// int main(){
//     int arr[6]={1,342,562,3,7,12};
//     int size=6;
//     int print_largest=largest(arr,size);
//     cout<<"The largest elem : "<<print_largest<<endl;
// }


#include<iostream>
using namespace std;
int large(int arr[],int size){
    //  lets declare a starting value max
    int max = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    } return max;
}
int main(){
    int arr[6]={1,234,52,55,77,45};
    int size = 6;
    int result = large(arr,size);
    cout<<result<<endl;
}