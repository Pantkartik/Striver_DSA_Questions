// so the approach is that first we have to make the function of the lower , upper bound after  we have to overcome the edge case where the lower bound is equal to the size of the array or the index of lower bound is not in not equal to the element k ( element to find in array )

// lower bound <=target     # first occurence 
// (upper bound <=target)-1    #last occurence


#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>arr,int size,int k){
    int start=0,end=arr.size()-1;
    int first=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]<=k){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return first;
}

int upper_bound(vector<int>arr,int size,int k){
       int start=0,end=arr.size()-1;
    int last=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]<k){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return last;
}

int main(){
    vector<int>arr={1,2,3,4,4,4,5,6,7,8};
    int size=10;
    int k=4;
//    edge case
    int lb=lower_bound(arr,size,k);
    if(lb==size || arr[lb]!=k)return {-1,-1};
    return {lb,upper_bound(arr,size,k)-1}
}