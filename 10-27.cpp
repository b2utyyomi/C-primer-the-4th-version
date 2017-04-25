/*******************************
author: yomi
date: 17.4.21
ps: 10-27
*******************************/
#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;

int main()
{
    multimap<string, string>writers;
    typedef multimap<string, string>::iterator writers_it;
    string writer, book;
    while(cin >> writer >> book)
    {
        writers.insert(make_pair(writer, book));
    }
    cin.clear();
    writers_it iter= writers.begin();
    while(iter!=writers.end()){
        cout << iter->first << ":";
        pair<writers_it, writers_it>ret = writers.equal_range(iter->first);
        while(ret.first!=ret.second){
            cout << ret.first->second << ' ';
            ret.first++;
            iter++;
        }
        cout << endl;
    }
    return 0;
}
/*
yomi loveTK
yomi iloveZK
jimin lie
zengkeuok begin
zengkeuok a
jimin haha
^Z
jimin:lie haha
yomi:loveTK iloveZK
zengkeuok:begin a

Process returned 0 (0x0)   execution time : 60.730 s
Press any key to continue.

*/









