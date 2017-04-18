/*******************************
author: yomi
date: 17.4.17
ps: 6_25    the close and open of NDEBUG...
*******************************/
#include<iostream>
#include<string>
#include<cctype>
#define NDEBUG
using namespace std;

int main()
{
    string string_occur, string_pre;
    while(cin >> string_occur){
        #ifndef NDEBUG
        cout << string_occur << endl;
        #endif // NDEBUG
        if(!isupper(string_occur[0]))
            continue;
        if(string_occur == string_pre){
            break;
        }
        else{
            string_pre = string_occur;
        }
    }
    if(string_occur == string_pre && !string_occur.empty()){
        #ifndef NDEBUG1
            cout << string_occur << ' ' << string_occur << endl;
        #endif // NDEBUG
        cout << "the repeat word is :" << string_occur << endl;
    }
    else{
        cout << "no repeat word~" << endl;
    }
    return 0;
}
///^Z to stop, but print  "the repeat word is :"...
