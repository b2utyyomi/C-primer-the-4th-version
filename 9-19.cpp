/*******************************
author: yomi
date: 17.4.18
ps: 9-19...
*******************************/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int some_val = 1;
    vector<int>ivec;
    int a[5] = {2, 1, 4, 5, 2};
    for(size_t ix=0; ix!=sizeof(a)/sizeof(a[0]); ix++)
        ivec.push_back(a[ix]);
    vector<int>::iterator iter;/// notice: 一定不能写在外面 因为插入了元素 .size() 变了 会造成iterator失效
    for(iter=ivec.begin(); iter!=ivec.size()/2+ivec.begin();){
        if(*iter == some_val){
            iter = ivec.insert(iter, 2*some_val);
            iter += 2;
        }
        else{
            iter++;
        }
    }
    for(auto &node:ivec){
        cout << node << ' ';
    }
    return 0;
}
