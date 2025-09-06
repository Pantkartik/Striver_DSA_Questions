// to print the number from to n linearly 

#include<bits/stdc++.h>
using namespace std ;
 
void print_number(int start,int n){
            if(start>n)return;
            else{
                cout<<start<<endl;
                print_number(start+1,n);
            }
}
int main(){
    int n;
    cout<<"Enter the limit of number to be print : "<<endl;
    cin>>n;
    print_number(1,n);
}