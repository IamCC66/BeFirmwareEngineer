//
// Created by hcc on 2025/12/1.
//


#include <stdio.h>

int main() {
    int nums[]={1,2,3,4,5};
    int *ptr1=&nums[0];
    int *ptr2=&nums[4];
    printf("ptr2-ptr1=%td \n", ptr2 - ptr1);
    printf("ptr1-ptr2=%td \n", ptr1 - ptr2);

    double d1=1.1;
    double d2=2.2;
    double *dp1=&d1;
    double *dp2=&d2;
    printf("dp1-dp2=%td\n",dp1-dp2);
    printf("dp2-dp1=%td\n",dp2-dp1);

    printf("ptr1>d1=%d",ptr1>dp1);
    printf("ptr1<d1=%d",ptr1<dp1);
    return 0;
}