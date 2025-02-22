#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    /*
    - Stack is a container that stores elements in a LIFO (Last In First Out) manner.
    - It is a non-sequential container that follows the LIFO order.
    - It has the following functions:
        - push(),emplace() : Adds an element to the top of the stack.
        - top(): Returns the top element of the stack.
        - pop(): Removes the top element from the stack.
        - size(): Returns the number of elements in the stack.
        - empty(): Returns true if the stack is empty, else false.
        - swap(): Swaps the elements of two stacks.
    */

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;

    // while(!s.empty()){
    //     cout<<"Size: "<<s.size()<<endl;
    //     cout<<s.top()<<endl;
    //     s.pop();

    // }

    stack<int> s1;
    s1.push(4);
    s1.swap(s);
    cout<<"S1 Size:"<<s1.size()<<endl;  // 3
    cout<<"S Size:"<<s.size();   // 1

    return 0;
}