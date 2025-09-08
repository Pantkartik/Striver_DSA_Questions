// to check wheteher the string is palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool pal_check(char str[],int n,int i){
if(i>n/2) return true;
if(str[i]!=str[n-i-1]) return false;
return pal_check(str,n+1,i);
}

int main(){
    char str[6]="NAMAN";
    int n=6;
    int i ;
    
    if(pal_check(str,n,1)) cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
}