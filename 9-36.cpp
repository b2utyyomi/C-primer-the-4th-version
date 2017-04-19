/*******************************
author: yomi
date: 17.4.19
ps: 9-36...    vector<char>   ---->   string
*******************************/

#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>

using namespace std;

vector<char>vec;

int main()
{
    string s;
    char a[16] = {"I love TaekWoon"};

    for(size_t ix=0; ix!=sizeof(a)/sizeof(a[0])-1; ix++){
        vec.push_back(a[ix]);
    }
   /* string::iterator iter1=s.end();
    for(vector<char>::iterator iter=vec.begin(); iter!=vec.end(); ++iter){
        s.push_back(*iter);///麻烦啊
        ///s.insert(iter1, *iter);   崩  大概是没有这个吧 还得查书啊
    }*/

    s.insert(s.begin(), vec.begin(), vec.end());
    cout << s << endl;
    return 0;
}











