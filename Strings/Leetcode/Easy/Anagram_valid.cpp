// to check the valid anagram of the string 

//  anagram means the length of the string , character , frequency of thse string remains the same 



/*   Approach   1 */



//  to sort the strings and compare the original with the sorted strings 


#include<bits/stdc++.h>
#include<algorithms>
using namespace std ;


int sort(string s,string t){
    sort(begin(s),end(s));
    sort(begin(t),end(t));

    return s==t;

}































/* approach 2 */

// using hash map 