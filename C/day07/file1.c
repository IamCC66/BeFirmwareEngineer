//
// Created by hcc on 2025/11/29.
//


#include <stdio.h>
extern int a;
extern double b;
extern void add(int n,int m);
int main() {
    printf("%d",a);
    printf("%lf",b);
    add(7,8);
    return 0;
}