/*******************************
author: yomi
date: 17.4.23
ps: 11-9...  count_if :length not shorter than 4.  function only 1 parameter
stable_sort: all dictionary order include the same length.
function 2 parameter
generic algorithm do something by iterator.(how bad my English~)
*******************************/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool GT4(const string & s)
{
    if(s.size() > 4)
        return true;
    return false;
}
bool IsShorter(const string & s1, const string & s2)
{
    if(s1.size() < s2.size()){
        return true;
    }
    return false;
}
ifstream & open_file(ifstream &in, const string & file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}
int main(int argc, char **argv)
{
    typedef vector<string>::iterator vec_it;
    if(argc < 2){
        cout << "no input file!!!" << endl;
    }
    ifstream in;
    if(!open_file(in, argv[1])){
        cout << "no such a input file!!!" << endl;
    }

    vector<string>vec;
    string a;
    while(in >> a){
        vec.push_back(a);
    }
    cin.clear();
    ///vector<string>::size_type cnt = count_if(vec.begin(), vec.end(), GT4);
    ///cout << cnt << endl;
    vec_it iter = vec.begin();
    vector<string>::size_type cnt = 0;
    while((iter = find_if(iter, vec.end(), GT4))!=vec.end()){
        cnt++;
        ++iter;///一定要自增 否则一直返回找到的第一个元素
    }
    cout << cnt << endl;
    vector<string>ivec(vec.begin(), vec.end());
    sort(ivec.begin(), ivec.end());/// all dictionary order.
    vector<string>::iterator end_iter = unique(ivec.begin(), ivec.end());
    ivec.erase(end_iter, ivec.end());/// no repeat words
    stable_sort(ivec.begin(), ivec.end(), IsShorter);///length
    vector<string>::iterator iter1;
    for(iter1=ivec.begin(); iter1!=ivec.end(); ++iter1){
        cout << *iter1 << ' ';
    }
    return 0;
}

/*
jimin
yomi
zihi
zihi
army
jungkook
^Z
2
army yomi zihi jimin jungkook
Process returned 0 (0x0)   execution time : 24.600 s
Press any key to continue.

*/




