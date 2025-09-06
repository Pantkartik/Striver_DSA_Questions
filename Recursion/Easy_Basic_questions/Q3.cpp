// to print the number from n to 1 using recursion 
#include<bits/stdc++.h>
using namespace std ;


void print(int n,int counter){
    if(counter>n)return;
    else{
        cout<<n<<endl;
        print(n-1,counter);
    }
}

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    print(n,1);
}