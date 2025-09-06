// recursion is the data structure which calls the function again and again 
// until the base condition is full filled 

#include<bits/stdc++.h>
using namespace std ;

// lets declare a function 
int counter=0;
void function_rec(){
    if(counter==2)return ;
    else{
        cout<<counter<<endl;
        counter++;
        function_rec();
    }
}

int main(){
    function_rec();
}


