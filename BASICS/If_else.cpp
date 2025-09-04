// wap program which takes input from user of their age and prints if they are adult or not 



#include<bits/stdc++.h>
using namespace std;

int main(){


    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    if(age>=18){
        cout<<"Your are an adult of age "<<age<<endl;

    }
    else{
        cout<<"You are not an adult "<<endl;
    }

    return 0;
}