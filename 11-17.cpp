/*******************************
author: yomi
date: 17.4.25
ps: 11-17
*******************************/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    istream_iterator<string>inIter(cin), eof;
    vector<string>ivec(inIter, eof);
    /*for(auto &node:ivec)
        cout << node << ' ';*/
    ostream_iterator<string>outIter(cout, " ");
    copy(ivec.begin(), ivec.end(), outIter);
    return 0;
}














