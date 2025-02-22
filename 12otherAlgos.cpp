#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    /*
    Other Algorithms:
        - reverse(v.begin(), v.end()) = reverses the vector
        - rotate(v.begin(), v.begin()+1, v.end()) = rotates the vector by 1
        - next_permutation(v.begin(), v.end()) = generates next permutation of the vector
        - prev_permutation(v.begin(), v.end()) = generates previous permutation of the vector
        - swap,min,max
        - Max and Min Element:
            - min_element(v.begin(), v.end()) = returns iterator to minimum element
            - max_element(v.begin(), v.end()) = returns iterator to maximum element
        - binary_search(v.begin(), v.end(), key) = returns true if key is present in vector
        - count set bits (built into gcc and not for all CPP compilers, can be used for Competitive Coding):
            - __builtin_popcount(n) = returns number of set bits in n
            - __builtin_popcountl(n) = returns number of set bits in n (long)
            - __builtin_popcountll(n) = returns number of set bits in n (long long)
    */

    // vector <int> v={1, 2, 3, 4, 5};
    // reverse(v.begin(), v.end());
    // for(int val:v){
    //     cout<<val<<" ";
    // }

    // string s="abc";
    // next_permutation(s.begin(), s.end());
    // cout<<s<<endl;
    // next_permutation(s.begin(), s.end());
    // cout<<s<<endl;
    // prev_permutation(s.begin(), s.end());
    // cout<<s<<endl;

    // int n=15;
    // long int n1=15;
    // long long int n2=15;
    // cout<<__builtin_popcount(n)<<endl;
    // cout<<__builtin_popcountl(n1)<<endl;
    // cout<<__builtin_popcountll(n2)<<endl;


}