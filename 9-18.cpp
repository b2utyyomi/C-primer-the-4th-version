/*******************************
author: yomi
date: 17.4.18
ps: 9-18...
*******************************/
#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main()
{
    list<int>l;
    deque<int>q1;
    deque<int>q2;
    l.clear();
    q1.clear();
    q2.clear();
    int a[5] = {2, 1, 7, 4, 6};
    for(size_t ix = 0; ix!=sizeof(a)/sizeof(a[0]); ix++){
        l.push_back(a[ix]);
    }

    for(list<int>::iterator iter=l.begin(); iter!=l.end(); iter++){
        if(*iter % 2== 0){
            q1.push_back(*iter);
        }
        else
            q2.push_back(*iter);
    }
    for(auto &node:l)
        cout << node << ' ';
    cout << endl;
    for(auto &node:q1)
        cout << node << ' ';
    cout << endl;
    for(auto &node:q2)
        cout << node << ' ';
    cout << endl;
    return 0;
}
/*
2 1 7 4 6
2 4 6
1 7

Process returned 0 (0x0)   execution time : 3.473 s
Press any key to continue.

*/
