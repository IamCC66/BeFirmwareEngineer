//
// Created by hcc on 2025/11/30.
//


#include <stdio.h>

int main() {
    int a=1;
    int *ptr=&a;
    printf("%d\n",a);
    printf("%p\n",&a);

    printf("%d\n",*ptr);
    printf("%p\n",ptr);

    return 0;
}