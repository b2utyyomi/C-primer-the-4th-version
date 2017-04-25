/*******************************
author: yomi
date: 17.4.25
ps: 11-18  the odd numbers from istream_iterator store into file1, even into file2
*******************************/

#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<map>
#include<fstream>
using namespace std;

int main()
{
    /*string file1, file2;
    cin >> file1 >> file2;
    ofstream outfile1(file1.c_str()), outfile2(file2.c_str());
    if(!outfile1)
    {
        cout << "can't open file" << endl;
    }
    if(!outfile2){
        cout << "can't open file" << endl;
    }
    istream_iterator<int>inIter(cin), eof;
    ostream_iterator<int>outIter1(outfile1, "\n");
    ostream_iterator<int>outIter2(outfile2, " ");
    while(inIter!=eof)
    {
        if(*inIter%2 == 0)
            *outIter1++ = *inIter++;
        else
            *outIter2++ = *inIter++;
    }
    outfile1.close();
    outfile2.close();
    */
    string file1 = "11-8-1.txt";
    string file2 = "11-8-2.txt";
    ofstream outFile1(file1.c_str());
    ofstream outFile2(file2.c_str());
    if(!outFile1){
        cout << "can't open file1" << endl;
    }
    if(!outFile2){
        cout << "can't open file2" << endl;
    }
    istream_iterator<int>inIter(cin), eof;
    ostream_iterator<int>outIter1(outFile1, " ");
    ostream_iterator<int>outIter2(outFile2, "\n");

    while(inIter!=eof){
        if(*inIter%2 == 0){
            *outIter1++ = *inIter++;
        }
        else{
            *outIter2++ = *inIter++;
        }
    }
    outFile1.close();
    outFile2.close();
    ifstream file1_, file2_;
    file1_.open("11-8-1.txt");
    file2_.open("11-8-2.txt");
    int a;

    ostream_iterator<int>outIter(cout, " ");
    while(file1_ >> a){
        *outIter++ = a;
    }
    cout << endl;
    ostream_iterator<int>outIterI(cout, "\n");
    while(file2_ >> a){
        *outIterI++ = a;
    }
    return 0;
}


















