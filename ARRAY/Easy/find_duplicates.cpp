// // approach 1 (Brute force )
// // using set stl we iterate set and insert the elem of array into it till size n *
// //  time complexity : (nlogn)+n



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int array[7]={1,1,2,2,2,3,3};
//     int n=7;

//     set<int>st;

//     // inserting elem into the set
//     for(int i=0;i<n;i++){
//         st.insert(array[i]);
//     }
    
//     for(auto elem:st){
//         cout<<elem<<endl;
        
//     }
//     cout<<"No. of unique elements : "<<st.size()<<endl;
// }



// // approach 2(optimal ) using two pointer approach

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int array1[7]={1,1,2,2,2,3,3};
//     int n=7;
//     int i=0;
   
//     for(int j= 1;j<n;j++ ){
//         if(array1[j]!=array1[i]){
//             array1[i+1]=array1[j];
//             i++;
//         }
//     }
//     cout<<"No. of unique elem : "<<i+1;
// }



// brute force (nlogn)+n  -----> using set container

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    int arr[7]={1,1,2,2,2,3,3};
    int n=7;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    // printing the set and unique elem.

    for(auto elem:st){
        cout<<elem<<endl;
    }
    cout<<"Unique elem : "<<st.size()<<endl;
}


// the optimal code: (using the two pointer approach : )

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n;

    // dynamically entering the array size and the elements of array
    cout<<"Enter the size of the array "<<endl;
    cin>>n;

    for(int z=0;z<n;z++){
        cout<<"Enter the element of array : "<<" ";
        cin>>arr[z];
    }

    // checking if the array is created or not 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // two pointer approach is the method in which we lets take a i pointer at the index 0 and j at index 1 and compare the arr[j] with the preious till when we know if the values are equal than we move the pointer ahead and if not than return the value

    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"The number of elem unique  :" <<i+1;   // this returns the number of unique numbers in the array
}