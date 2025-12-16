//
// Created by hcc on 2025/12/1.
//


#include <stdio.h>
int main() {
    int nums[]={1,2,3,4,5};
    int *ptr=&nums[0];
    printf("ptr=%p,*ptr=%d\n",ptr,*ptr);
    printf("ptr+1=%p,*ptr+1=%d\n",ptr+1,*ptr+1);
    printf("ptr+2=%p,*ptr+2=%d",ptr+2,*ptr+2);
    return 0;
}