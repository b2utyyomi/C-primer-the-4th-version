/*******************************
author: yomi
date: 17.4.24
ps: 11-19&&20   reverse_iterator  simple traverse
*******************************/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    int a;
    while(cin >> a){
        vec.push_back(a);
    }
    /** 19
    vector<int>::reverse_iterator iter;
    for(iter=vec.rbegin(); iter!=vec.rend(); ++iter){
        cout << *iter << ' ';
    }
    **/
    ///20
    vector<int>::iterator iter;
    for(iter=vec.end()-1; iter>=vec.begin(); --iter){
        cout << *iter << ' ';
    }
    return 0;
}











