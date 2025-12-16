#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr1=&arr[0];
    int (*ptr2)[5]=&arr;



    printf("arr=%p\n",arr );
    printf("arr+1=%p\n",arr+1 );
    printf("ptr1=%p\n",ptr1 );
    printf("ptr1+1=%p\n",ptr1+1 );
    printf("ptr2=%p\n",ptr2 );
    printf("ptr2+1=%p\n",ptr2+1 );
    printf("&arr=%p\n",&arr );
    printf("&arr+1=%p\n",&arr+1 );
    return 0;
}