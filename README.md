# Introduction

1. STL=Standard Template Library

## Types:

1. Containers
2. Iterators
3. Functors/Comparator
4. Algorithms

### Containers:

1. Sequential Containers

   1. vector = similar to arrays but dynamic and can be resized in runtime

   - Functions =O(1):

     1. size and capacity = capacity doubles when size exceeds capacity
     2. push_back and pop_back
     3. emplace_back
     4. at() or []
     5. front & back

   - Types Of Initialization:

     1. vector<int> v; // empty vector
     2. vector<int> v(5, 10); // 5 elements with value 10
     3. vector<int> v{1, 2, 3, 4, 5}; // 5 elements with values 1, 2, 3, 4, 5
     4. vector<int> v2(v); // copy of vector v
     5. vector<int> v3 = v; // copy of vector v

   - More Functions =O(n):

     1. clear

        - removes all elements
        - changes size of the vector but not capacity
          - vec.clear();// removes all elements

     2. empty = returns true if vector is empty
     3. erase

        - removes element at index or range
        - changes size of the vector but not capacity
          - vec.erase(vec.begin()+1); // removes element at index 1
          - vec.erase(vec.begin()+1, vec.begin()+3); // removes elements from index 1 to 2

     4. insert

        - inserts element at index or range
        - changes size of the vector but not capacity
          - vec.insert(vec.begin()+1, 5); // inserts 5 at index 1
          - vec.insert(vec.begin()+1, 5, 10); // inserts 5 elements with value 10 at index 1

     5. resize = changes size of vector
     6. swap = swaps two vectors

   - Iterator = pointer to an element in the container
     - vec.begin() = points to first element
     - vec.begin() + 1 = points to next of first element
     - vec.end() = points to next of last element
     - vec.end() - 1 = points to last element
     - vec.rbegin() = points to last element
     - vec.rend() = points to previous of first element

   2. Lists

   - implemented as a doubly linked list (each element has a pointer to the next and previous element) by default
   - random access is not possible(l[2]is not possible)
   - Functions =O(1):
     1. push_front and push_back
     2. emplace_front and emplace_back
     3. pop_front and pop_back
     4. all the other functions like size,erase,clear,begin,end,rbegin,rend,insert,front, back as mentioned in vector

   3. Deque

   - implemented as a dynamic array (vector) by defaul
   - random access is possible(d[2] is possible)

   - Functions =O(1)
     1. push_front and push_back
     2. emplace_front and emplace_back
     3. pop_front and pop_back
     4. all the other functions like size,erase,clear,begin,end,rbegin,rend,insert,front, back as mentioned in vector

2. Pairs

- Pair is a container that stores two values. It is a simple way to store two values together.
  - Initialization of pairs
    - pair<int, int> p1 = {1, 2};
    - pair<char, int> p2 = {'a', 3};

3. Non Sequential Containers

   1. Stack = LIFO
      - Stack is a container that stores elements in a LIFO (Last In First Out) manner.
      - It is a non-sequential container that follows the LIFO order.
      - It has the following functions:
        - push(),emplace(): Adds an element to the top of the stack.
        - top(): Returns the top element of the stack.
        - pop(): Removes the top element from the stack.
        - size(): Returns the number of elements in the stack.
        - empty(): Returns true if the stack is empty, else false.
        - swap(): Swaps the elements of two stacks.
   2. Queue =FIFO

   - Queue is a data structure that follows the FIFO (First In First Out) principle.
   - It is a linear data structure.
   - Functions:

     - push(),emplace(): Insert an element at the end of the queue.
     - pop(): Remove an element from the front of the queue.
     - front(): Access the element at the front of the queue.
     - back(): Access the element at the end of the queue.
     - empty(): Check if the queue is empty.
     - size(): Return the number of elements in the queue.
     - swap(): Exchange the contents of two queues.

   - Queue can be implemented using:
     - Array
     - Linked List
     - STL

   3. Priority Queue

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

   4. Map

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

   5. Set

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

   - Types of sets: 
      - multiset: It stores duplicate elements in sorted order. 
      - unordered_set (O(1)) : It stores unique elements in an unordered way.
