/*******************************
author: yomi
date: 17.4.21
ps: 10-26 && 27  调了又调才写出来的
*******************************/
#include<iostream>
#include<map>
#include<utility>
using namespace std;

int main()
{

    multimap<string, string>writers;
    typedef multimap<string, string>::iterator writer;
    string wr, book;
    while(cin >> wr >> book){
        writers.insert(make_pair(wr, book));
    }
    cin.clear();
    string find_author;
    while(cin >> find_author){
        /*writer iter = writers.find(find_author);
        if(iter!=writers.end()){
            ///一个键参数的erase()，删除拥有该键的所有元素
            writers.erase(find_author);
        }
        else{
            cout << "not found" << endl;
        }*/
        /*pair<writer, writer>iter = writers.equal_range(find_author);
        for(writer iter1=iter.first; iter1!=iter.second; ){
            writers.erase(iter1++);
        }*/
        /*writers.erase(iter.first, iter.second);*/
        ///删除指定书籍
        pair<writer, writer>ret = writers.equal_range(find_author);
        string find_book;
        cin >> find_book;

        for(writer iter=ret.first; iter!=ret.second; iter++){
            if(iter->second == find_book){
                writers.erase(iter);
                cout << "have deleted" << endl;
            }
        }
    }
    for(writer iter1= writers.begin(); iter1!=writers.end(); iter1++){
        cout << iter1->first << ' ' << iter1->second << endl;
    }
    return 0;
}
/*
yomi loveTK
taekwoon loveYM
yomi loveJM
yomi loveZK
^Z
yomi
^Z
taekwoon loveYM

Process returned 0 (0x0)   execution time : 68.673 s
Press any key to continue.

*/





