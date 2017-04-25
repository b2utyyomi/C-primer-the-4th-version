/*******************************
author: yomi
date: 17.4.24
ps: 11-22    the 3~7 elements in vector reversely copy into list.
*******************************/
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    int a[10] = {3, 2, 5, 1, 8, 3, 9, 7, 2, 4};
    vector<int>vec(a, a+10);
    /*vector<int>::reverse_iterator iter;
    vector<int>vec1(vec.begin()+2, vec.begin()+7);
    for(iter=vec1.rbegin(); iter!=vec1.rend(); ++iter){
        cout << *iter << ' ';
    }*/
    ///list<int>lst(vec.rbegin()+3, vec.rbe) count one by one so troublesome
    /// by book
    vector<int>::reverse_iterator r_start, r_end;
    r_start = vec.rbegin();///×¢Òâ×ó¿ªÓÒ±Õ

    for(size_t cnt1=1; cnt1!=4; cnt1++){///get the 7th element reverse iterator
        ++r_start;
    }
    r_end = r_start;///   3 4 5 6 7 because of length
    for(size_t cnt2=1; cnt2!=6; cnt2++){///get the 2nd element reverse iterator
        ++r_end;
    }
    list<int>lst;
    copy(r_start, r_end, inserter(lst, lst.begin()));
    for(auto &node:lst){
        cout << node << ' ';
    }
    return 0;
}











