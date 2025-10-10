#include<iostream>
using namespace std;



int find_dup(vector<int>arr,int n){
        if(n==1)return arr[0];
        if(arr[0]!=arr[1])return arr[0];
        if(arr[n-1]!=arr[n-2])returun arr[n-1];
        int start=1,end=n-2;
        while(start<=end){
            int mid=start(end-start)/2;
            if(arr[mid]!=arr[mid-1]   && arr[mid]!=arr[mid+1])return mid;
            if(mid%2==1 && arr[mid-1]==arr[mid]) start=mid+1;
            else end=mid-1;
        }
}
int main(){
    vector<int>arr={1,1,2,2,3,3,6,9,9,10,10,11,11};
    int n=arr.size();
    find_dup(arr,n);
    cout<<"The duplicate elem index  : "<<find_dup(arr,n);

}
