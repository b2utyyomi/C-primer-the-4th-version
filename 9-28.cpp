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

    #ifndef NDEBUG
    string s;
    while(cin >> s){
        vec.push_back(s);
    }
    cin.clear();
    l.assign( vec.begin(), vec.end());
    #endif

    ///char *a[] = {"yomi", "taekwoon", "woohyun", "mina"};
    char a[4][10] = {"yomi", "taekwoon", "woohyun", "mina"};
    list<char *>l(a, a+4);
    /*while(cin >> a){
        l.push_back(a);
    }
    cin.clear();*/   ///莫名其妙 push进去四个相同的最后一个元素， 不懂
    for(auto &node:l){
        cout << node << ' ';
    }
    cout << endl;
    vec.assign(l.begin(), l.end());

    for(auto &node:vec){
        cout << node << ' ';
    }
    cout << endl;

    return 0;
}












