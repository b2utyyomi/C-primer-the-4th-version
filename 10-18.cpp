/*******************************
author: yomi
date: 17.4.20
ps: 10-18  我觉得书上的思路有点反人类啊。。。
*******************************/
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<string, vector<string> >family;
    string firstname, lastname;
    vector<string>vec;
    /*  by me
    while(cin >> firstname >> lastname){
        map<string, vector<string> >::iterator iter = family.find(firstname);
        if(iter!=family.end()){
            iter->second.push_back(lastname);
        }
        else{
            vec.clear();/// very easily to forget !!!
            vec.push_back(lastname);
            family.insert(make_pair(firstname, vec));
        }
    }
    map<string, vector<string> >::iterator iter1;
    vector<string>::iterator iter2;
    for(iter1=family.begin(); iter1!=family.end(); ++iter1){
        cout << iter1->first << ":" << endl;
        vector<string>vec1(iter1->second);
        for(iter2=vec1.begin(); iter2!=vec1.end(); ++iter2){
            cout << *iter2 << ' ';
        }
        cout << endl;
    }
    */
    /// by book
    do{
        cin >> firstname;
        if(!cin)
            break;
        vec.clear();
        pair<map<string, vector<string> >::iterator, bool>ret =
                        family.insert(map<string, vector<string> >::value_type(firstname, vec));
        ///pair< map<string, vector<string> >::iterator, bool>ret = family.insert(make_pair(firstname, vec));
        if(!ret.second){
            cout << "repeated firstname: " << firstname << endl;
            continue;
        }
        while(cin >> lastname)
            ret.first->second.push_back(lastname);
        cin.clear();

    }while(cin);
    cin.clear();
    string name;
    cin >> name;
    map<string, vector<string > >::iterator iter = family.find(name);
    vector<string>::iterator iter1 = iter->second.begin();
    while(iter1!=iter->second.end()){
        cout << *iter1 << endl;
        ++iter1;
    }
    return 0;
}

/*by me
zhang ying
lee Giguang
lee JoonGi
piao jimin
piao yoonchan
zheng zeyun
zheng ronghe
^Z
lee:
Giguang JoonGi
piao:
jimin yoonchan
zhang:
ying
zheng:
zeyun ronghe

Process returned 0 (0x0)   execution time : 40.404 s
Press any key to continue.

*/


/* by book
zhang
yixing ying
^Z
lee
kiguang joongi
^Z
piao
jimin xinhui yoonchan
^Z
zheng
zeyun roonghe
^Z
lee
repeated firstname: lee
^Z
lee
kiguang
joongi

Process returned 0 (0x0)   execution time : 55.255 s
Press any key to continue.

*/
