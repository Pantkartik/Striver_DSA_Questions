#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    // hash compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;

    }

    int num;
    cout<<"Enter the numbers to check the freq : "<<endl;
    cin>>num;

    while(num--){
        int query;
        cout<<"Enter the query : "<<endl;
        cin>>query;
        // fetching the query 

        cout<<hash[query-'a']<<endl;
    }
}