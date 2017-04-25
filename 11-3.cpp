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
    mov si, 15h  ;Ҫʹsiƫ�����洢��ɫ�ĵ�ַ, �����ݶδ洢��������
    mov ax, 0

s:
    mov ah, ds:[si]   ;ah�����ַ���ɫ
    push cx
    push si
    mov cx, 16
    mov si, 0
    mov bx, 0
    mov di, 1

inputCh:
    mov al, [bx]
    mov es:[bx+si], al  ;д�ַ�
    mov es:[bx+di], ah  ;д����
    inc bx
    inc si
    inc di

    loop inputCh

    pop si
    pop cx
    inc si
    mov dx, es
    add dx, 0ah  ;000~09f��ʾ����һ��
    mov es, dx

    loop s

    s1:
        jmp short s1
codesg ends
end start





















