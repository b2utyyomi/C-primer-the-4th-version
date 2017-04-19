/*******************************
author: yomi
date: 17.4.19
ps: 9-43
*******************************/
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<char>s;
    while(!s.empty())
        s.pop();
    /*char s1[18] = "I love (taekwoon)";
    cout << "1" << endl;
    for(size_t ix=0; ix<17; ix++){
        if(s1[ix]==')'){
            while(!s.empty()){
                char c = s.top();
                if(s.top() == '('){
                    s.pop();
                    s.push('P');
                    break;
                }
                s.pop();
            }
        }
        else
        s.push(s1[ix]);
    }*/
    /// string...   no spaces
    string a;
    cin >> a;
    string::iterator iter;
    for(iter=a.begin(); iter!=a.end(); iter++){
        if(*iter == ')'){
            while(!s.empty()){
                char c = s.top();
                if(c == '('){
                    s.pop();
                    s.push('P');
                    break;
                }
                s.pop();
            }
        }
        else
        s.push(*iter);
    }
    while(!s.empty()){
        cout << s.top() ;
        s.pop();
    }

    return 0;
}


