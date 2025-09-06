// to find the sum of the first n number using the recursion parameterized

#include<iostream>
using namespace std;

void sum_print(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    
        sum_print(i-1,sum+i);
   
}

int main(){
    int n;
    cout<<"Enter the elem n "<<endl;
    cin>>n;
    sum_print(n,0);
}