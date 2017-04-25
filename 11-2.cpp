/*******************************
author: yomi
date: 17.4.22
ps: 11-2
*******************************/
#include<iostream>
#include<algorithm>
#include<string>
#include<list>
using namespace std;

int main()
{
    list<string>l;
    string s1, s2;
    while(cin >> s1){
        l.push_back(s1);
    }
    cin.clear();
    while(cin >> s2){
        int cnt = count(l.begin(), l.end(), s2);
        cout << cnt << endl;
    }
    return 0;
}
