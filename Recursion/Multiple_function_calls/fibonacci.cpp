// in multiple recursion function calls there is the recursion calls again and again more than one at same times

// a fibonacci series is a series of numbers in which the next number is the sum of the last number and the second last numbers

#include<bits/stdc++.h>
using namespace std;


int recursion_fibo(int n){
    if(n<=1) return n;
    int last=recursion_fibo(n-1);
    int second_last=recursion_fibo(n-2);
    return last+second_last;
}

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<recursion_fibo(n)<<endl;
}