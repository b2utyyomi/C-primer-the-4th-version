/*******************************
author: yomi
date: 17.4.20
ps: 10-9   the number of input words
*******************************/
#include<iostream>
#include<string>
#include<map>
#include<utility>
using namespace std;

int main()
{
    map<string, int>word_count;
    string word;
    while(cin >> word){
        ///method 1
        ///word_count[word]++;
        ///method 2
        ///pair< map<string, int>::iterator , bool> ret = word_count.insert(map<string, int>::value_type(word, 1));
        ///method 3
        /*
        typedef map<string, int>::value_type val;
        pair< map<string, int>::iterator, bool> ret = word_count.insert( val(word, 1));
        */
        ///method 4
        pair< map<string, int>::iterator, bool> ret = word_count.insert(make_pair(word, 1));
        if(!ret.second){
            word_count[word]++;
        }
    }
    map<string, int>::iterator iter = word_count.begin();
    while(iter!=word_count.end()){
        cout << iter->first << ' ' << iter->second << endl;
        ++iter;
    }
    return 0;
}
/*
oppa
salanghei
ya
nao
mu
oppa
oppa
ya
^Z
mu 1
nao 1
oppa 3
salanghei 1
ya 2

Process returned 0 (0x0)   execution time : 39.484 s
Press any key to continue.

*/











