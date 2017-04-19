/*******************************
author: yomi
date: 17.4.1
ps: 9-41  Ms--->Miss    Daisy---->AnnaP
*******************************/
#include<iostream>
#include<string>

using namespace std;

string greet(string form, string lastname, string title, string::size_type pos, int length)
{
    string s = form.replace(form.begin()+8,form.end(), lastname);
    s = s.replace(5, 2, title, pos, length);
    return s;
}

int main()
{
    string generic1("Dear Ms Daisy");
    string generic2("MrsMsMissPeople");
    string lastname("AnnaP");
    string Saluto = greet(generic1, lastname, generic2, 5, 4);
    cout << Saluto << endl;
    return 0;
}

/*
Dear Miss AnnaP

Process returned 0 (0x0)   execution time : 5.304 s
Press any key to continue.

*/
