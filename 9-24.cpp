/*******************************
author: yomi
date: 17.4.18
ps: 9-24...
*******************************/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a[5] = {3, 5, 2, 1, 6};
    vector<int>vec(a, a+3);
    cout << vec.front() << endl;
    cout << *vec.begin() << endl;
    cout << vec[0] << endl;
    cout << "after clear..." << endl;
    vec.clear();
    if(vec.empty())
        cout << "no elements" << endl;
    return 0;
}



