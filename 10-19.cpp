/*******************************
author: yomi
date: 17.4.20
ps: 10-19   稍作改动， 生日改成了年龄
怎么说呢 迷迷糊糊就写出来了 长久不练习之后 肯定会忘的 唉 得找点东西来做
*******************************/
#include<iostream>
#include<string>
#include<utility>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string, vector<pair<string, int> > >family;
    vector<pair<string, int > >vec;
    string firstname, lastname;
    int age;
    while(cin >> firstname >> lastname >> age){
        map<string, vector<pair<string, int> > >::iterator iter = family.find(firstname);
        if(iter!=family.end()){

            iter->second.push_back(make_pair(lastname, age));
        }
        else{
            vec.clear();
            vec.push_back(make_pair(lastname, age));
            family.insert(make_pair(firstname, vec));
        }
    }
    map<string, vector< pair<string, int> > >::iterator iter1;
    vector<pair<string, int> >::iterator iter2;
    for(iter1=family.begin(); iter1!=family.end(); iter1++){
        cout << iter1->first << ":" << endl;
        vector<pair<string, int> >vec1(iter1->second);
        for(iter2=vec1.begin(); iter2!=vec1.end(); ++iter2){
            cout << iter2->first << ' ' << iter2->second << endl;
        }

    }
    return 0;
}

/*
zhang ying 19
zhang yixing 25
piao jimin 22
piao yoonchan 30
zheng zeyun 26
zheng ronghe 29
li kiguang 27
^Z
li:
kiguang 27
piao:
jimin 22
yoonchan 30
zhang:
ying 19
yixing 25
zheng:
zeyun 26
ronghe 29

Process returned 0 (0x0)   execution time : 60.653 s
Press any key to continue.

*/
