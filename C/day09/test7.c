#include <stdio.h>

int main() {
    int a=100;
    int* ptr=&a;
    int**pptr=&ptr;
    printf("a的地址=%p\n\n",&a );
    printf("ptr的值=%p\nptr的地址=%p\n*ptr=%d\n\n",ptr,&ptr,*ptr );
    printf("pptr的值=%p\npptr的地址=%p\n*pptr=%p\n**pptr=%d\n\n",pptr,&pptr,*pptr,**pptr );
    return 0;
}