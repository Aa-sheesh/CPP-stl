#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    /*
        - Map is a data structure that stores key-value pairs.
        - It is implemented using a balanced binary search tree.
        - The keys are unique and are stored in sorted order.
        - map <string, int> m;
        - m[key]= value;//for insertion and updation
        - Functions:
            - insert(key, value),emplace(key, value) (O(logn))
            - count(key) (O(logn))
            - find(key) => returns an iterator to the key-value pair else returns m.end()
            - erase(key) (O(logn))
            - size(), empty(), erase()
        
        - Types of Maps:
            1. Multimap: It can store multiple key-value pairs with the same key.
            Syntax: multimap <string, int> m;

            2. Unordered Map: It is implemented using a hash table. The keys are stored in an unordered fashion.
            The time complexity of all operations is O(1) on average.
            Syntax: unordered_map <string, int> m;

    */

    map <string, int> m;
    m["tv"]= 20000;
    m["fridge"]= 30000;
    m["washing machine"]= 15000;
    for(auto i:m){
        cout<<i.first<<"-"<<i.second<<endl;
    }

    return 0;
}