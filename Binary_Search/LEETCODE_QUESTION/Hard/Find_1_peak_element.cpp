// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     vector<int>arr={1,2,3,4,5,8,1,3,4,5,9};
//     for(int i=1;i<arr.size();i++){
//         if(arr[i]>arr[i-1]  && arr[i]>arr[i+1] ){
//             cout<<arr[i]<<endl;
//         }
//     }
// }



#include<bits/stdc++.h>
using namespace std;


int find_peak(vector<int>arr,int n){
    if(n==1)return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2])return n-1;
    int start=1,end=n-2;
    while(start<end){
        int mid=(start+end)/2;
        
        if(arr[mid] > arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid]>arr[mid-1] ){
              start=mid+1;
        }
        else end=mid-1;
    }
return -1;
}
int main(){

    vector<int>arr={1,2,3,4,5,90,1,3,4,5,9,1};
    int n=arr.size();
    cout<<find_peak(arr,n);
}