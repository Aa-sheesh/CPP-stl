#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    - Pair is a container that stores two values. It is a simple way to store two values together.
        - Initialization of pairs
            - pair<int, int> p1 = {1, 2};
            - pair<char, int> p2 = {'a', 3};
    */
    // pair<int, int> p1 = {1, 2};
    // cout<<p1.first<<" "<<p1.second<<endl;

    // pair<int,pair<int,int>> p1 = {1, {2, 3}};
    // cout<<p1.first<<"{"<<p1.second.first<<","<<p1.second.second<<"}"<<endl;

    // Vector of pairs
    vector<pair<int, int>> v;
    v.push_back({1, 2});
    v.push_back({3, 4}); // push_back is used to push the pair directly using curly braces
    v.emplace_back(5, 6); // emplace_back is used to push the pair directly without using curly braces
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }


    return 0;
}