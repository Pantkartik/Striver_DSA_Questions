//  to search the x element in a monotonous sorted array using the binary search 


#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>arr,int size,int x){
        int start=0,end=size-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==x) return mid;
            else if(arr[mid]>x){
                end=mid-1;
            }
            else start=mid+1;
        }
        return -1;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int x;
        cout<<"Enter the x to search "<<endl;cin>>x;
    cout<<"Index of  "<<x <<" is "<<binary_search(arr,size,x);
}