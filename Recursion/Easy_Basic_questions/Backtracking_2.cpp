// to print the n t0 1 in reverse using the recursion and backtracking 

#include<iostream>
using namespace std;

void print_rev(int n){

        if(n<=0)return;
        else{
            cout<<n<<endl;
            print_rev(n-1);
        }
        
}

int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    print_rev(n);
}