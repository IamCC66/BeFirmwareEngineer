//
// Created by hcc on 2025/11/29.
//


#include <stdio.h>
int digui(int n) {
    if (n==1||n==2) {
        return 1;
    }
    return digui(n-1)+digui(n-2);
}
int main() {
    printf("%d",digui(6));
    return 0;
}