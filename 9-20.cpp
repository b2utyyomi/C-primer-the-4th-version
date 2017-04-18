/*******************************
author: yomi
date: 17.4.1
ps: 9-20
*******************************/
#define my_code
#ifndef my_code

#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    int a[4] = {1, 2, 4, 6};
    int b[4] = {1, 2, 4, 6};
    vector<int>ivec;
    list<int>l;
    for(size_t ix = 0; ix!=sizeof(a)/sizeof(a[0]);ix++){
        ivec.push_back(a[ix]);
    }
    for(size_t ix = 0; ix!=sizeof(b)/sizeof(b[0]);ix++){
        l.push_back(b[ix]);
    }
    vector<int>::iterator iter = ivec.begin();
    list<int>::iterator iter1 = l.begin();
    while(iter!=ivec.end() && iter1!=l.end()){
        if(*iter!=*iter1){
            break;
        }
        iter++;
        iter1++;
    }
    if(iter == ivec.end()&& iter1 == l.end()){
        cout << "same" << endl;
    }
    else
        cout << "not same" << endl;
    return 0;
}

#endif // my_code







#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    vector<int>vec;
    list<int>l;
    int ival;
    while(cin >> ival){
        vec.push_back(ival);
    }
    cin.clear();///ʹ����������Ϊ��Ч״̬   ɶ������ŶŶŶ�����������һ�£��Ͳ������������������

    while(cin >> ival){
        l.push_back(ival);
    }

    vector<int>::iterator iter = vec.begin();
    list<int>::iterator iter1 = l.begin();
    while(iter!=vec.end() && iter1!=l.end()){
        if(*iter!=*iter1){
            break;
        }
        iter++;
        iter1++;
    }
    if(iter == vec.end()&& iter1 == l.end()){
        cout << "same" << endl;
    }
    else
        cout << "not same" << endl;

    return 0;
}







assume cs:codesg, ds:datasg, ss:stacksg

datasg segment
    db '1975', '1976', '1977', '1978', '1979', '1980', '1981', '1982', '1983'
    db '1984', '1985', '1986', '1987', '1988', '1989', '1990', '1991', '1992'
    db '1993', '1994', '1995'

    dd 16,22,382,1356,2390,8000,16000,24486,50065,97479,140417,197514
    dd 345980,590827,803530,1183000,1843000,2759000,3753000,4649000,5937000

    dw 3,7,9,13,28,38,130,220,476,778,1001,1442,2258,2793,4037,5635,8226
    dw 11542,14430,15257,17800
datasg ends

table segment
    db 21 dup ('year summ ne ?? ')
table ends


codesg segment
    start:
        mov ax, datasg
        mov ds, ax
        mov ax, table
        mov es, ax

        mov cx, 21
        mov bx, 0
        mov si, 0;
    s:
        mov al, ds:[bx+si]
        mov es:[bx+si]
        inc si
        add bx,16

        loop s
codesg ends
end start







;���Լ���ûд������ �����߼��е��� �����Ҳû����
assume cs:codesg

data segment
    db '1975','1976','1977','1978','1979','1980','1981','1982','1983'
    db '1984','1985','1986','1987','1988','1989','1990','1991','1992'
    db '1993','1994','1995'
    ;21*4 = 84

    dd 16,22,382,1356,2390,8000,16000,24486,50065,97479,140417,197514
    dd 345980,590827,803530,1183000,1843000,2759000,3753000,4649000,5937000
    ;84
    dw 3,7,9,13,28,38,130,220,476,778,1001,1442,2258,2793,4037,5635,8226
    dw 11542,14430,15257,17800
data ends

table segment
    db 21 dup ('year summ ne ?? ')
table ends

codesg segment
    start:
        mov ax,data
        mov ds,ax

        mov ax,table
        mov ss,ax
        mov bp,0   ;����ÿһ�е���

        mov bx,0
        mov si,0
        mov di,0

        mov cx,21
        s:  mov ax,[bx]
            mov [bp],ax       ;�ȷ����ֽ�
            mov ax,[bx+2]
            mov [bp+2],ax    ;�ٷ����ֽ�  ��ݽ���
            mov byte ptr[bp+4], ' '          ;��һ���ո�

            mov ax,[si+84]    ;���������֮�� ��ŵ������� ����������Ӧ����
            mov dx,[si+2+84]   ; 32 λ������, ��λ����dx�У���λ����ax��
            mov [bp+5],ax
            mov [bp+7],dx

            div word ptr [di+168]   ;���Թ�Ա��
            mov [bp+0dH],ax      ;���� ���˾�����

            mov byte ptr [bp+9],' '
            mov ax,[di+168]  ;���Ա��
            mov [bp+0aH],ax
            mov byte ptr [bp+0cH],' '
            mov byte ptr [bp+0fH],' '

            add bx,4h
            add si,4h
            add di,2h
            add bp,10h
        loop s

        mov ax,4c00h
        int 21h
codesg ends

end start























