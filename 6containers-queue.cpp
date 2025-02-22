#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    /*
    - Queue is a data structure that follows the FIFO (First In First Out) principle.
    - It is a linear data structure.
    - Functions:
        - push(),emplace() (O(1)) : Insert an element at the end of the queue.
        - pop() (O(1)): Remove an element from the front of the queue.
        - front() (O(1)) : Access the element at the front of the queue.
        - back(): Access the element at the end of the queue.
        - empty(): Check if the queue is empty.
        - size(): Return the number of elements in the queue.
        - swap(): Exchange the contents of two queues.

    - Queue can be implemented using:
        - Array
        - Linked List
        - STL
    - STL provides a queue template class.
    - Syntax:
        queue<data_type> queue_name;
    
    */
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Size of queue: " << q.size() << endl;
    cout<<"Element at first:"<<q.front()<<endl;
    cout<<"Element at last:"<<q.back()<<endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;




    return 0;
}