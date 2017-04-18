/*******************************
author: yomi
date: 17.4.17
ps: 9-17...读取存放string对象的list  使用正向迭代器去反向遍历是不对的 应使用反向迭代器
*******************************/
#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std;

int main()
{
    list<string>l;
    string s[3] = {"yomi", "taekwoon", "woohyun"};
    size_t size_ = sizeof(s)/ sizeof(s[0]);
    cout << size_ << endl;
    list<string>::iterator iter = l.end();
    for(size_t ix = 0; ix<size_; ix++){
        l.insert(iter, s[ix]);
    }

    for(iter =l.begin(); iter!=l.end(); iter++){
        cout << *iter << " ";
    }



    return 0;
}
