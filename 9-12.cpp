/*******************************
author: yomi
date: 17.4.17
ps: 9-12
*******************************/

#include<iostream>
#include<vector>
using namespace std;

bool find_it(vector<int>a, int n)
{
    vector<int>::iterator  iter;
    for(iter = a.begin(); iter!=a.end(); iter++)
    {
        if(*iter == n)
            break;
    }
    if(iter==a.end())
        return false;
    return true;
}
int main()
{
    vector<int>vec;
    ///for(auto &node:vec)
      ///  cin >> node;
    int a[7] = {1, 3, 6, 2, 5};
    cout << vec.size() << endl;
    for(size_t ix = 0; ix<5; ix++){

        vec.push_back(a[ix]);///在最后一个元素后面插
    }
    if(find_it(vec, 5))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

