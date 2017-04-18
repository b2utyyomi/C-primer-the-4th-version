/*******************************
author: yomi
date: 17.4.17
ps: practice 9-9, written by C++11
*******************************/

#define answer_book
#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l(5);
    for(list<int>::iterator iter = l.begin(); iter!=l.end(); ++iter)
    {
        cin >> *iter;
    }
    l.reverse();
    for(auto &node:l)
        cout << node << ' ';
    return 0;
}


#ifndef answer_book
///answer book
#include<iostream>
#include<list>

using namespace std;
list<int>l(5);
int main()
{
    for(auto &node:l)
        cin >> node;

    list<int>::iterator iter1 = l.begin();
    list<int>::iterator iter2 = l.end();
    while(iter2 != iter1){
        cout << *(--iter2) << ' ';
    }
    return 0;
}

#endif // answer_book










