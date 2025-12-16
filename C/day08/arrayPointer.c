#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};

    int (*ptr)[5]=&arr;

    printf("arr=%p\n",arr);
    printf("ptr=%p\n",ptr);

    printf("arr+1=%p\n",arr+1);
    printf("ptr+1=%p\n",ptr+1);

    for (int i = 0; i < 5; ++i) {
        printf("%d\n",(*ptr)[i] );
    }

    printf("%d\n",(*ptr)[0] );
    printf("%p\n",ptr[0] );

    printf("%p\n",arr+1 );
    printf("%p\n",ptr+1 );
    return 0;
}