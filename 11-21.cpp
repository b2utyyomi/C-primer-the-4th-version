/*******************************
author: yomi
date: 17.4.24
ps: 11-21   find the last 0 in list
*******************************/
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int>lst;
    int a;
    while(cin >> a){
        lst.push_back(a);
    }
    list<int>::reverse_iterator iter = find(lst.rbegin(), lst.rend(), 0);
    list<int>::reverse_iterator iter1;
    for(iter1=iter; iter1!=lst.rend(); ++iter1){
        cout << *iter1 << ' ';
    }

    return 0;
}
