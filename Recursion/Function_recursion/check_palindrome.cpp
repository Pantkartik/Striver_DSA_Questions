#include<bits/stdc++.h>
using namespace std;

bool palindrome(char str[],int i,int n){
if(i>=n/2) return true;
if(str[i]!=str[n-i-1]) return false;
return palindrome(str,i+1,n);
}

int main(){
    char str[]="NAMAN1";
    int n=strlen(str);


    if(palindrome(str,0,n)) cout<<str<<" is palindrome"<<endl;
    else cout<<str<<"is not palindrome "<<endl;
}