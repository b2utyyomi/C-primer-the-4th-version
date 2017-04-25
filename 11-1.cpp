/*******************************
author: yomi
date: 17.4.22
ps: 11-1
*******************************/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    int a;
    while(cin >> a){
        vec.push_back(a);
    }
    cin.clear();
    int b;
    while(cin >> b){
        int cnt = count(vec.begin(), vec.end(), b);
        cout << cnt << endl;
    }

    return 0;

}















