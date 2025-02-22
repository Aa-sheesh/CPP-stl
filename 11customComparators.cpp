#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second)return true;
    else if(p1.second==p2.second)return p1.first<p2.first;
    else return false;
}

int main(){
    vector<pair<int,int>> v1={{1, 2}, {5, 3}, {3, 4}, {2, 5}, {4, 1}};
    sort(v1.begin(), v1.end(), comparator);
    for(auto val:v1){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}