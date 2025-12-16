#include <stdio.h>

int main() {
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("%p\n",a+1 );
    printf("%p\n",*(a+1) );
    printf("%d\n",**(a+1) );
    printf("%p\n",a[1] );

    int b[]={1,2,3,4,5};
    int(*p)[5]=&b;
    printf("%p\n",p);
    printf("%d\n",**p );
    return 0;
}
