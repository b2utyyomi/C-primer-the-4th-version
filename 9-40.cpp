/*******************************
author: yomi
date: 17.4.19
ps: 9-40
*******************************/
#include<iostream>
#include<string>

using namespace std;

int main()
{
   /** char *q1 = "when woohyun in the dooryard bloom";
    sentence.assign(q1, 13); ///ok, but string can't...
   **/
    string q1("when woohyun in the dooryard bloom");
    string q2("the child is father of the man");
    string sentence;
    ///sentence.assign(q2, 0, 13);///ok
    sentence.assign(q2.begin(), q2.begin()+13);/// 13, 15 is length
    ///sentence.append(q1, 13, 15);
    ///书写的好啊 仔细想想 这些都是技巧， 不用死记。。。
    sentence.append(q1.substr(q1.find("in"), 15));
    cout << sentence << endl;

    return 0;
}

/*
the child is in the dooryard

Process returned 0 (0x0)   execution time : 4.711 s
Press any key to continue.

*/











