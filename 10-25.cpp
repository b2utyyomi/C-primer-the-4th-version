/*******************************
author: yomi
date: 17.4.21
ps: 10-25... to be updated
*******************************/
#include<iostream>
#include<cstdlib>
#include<vector>
#include<set>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    /*
    vector<string>to_be_read;
    set<string>have_read;
    string book_name;
    while(cin >> book_name)
    {
        to_be_read.push_back(book_name);
    }
    cin.clear();
    string read;
    while(cin >> read){
        have_read.insert(read);
    }
    vector<string>::iterator iter;
    for(iter=to_be_read.begin(); iter!=to_be_read.end();){
        set<string>::iterator set_it = have_read.find(*iter);
        if(set_it!=have_read.end()){
            to_be_read.erase(iter);
        }
        else{
            ++iter;
        }
    }
    for(auto &node:to_be_read){
        cout << node << endl;
    }*/
    ///by book Ä£ÄâÁù¸öÔÂ
    vector<string>books;
    set<string>readedBooks;
    string name;
    while(cin >> name)
        books.push_back(name);
    cin.clear();
    bool time_over = false;
    string answer, bookName;
    srand((unsigned)time(NULL));
    while(!time_over && !books.empty()){
        cin >> answer;
        if(answer[0] == 'y'||answer[0] == 'Y'){
            int i = rand()%books.size();
            bookName = books[i];
            cout << "You can read this book:" << bookName << endl;
            readedBooks.insert(bookName);
            books.erase(books.begin()+i);
            cout << "Did you read it?(yes/no)" << endl;
            cin >> answer;
            if(answer[0] == 'n' || answer[0] == 'N'){
                readedBooks.erase(bookName);
                books.push_back(bookName);
            }
        }
        cout << "Time over?(yes/no)" << endl;
        cin >> answer;
        if(answer[0] == 'y'|| answer[0] == 'Y'){
            time_over = true;
        }
    }
    if(time_over){
        cout << "books read: " << endl;
        for(set<string>::iterator sit = readedBooks.begin(); sit!=readedBooks.end(); ++sit){
            cout << *sit << endl;
        }
        cout << "books not read:" << endl;
        for(vector<string>::iterator vit = books.begin(); vit!=books.end(); ++vit)
            cout << *vit << endl;
    }
    else
        cout << "You have read all these books." << endl;
    return 0;
}


/*
jimin
taekwoon
kiguang
yomi
j-hope
^Z
kiguang
taekwoon
^Z
jimin
yomi
j-hope

Process returned 0 (0x0)   execution time : 64.319 s
Press any key to continue.

*/



















