/*******************************
author: yomi
date: 17.4.24
ps: 11-15   use unique_copy to copy not repeat element into vec.
*******************************/
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int>lst;
    vector<int>vec;
    int a;
    while(cin >> a){
        lst.push_back(a);
    }
    sort(lst.begin(), lst.end());
    unique_copy(lst.begin(), lst.end(), back_inserter(vec));
    for(auto &node:vec){
        cout << node << ' ';
    }
    return 0;
}









