/*******************************
author: yomi
date: 17.4.17
ps: 9-17...��ȡ���string�����list  ʹ�����������ȥ��������ǲ��Ե� Ӧʹ�÷��������
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
