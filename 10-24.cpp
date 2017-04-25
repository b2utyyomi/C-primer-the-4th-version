/*******************************
author: yomi
date: 17.4.21
ps: 10-24   ���˴𰸾����Լ����ɵ���Ƶ�
*******************************/
#include<iostream>
#include<set>
#include<map>
#include<fstream>
#include<stdexcept>
#include<sstream>
using namespace std;

ifstream & open_file(ifstream & in, const string & file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}
void remove_s(ifstream & remove_file, set<string>&char_set)
{
    set<string>not_change;
    string not_change_word;
    while(remove_file >> not_change_word){
        not_change.insert(not_change_word);
    }
    string word;
    while(cin >> word){
        if(not_change.count(word)){
            char_set.insert(word);
        }
        else{
            word.assign(word, 0, word.size()-1);
            ///char_set.insert(word.begin(), word.end()-1);
            char_set.insert(word);

        }
    }
}
int main(int argc, char **argv)
{
   /*  by me
   set<string>char_set;
    ifstream set_it;
    if(!open_file(set_it, argv[1])){
        throw runtime_error("no not_change file");
    }
    remove_s(set_it, char_set);

    set<string>::iterator iter = char_set.begin();
    while(iter!=char_set.end()){
        cout << *iter << endl;
        ++iter;
    }*/
    ///by book  ��̵��ŵ����� ��ȷû��Ҫ����set
    set<string>exclude;
    exclude.insert("success");
    exclude.insert("class");
    string word;
    while(cin >> word){
        if(!exclude.count(word)){
            word.resize(word.size()-1);
        }
        cout << word << endl;
    }

    return 0;
}
/* by book
strings
string
class
class
success
success
kis
ki

*/
/*

H:\Visual C++\��C++>g++ 10-24.cpp -o 10-24.exe

H:\Visual C++\��C++>10-24 notchange.txt
success
oppas
strings
class
^Z
class
oppa
string
success

H:\Visual C++\��C++>
*/





