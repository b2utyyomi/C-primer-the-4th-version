/*******************************
author: yomi
date: 17.4.19
ps: 9-34...9-35   string::iterator     vector<int>::iterator
*******************************/

#include<iostream>
#include<string>
#include<cctype>
#define Nine
using namespace std;

int main()
{
    string a = "I love tAEkwoon~";
    #ifndef Nine
    /*for(size_t ix=0; ix!=a.size(); ix++){
        a[ix] = toupper(a[ix]);/// ·µ»Ø´óÐ´µÄ
    }*/
    for(string::iterator iter=a.begin(); iter!=a.end(); ++iter){
        *iter = toupper(*iter);
    }

    #endif // 9
    for(string::iterator iter=a.begin(); iter!=a.end(); ){
        if(*iter>='A' && *iter<='Z'){
            a.erase(iter);
        }
        else{
            iter++;
        }
    }
    cout << a << endl;

    return 0;
}



