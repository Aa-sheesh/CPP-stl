#include <iostream>
#include <queue>
using namespace std;

int main(){
    /*
    - Priority Queue is a data structure that follows the FIFO (First In First Out) principle.
    - It is a linear data structure.
    - Max Heap : priority_queue<data_type> pq; 
    - Min Heap : priority_queue<data_type, vector<data_type>, greater<data_type>> pq; // greater<data_type> is a comparator or functor that is used to compare two elements.
    - Functions:
        - push(),emplace() (O(logn)) : Insert an element at the end of the queue.
        - pop() (O(logn)) : Remove an element from the front of the queue.
        - top() (O(1)) : Access the element at the front of the queue.
        - empty(): Check if the queue is empty.
        - size(): Return the number of elements in the queue.
        - swap(): Exchange the contents of two queues.
        
    */

    //Max Heap
    priority_queue<int> pq;
    pq.push(50);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(10);
    cout << "Size of priority queue: " << pq.size() << endl;
    cout<<"Element at top:"<<pq.top()<<endl;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(50);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(10);
    while(!pq1.empty()){
        cout << pq1.top() << " ";
        pq1.pop();
    }


    return 0;
}