// insertion sort logic is we insert the element and shift the rest of the element to right 


#include<iostream>

using namespace std ;

void insertion_sort(int array[],int n){
     for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && array[j]>array[j+1]){
            swap(array[j],array[j-1 ]);
            j--;
        }
     }



for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
}
}

int main(){


    int array[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    

    insertion_sort(array,n);
}