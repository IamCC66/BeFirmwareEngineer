#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    int* p=&arr[0];
    int(* p2)[5]=&arr;
    // p++;
    // printf("%d\n",*p );//2
    //情况一：先取值后++
    // printf("%d\n",*p++ );//1
    // printf("%d\n",*(p++) );//1
    // printf("%d\n",*p );//2

    //情况二：
    // printf("%d\n",*++p );//2
    // printf("%d\n",*p );//2

    printf("%p\n",arr );
    printf("%p\n",arr+1);
    printf("%p\n",p );
    printf("%p\n",p+1 );
    printf("%p\n", p2);
    printf("%p\n", p2+1);

    return 0;
}