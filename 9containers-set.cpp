#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    /*
    - Set is a data structure that stores unique elements in sorted order.
    - It is implemented using a balanced binary search tree.
    - The time complexity of set operations is O(log n) for insert, delete, search.
    - Functions:
        - insert(x)/emplace(x): Insert element x into the set.
        - count(x): Returns the number of elements equal to x.
        - erase(x): Removes the element x from the set.
        - find(x): Returns an iterator to the element x.
        - size(),empty(),erase()
        - lower_bound(x): Returns an iterator to the first element that is not less than x.
        - upper_bound(x): Returns an iterator to the first element that is greater than x.

    -Types of sets:
        - multiset: It stores duplicate elements in sorted order.
        - unordered_set (O(1)) : It stores unique elements in an unordered way.
    */
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1); // 1 is already present in the set so it will not be inserted again.

    cout << s.size() << endl; // 5
    cout << s.count(1) << endl; // 1
    cout << s.count(6) << endl; // 0
    s.erase(1);

    for(auto p:s){
        cout<<p<<" ";
    }



    return 0;
}