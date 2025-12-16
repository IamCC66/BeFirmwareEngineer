//
// Created by hcc on 2025/12/1.
//


#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    int e=50;
    //5个int指针
    int *ptra=&a;
    int *ptrb=&b;
    int *ptrc=&c;
    int *ptrd=&d;
    int *ptre=&e;
    //创建指针数组
    int *pointerArray[]={ptra,ptrb,ptrc,ptrd,ptre};
    //遍历指针数组
    for (int i=0;i<5;i++) {
        printf("%d:%p:%d\n",i,pointerArray[i],*pointerArray[i]);
    }
    return 0;
}