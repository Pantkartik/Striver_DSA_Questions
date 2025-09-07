// to reverse the array using the recurison 

#include<bits/stdc++.h>
using namespace std;
int reverse(int array[],int start,int end){
    if(start>=end)return 0;
    swap(array[start],array[end]);
    reverse(array,start+1,end-1);
}
int main(){
    int n;
    int array[]={1,2,3,4,5,6};
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    reverse(array,0,n-1);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}