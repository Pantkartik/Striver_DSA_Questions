// Vectors are like dynamic array where we can change the size of the vector dynamically and add any integer into it 

// declaring a simple vector

#include<bits/stdc++.h>
using namespace std ;
int main(){

//     vector<int>vec;
//     vec.push_back(2);
//     vec.emplace_back(3);
//      // to print the vector using for loop 
// for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<endl;
//     }

    
//     // to make a vector of pair elem

//     vector<pair<int,int>>vec_pair;
//     vec_pair.push_back({1,2});


//     // to print the vector using for loop 
//     for(int j=0;j<vec_pair.size();j++){
//         cout<<vec_pair[j].first<<vec_pair[j].second<<endl;
//     }
    


//     // to make a vector or many elem with declaring a times of elem
//     vector<int>v1(5,100);
//     vector<int>v2(v1);

//     for(int z=0;z<v2.size();z++){
//         cout<<v2[z]<<endl; 
//     }


    // iterator 

    /*
     Iterator is used to point the memory location and 

     vector<int>::iterator it = v.begin()   -----> points just before the first element so we have to it++
     vector<int>::iterator it = v.end()    -----> points just after the last element so we have to it--

    
    */
//  vector<int>v;
//  v.push_back(6);
//  v.push_back(10);
//  v.push_back(9);

//  vector<int>::iterator it;
//  for(it=v.begin();it!=v.end();++it){
//     cout<<*it<<" ";
//  }


 // Insertion of element in a vector

 vector<int>v{8,21,234};
//  v.push_back(6);
//  v.push_back(41);
//  v.push_back(0);
//  v.push_back(7);

 v.insert(v.begin()+1,4);


// to delete a specific element 

v.clear();

 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }


}