/*******************************
author: yomi
date: 17.4.1
ps: 9-28...  ������ֵ ��ȫ��ͬ Ԫ��������ͬ ���á�=���� �����������Ͳ�ͬ�� Ԫ�����ͼ���
ʹ��assign
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
    cin.clear();*/   ///Ī������ push��ȥ�ĸ���ͬ�����һ��Ԫ�أ� ����
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












