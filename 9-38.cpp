/*******************************
author: yomi
date: 17.4.19
ps: 9-38...  not by myself... so sad story
*******************************/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a="ab2c3d7R4E6";
    string b="0123456789";
    string letters = {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string::size_type pos = 0;

    while((pos=a.find_first_of(b, pos))!=string::npos){
        cout << "found number at index: " << pos << " element is " << a[pos] << endl;
        ++pos;
    }
    pos = 0;
    while((pos=a.find_first_of(letters,pos))!=string::npos){
        cout << "found letter at index: " << pos << " element is " << a[pos] << endl;
        pos++;
    }

    cout << "**************************************************" << endl;
    pos = 0;
    while((pos=a.find_first_not_of(letters, pos))!=string::npos){
        cout << "found number at index: " << pos << " element is " << a[pos] << endl;
        ++pos;
    }
    pos = 0;
    while((pos=a.find_first_not_of(b, pos))!=string::npos){
        cout << "found letter at index: " << pos << " element is " << a[pos] << endl;
        ++pos;
    }
    return 0;
}

/*
found number at index: 2 element is 2
found number at index: 4 element is 3
found number at index: 6 element is 7
found number at index: 8 element is 4
found number at index: 10 element is 6
found letter at index: 0 element is a
found letter at index: 1 element is b
found letter at index: 3 element is c
found letter at index: 5 element is d
found letter at index: 7 element is R
found letter at index: 9 element is E
**************************************************
found number at index: 2 element is 2
found number at index: 4 element is 3
found number at index: 6 element is 7
found number at index: 8 element is 4
found number at index: 10 element is 6
found letter at index: 0 element is a
found letter at index: 1 element is b
found letter at index: 3 element is c
found letter at index: 5 element is d
found letter at index: 7 element is R
found letter at index: 9 element is E

Process returned 0 (0x0)   execution time : 4.259 s
Press any key to continue.

*/











