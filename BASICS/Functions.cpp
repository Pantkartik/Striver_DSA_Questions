// use to overcome redundency of the code

// 1. void 
    // doesnot return anything 




// return 




// parameterized



// non parameterized


// #include<iostream>
// using namespace std;

// void salutation(string name){
//     cout<<"Namaste "<<"Mr."<<name<<endl;
// }


// int main(){

//     string name;
//     cout<<"Enter the name : "<<endl;
//     cin>>name;
//     salutation(name);

// }


// take two numbers and print their sums

#include<bits/stdc++.h>
using namespace std ;
void sum(int x, int y){
    int total;
    total=x+y;
    cout<<"SUM OF "<<x <<" and "<< y<<" : "<<total;
}

int main(){
    int x,y;
    cout<<"Enter the x and y "<<endl;
    cin>>x>>y;
    
    sum(x,y);
}