// to reverse the string

#include<iostream>
#include<algorithm>
using namespace std;

void rev_str(char str[]){
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    for(int i=0;i<len/2;i++){
        swap(str[i],str[len-1-i]);
    }
    cout<<str<<endl;
}
int main(){
    char str[20]="KARTIK";
    rev_str(str);
}