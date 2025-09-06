// to print the name 5 times using the recursion 

#include<bits/stdc++.h>
using namespace std;

int counter=0;
void print(){
    if(counter==5)return;
    else{
        cout<<"Kartik"<<endl;
        counter++;
        print();
    }
}

int main(){
    print();
}