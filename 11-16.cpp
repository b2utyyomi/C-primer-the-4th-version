/*******************************
author: yomi
date: 17.4.25
ps: 11-16
*******************************/
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    string filename;
    cin >> filename;
    ifstream is(filename.c_str());
    if(!is){
        cout << "can't open file" << endl;
        return EXIT_FAILURE;
    }
    ostream_iterator<string>outIter(cout, " ");
    istream_iterator<string>inIter(is), eof;
    copy(inIter, eof, outIter);
    return 0;
}









