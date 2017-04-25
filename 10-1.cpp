/*******************************
author: yomi
date: 17.4.20
ps: 10-1 && 2...
*******************************/
#include<iostream>
#include<string>
#include<vector>
#include<utility>/// include pair
using namespace std;

int main()
{
    pair<string, int>p;
    vector< pair<string, int> >vec;

    string a;
    int b;
    ///method 1
    /*
    while(cin >> a >> b){
        p = make_pair(a, b);
        vec.push_back(p);
    }
    */
    ///method 2
    /*while(cin >> a >> b){
        p.first = a;
        p.second = b;
        vec.push_back(p);
    }*/
    ///method 3
    while(cin >> a >> b){
        pair<string, int>p(a, b);
        vec.push_back(p);
    }
    vector< pair<string, int> >::iterator iter;
    for(iter=vec.begin(); iter!=vec.end(); ++iter){
        cout << iter->first << " " << iter->second << endl;
    }
    cout << endl;
    return 0;
}











