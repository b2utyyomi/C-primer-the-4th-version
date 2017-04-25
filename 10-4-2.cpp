/*******************************
author: yomi
date: 17.4.20
ps: 10-4-2  ��һ�ѵ�����ɾ��ָ����һ�ѵ���
*******************************/
#include<iostream>
#include<fstream>
#include<sstream>
#include<stdexcept>
#include<set>
#include<string>
#include<map>
using namespace std;

ifstream & open_file(ifstream &in, const string & file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

void restricted_wc(ifstream &remove_file, map<string, int>&word_count)
{
    set<string>exclude;
    string remove_word;
    while(remove_file >> remove_word)
    {
        exclude.insert(remove_word);
    }
    cin.clear();
    string word;
    while(cin >> word){
        if(!exclude.count(word)){
            ++word_count[word];
        }
    }

}
int main(int argc, char** argv)
{
    /*by me ...���ñ���ϴ�Ե�׼����
    set<string>exclude;///�����ų���
    map<string, int>word_count;
    typedef map<string, int>::iterator map_it;
    typedef set<string>::iterator set_it;
    string word;
    while(cin >> word){
        pair<map_it, bool>ret = word_count.insert(make_pair(word, 1));
        if(!ret.second){
            ++word_count[word];
        }
    }
    cin.clear();
    while(cin >> word){
        exclude.insert(word);
    }
    for(map_it iter=word_count.begin(); iter!=word_count.end(); ++iter){
        set_it iter1= exclude.find(iter->first);

        if(iter1 != exclude.end()){
            word_count.erase(*iter1);
        }
    }
    */
    ///by book   start!!! ���˼���� �ų�����û�еĻ� �Ͳ嵽map�У� �����ȶ����ȥ����ɾ���ų����е�
    ///������鷳�����Բ��ԡ�������������á�����
    map<string, int>word_count;
    ifstream exclude_file;
    if(!open_file(exclude_file, argv[1])){
       throw runtime_error("no exclude file");
    }
    restricted_wc(exclude_file,word_count);
    map<string, int>::iterator iter;
    for(iter=word_count.begin(); iter!=word_count.end(); ++iter){
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}
/* by book

H:\Visual C++\��C++>g++ 10-4-2.cpp -o 10-4-2.exe

H:\Visual C++\��C++>10-4-2 exclude.txt
i love taekwoon oppa and jimin oppa and sugar oppa .
^Z
. 1
i 1
jimin 1
love 1
sugar 1
taekwoon 1

H:\Visual C++\��C++>
*/

/*by me
i love taekwoon oppa and jimin oppa, and suga oppa ...

^Z

oppa
i
^Z
... 1
and 2
jimin 1
love 1
oppa, 1
suga 1
taekwoon 1

Process returned 0 (0x0)   execution time : 57.440 s
Press any key to continue.

*/









