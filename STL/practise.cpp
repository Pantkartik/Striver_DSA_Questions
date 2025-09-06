#include<bits/stdc++.h>
using namespace std;

int main(){
int arr=[4,1,1,2,2];
int start;
int end=arr.size();
for(int start=1;start<end-1;start++){
    if(start==arr[start+1]){
        start++;
    }
    else{
        cout<<start<<endl;
    }
}
}