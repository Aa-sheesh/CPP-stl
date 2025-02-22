#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    /*
    Sorting:
        - sort(arr, arr+n) sorts the array in ascending order
        - sort(arr, arr+n, greater<int>()) sorts the array in descending order
        - sort(v.begin(), v.end()) sorts the vector in ascending order
    
    */

    // int arr[5]={1, 5, 3, 2, 4};
    // sort(arr, arr+5);
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // vector<int> v={1, 5, 3, 2, 4};
    // sort(v.begin(), v.end(), greater<int>());
    // for(int val:v){
    //     cout<<val<<" ";
    // }

    vector<pair<int,int>> v1={{1, 2}, {5, 3}, {3, 4}, {2, 5}, {4, 1}};
    sort(v1.begin(), v1.end());
    for(auto val:v1){
        cout<<val.first<<" "<<val.second<<endl;
    }


    return 0;
}