// we let the minimum element value to be at the zero index compare it with rest of the unsorted array  if there is any smaller we replace the index by swapping the indexes next the minimum value or the smallest value is let to  be the next zero index +1



#include<iostream>

using namespace std ;


int main(){



    // idea : to find the minimum in the array and replace it with the index 0 and than +1 to index till n-2


    int a[6]={6,5,4,2,7,1};
    int n=6;
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(a[j]<a[mini]){
                swap(a[mini],a[j]);
            }
        }
    }


    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}