/*******************************
author: yomi
date: 17.4.24
ps: 11-14   use inserter, back_inserter and front_inserter . µü´úÆ÷ÊÊÅäÆ÷
*******************************/
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>vec;
    list<int>lst;

    int a;
    while(cin >> a){
        vec.push_back(a);
    }
    ///replace_copy(vec.begin(), vec.end(), inserter(lst, lst.begin()), 4, 100);
    ///replace_copy(vec.begin(), vec.end(), back_inserter(lst), 4, 100);
    replace_copy(vec.begin(), vec.end(), front_inserter(lst), 4, 100);
    for(auto &node:lst){
        cout << node << ' ';
    }
    return 0;
}
