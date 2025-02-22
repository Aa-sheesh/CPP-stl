#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    /*
    Lists: implemented as a doubly linked list (each element has a pointer to the next and previous element) by default
        -random access is not possible(l[2]is not possible)
    - Functions =O(1):
            1. push_front and push_back
            2. emplace_front and emplace_back
            3. pop_front and pop_back
            4. all the other functions like size,erase,clear,begin,end,rbegin,rend,insert,front, back as mentioned in vector
    */

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}