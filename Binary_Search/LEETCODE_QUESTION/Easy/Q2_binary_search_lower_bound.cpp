// to find the lower bound of the target element in a array which is sorted and monotonous


//  lower bound is the lowest first occured index of the element greater than the target 


// arr[target]<=x   lowwer bound 



#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>arr,int size,int target){

    int start=0,end=size-1,ans=size;
    while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]>target){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
    }return ans;

}



int main(){

    vector<int>arr={1,3,5,7,9,10,12,43};
    int size=8;
    int target;
    cout<<"Enter the element target to find the lower bound : "<<endl;
    cin>>target;
    cout<<"Lower bound of "<<target<<" is "<<lower_bound(arr,size,target);

}