// a set is a container which stores unique and sorted elements 


#include<bits/stdc++.h>
using namespace std;

int main(){


    set<int>st;
    st.insert(5);
    st.insert(20);
    st.insert(10);
    st.insert(50);
    st.insert(10);
    st.insert(5);

    // for(auto it=st.begin();it!=st.end();++it){
    //     cout<<*(it)<<endl;
    // }
// auto it =st.find(200);


//     for(auto it :st ){
//         cout<<it<<" ";
//     }
// }



// multiset 
/*  Same as set but can store the duplicates also */

multiset<int>ms;
ms.insert(5);
ms.insert(51);
ms.insert(5);
ms.insert(15);

// for(auto it : ms){
//     cout<<it<<" ";
// }



// unordered set 
/* Same as set but doesnt sort */
// has the lowest time complexity of O(1)


unordered_set<int>us;
us.insert(6);
us.insert(20);
us.insert(5);
us.insert(10);
us.insert(3);

for(auto it:us){
    cout<<it<<" ";
}

}