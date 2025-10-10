// to check whetehr the string is palindrom or not

#include<bits/stdc++.h>
using namespace std;

void palindrome(char str[]){
    // to find the length
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }

    int start=0,end=len-1;
    while(start<=end){
        if(str[start++]==str[end--]){
            cout<<"Palindrome"<<endl;
            break;
        }
        else cout<<"Not palindrome"<<endl;
    }
}

int main(){
    char str[20]="NAMAN";
    palindrome(str);
}