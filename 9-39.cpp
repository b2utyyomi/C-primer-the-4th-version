/*******************************
author: yomi
date: 17.4.19
ps: 9-39...
calculate the number of the words , the letter number of the longest word and
the letter number of the shortest word...
I wrote a null pointer... cry cry cry...
*******************************/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string line1 = "They were my oppa of 50 I named them:";
    string line2 = "taekwoon, woohyun, jimin, V";
    string line3 = "and JungKuk";
    string sentence = line1+' '+line2+' '+line3;
    string seperate = ",. \r\t\n";
    string word;
    vector<string>longest_word;
    vector<string>shortest_word;
    string::size_type start_pos = 0, end_pos = 0, word_len, max_len = 0, min_len = 100, cnt = 0;
    while((start_pos=sentence.find_first_not_of(seperate, end_pos))!=string::npos){///find the first letter
        cnt++;
        end_pos = sentence.find_first_of(seperate, start_pos);///find the first punctuation
        if(end_pos==string::npos){///find the last letter
            ///the length of the last letter
            ///word_len = string::npos-start_pos; the first version ... ERROR because of null pointer
            word_len = sentence.size()-start_pos;
        }
        else{
            word_len = end_pos-start_pos; ///end_pos指向分隔符的位置，所以减去start_pos就是长度
        }
        ///word.assign(sentence.begin()+start_pos, sentence.begin()+end_pos); the first version
        /// ERROR because of null pointer  ... 一定注意空指针的问题
        word.assign(sentence.begin()+start_pos, sentence.begin()+start_pos+word_len);
        ///start_pos = sentence.find_first_not_of(seperate, end_pos);
        if(word_len>=max_len){
            max_len = word_len;
            longest_word.clear();
            longest_word.push_back(word);
        }
        if(word_len<=min_len){
            min_len = word_len;
            shortest_word.clear();
            shortest_word.push_back(word);
        }
    }

    /*习题答案
    while((start_pos=sentence.find_first_not_of(seperate, end_pos))!=string::npos){
        ++cnt;

        end_pos = sentence.find_first_of(seperate, start_pos);
        if(end_pos == string::npos){
            word_len = string::npos-start_pos;
        }
        else{
            word_len = end_pos-start_pos;
        }
        word.assign(sentence.begin()+start_pos, sentence.begin()+start_pos+word_len);
        start_pos = sentence.find_first_not_of(seperate, end_pos);
        if(cnt == 1){
            max_len = min_len = word_len;
            longest_word.push_back(word);
            shortest_word.push_back(word);
        }
        else{
            if(word_len>=max_len){
                max_len = word_len;
                longest_word.clear();
                longest_word.push_back(word);
            }
            if(word_len<=min_len){
                min_len = word_len;
                shortest_word.clear();
                shortest_word.push_back(word);
            }
        }
    }*/
    cout << "word number:" << cnt << endl;
    cout << "longest word: " ;
    for(auto &node:longest_word){
        cout << node;
    }
    cout << endl;
    cout << "shortest word: ";
    for(auto &node:shortest_word){
        cout << node;
    }
    cout << endl;
    return 0;
}

/*
word number:15
longest word: taekwoon
shortest word: V

Process returned 0 (0x0)   execution time : 5.773 s
Press any key to continue.

*/










