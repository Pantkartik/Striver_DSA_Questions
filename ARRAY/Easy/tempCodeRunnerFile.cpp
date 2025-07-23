#include<iostream>
using namespace std;
int sort(int arr[],int size){
  int temp=0;
  for(int i=0;i<size;i++){
    if(arr[i+1]>arr[i]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    else return -1;
  }
}
int main(){
    int arr[6]={3,1,6,4,9,10};
    int size=6;
    for(int i=1;i<size;i++){

        cout<<sort(arr,size);
    }
}