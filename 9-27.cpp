/*******************************
author: yomi
date: 17.4.18
ps: 9-27...
*******************************/
/*
#include<iostream>
#include<list>
#include<deque>
#include<string>
using namespace std;

int main()
{
    string s[5] = {"yomi", "taekwoon", "woohyun", "mina", "jimin"};
    list<string>l(s, s+5);
    list<string>::iterator iter1;
    for(iter1=l.begin(); iter1!=l.end();){
        if(*iter1 == "mina"){
            l.erase(iter1++);
        }
        else{
            iter1++;
        }
    }
    for(auto &node:l){
        cout << node << endl;
    }
    deque<string>q(s, s+5);
    deque<string>::iterator iter2;
    for(iter2=q.begin(); iter2!=q.end();){
        if(*iter2 == "woohyun"){
            q.erase(iter2++);
        }
        else{
            iter2++;
        }
    }
    ///the other method
    for(auto &node:q){
        cout << node << endl;
    }
    return 0;
}
*/
/*******************************
author: yomi
date: 17.4.1
ps: 9-28...  容器赋值 完全相同 元素类型相同 可用‘=’， 否则容器类型不同， 元素类型兼容
使用assign
*******************************/
#include<iostream>
#include<list>
#include<vector>
#include<string>
#define NDEBUG
using namespace std;

int main()
{
    vector<string>vec;
    list<char*>l;

    string s;
    while(cin >> s){
        vec.push_back(s);
    }
    cin.clear();
     for(auto &node:vec){
        cout << node << ' ';
    }
    cout << endl;
    ///l.assign( vec.begin(), vec.end());
    #ifndef NDEBUG
    list<char *>l;
    ///char *a[] = {"yomi", "taekwoon", "woohyun", "mina"};
    char a[4][10] = {"yomi", "taekwoon", "woohyun", "mina"};
    for(size_t ix=0; ix!=sizeof(a)/sizeof(a[0]); ix++){
        l.push_back(a[ix]);
    }
    ///list<char *>l(a, a+4);
    /*char a[10];
    while(cin >> a){
        l.push_back(a);
    }
    cin.clear();   ///莫名其妙 push进去四个相同的最后一个元素， 不懂*/

    vec.assign(l.begin(), l.end());
     #endif
    for(auto &node:l){
        cout << node << ' ';
    }
    cout << endl;


    return 0;
}
















