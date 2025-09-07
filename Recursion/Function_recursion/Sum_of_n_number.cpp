// functional recursion is the method to break the part of function and the prvious function will wait till the next function executed 

#include<bits/stdc++.h>
using namespace std ;

// declaring a main function which then directed to sub functions

int sum(int n){
        if(n==0)return 0;
        // returns the function which than direct to the sub function 

        return n+sum(n-1);
}
int main(){
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    cout<<"The sum of n number is : " <<sum(n);
}