/*******************************
author: yomi
date: 17.4.22
ps: 11-3
*******************************/
#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    int a;
    while(cin >> a){
        vec.push_back(a);
    }
    int sum = accumulate(vec.begin(), vec.end(), 2);
    cout << sum << endl;
    return 0;
}

/*
6
4
2
3
^Z
17

Process returned 0 (0x0)   execution time : 5.868 s
Press any key to continue.

*/

assume cs:codesg, ds:data, ss:stack

data segment
    db 'I love taekwoon oppa!'
    db 2,24h,71h
data ends

stack segment
    db 16 dup(0)
stack ends

codesg segment

start:

    mov ax, stack
    mov ss, ax
    mov sp, 0

    mov ax, data
    mov ds, ax

    mov cx, 3
    mov ax, 0B800H
    mov es, ax
    mov si, 15h  ;要使si偏移至存储颜色的地址, 看数据段存储就明白了
    mov ax, 0

s:
    mov ah, ds:[si]   ;ah保存字符颜色
    push cx
    push si
    mov cx, 16
    mov si, 0
    mov bx, 0
    mov di, 1

inputCh:
    mov al, [bx]
    mov es:[bx+si], al  ;写字符
    mov es:[bx+di], ah  ;写属性
    inc bx
    inc si
    inc di

    loop inputCh

    pop si
    pop cx
    inc si
    mov dx, es
    add dx, 0ah  ;000~09f显示器第一行
    mov es, dx

    loop s

    s1:
        jmp short s1
codesg ends
end start





















