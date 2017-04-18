/*******************************
author: yomi
date: 17.4.18
ps: 9-26...  vector and list's erase()
*******************************/
#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{
    int a[5] = {2, 5, 6, 2, 7};
    vector<int>vec(a, a+5);
    list<int>l(a, a+5);
    vector<int>::iterator iter1;
    for(iter1=vec.begin(); iter1!=vec.end();){
        if(*iter1 % 2 == 0){
            vec.erase(iter1);/// .erase()返回被删的下一个元素
        }
        else
            iter1++;
    }
    for(auto &node:vec){
        cout << node << ' ';
    }
    cout << endl;
    list<int>::iterator iter2;
    for(iter2=l.begin(); iter2!=l.end();){
        if(*iter2%2){
            l.erase(iter2++);
        }
        else{
            iter2++;
        }
    }
    for(auto &node:l){
        cout << node << ' ';
    }
    cout << endl;
    return 0;
}
/**
5 7
2 6 2
**/





