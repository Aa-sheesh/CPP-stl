#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        1. vector = similar to arrays but dynamic and can be resized in runtime

        - Functions =O(1):
            1. size and capacity = capacity doubles when size exceeds capacity
            2. push_back and pop_back
            3. emplace_back
            4. at() or []
            5. front & back

        -Types Of Initialization:
            1. vector<int> v; // empty vector
            2. vector<int> v(5, 10); // 5 elements with value 10
            3. vector<int> v{1, 2, 3, 4, 5}; // 5 elements with values 1, 2, 3, 4, 5
            4. vector<int> v2(v); // copy of vector v
            5. vector<int> v3 = v; // copy of vector v

        -More Functions =O(n):
            1. clear = removes all elements
                -changes size of the vector but not capacity
                    - vec.clear();// removes all elements

            2. empty = returns true if vector is empty
            3. erase = removes element at index or range
                -changes size of the vector but not capacity
                    - vec.erase(vec.begin()+1); // removes element at index 1
                    - vec.erase(vec.begin()+1, vec.begin()+3); // removes elements from index 1 to 2

            4. insert = inserts element at index or range
                -changes size of the vector but not capacity
                    - vec.insert(vec.begin()+1, 5); // inserts 5 at index 1
                    - vec.insert(vec.begin()+1, 5, 10); // inserts 5 elements with value 10 at index 1

            5. resize = changes size of vector
            6. swap = swaps two vectors

    */
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.emplace_back(3);

    // cout << "Size: " << v.size() << endl; // 3
    // cout << "Capacity :"<<v.capacity()<<endl; // 4

    // for(int value:v){
    //     cout<<value<<endl;
    // }
    // cout<<"Popping last element"<<endl;
    // v.pop_back();
    // for(int value:v){
    //     cout<<value<<endl;
    // }
    // cout<<"First element: "<<v.front()<<endl;
    // cout<<"Last element: "<<v.back()<<endl;
    // cout<<"Element at index 1: "<<v.at(1)<<endl;
    // cout<<"Element at index 1: "<<v[1]<<endl;

    // ****************************************************************
/*
    Iterator = pointer to an element in the container
                - vec.begin() = points to first element
                    - vec.begin() + 1 = points to next of first element
                - vec.end() = points to next of last element
                    - vec.end() - 1 = points to last element
                - vec.rbegin() = points to last element
                - vec.rend() = points to previous of first element
*/  
    vector <int> vec = {1, 2, 3, 4, 5};
    // vector <int>::iterator it;
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*it<<" ";
    }

    return 0;
}