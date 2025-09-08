// in multiple recursion function calls there is the recursion calls again and again more than one at same times

// a fibonacci series is a series of numbers in which the next number is the sum of the last number and the second last numbers


#include<bits/stdc++.h>
using namespace std ;

int recursion_fibo(int n){
if(n<=1)return n;
int last=recursion_fibo(n-1);
int second_largest=recursion_fibo(n-2);
return last+second_largest;
}

int main(){

    int n;
    cout<<"Enter the n : "<<endl;
    cin>>n;
    cout<<"Sum of fibonacci number is : "<<recursion_fibo(n)<<endl;
}