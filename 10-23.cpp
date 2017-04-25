/*******************************
author: yomi
date: 17.4.20
ps: 10-23...set 改成vector
*******************************/
#include<iostream>
#include<vector>
#include<map>
#include<fstream>
#include<stdexcept>
using namespace std;

ifstream & open_file(ifstream & in, const string & file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}
void remove_it(ifstream & remove_file, map<string, int>&word_count)
{
    vector<string>vec;
    string remove_word;
    while(remove_file >> remove_word){
        vec.push_back(remove_word);
    }
    string word;
    while(cin >> word){
        vector<string>::iterator iter;
        for(iter=vec.begin(); iter!=vec.end(); ++iter){
            if(*iter == word){
                break;
            }
        }
        if(iter == vec.end()){
            ++word_count[word];
        }
    }
}
int main(int argc, char **argv)
{
    map<string, int>word_count;
    ifstream map_it;
    if(!open_file(map_it, argv[1])){
        throw runtime_error("no exclude files");
    }
    remove_it(map_it, word_count);
    map<string, int>::iterator iter;
    for(iter=word_count.begin(); iter!=word_count.end(); ++iter){
        cout << iter->first << ' ' << iter->second << endl;
    }
    return 0;
}

/*

H:\Visual C++\简单C++>g++ 10-23.cpp -o 10-23.exe

H:\Visual C++\简单C++>10-23 exclude.txt
i love taekwoon oppa and jimin oppa and sugar oppa .
^Z
. 1
i 1
jimin 1
love 1
sugar 1
taekwoon 1

H:\Visual C++\简单C++>
*/



