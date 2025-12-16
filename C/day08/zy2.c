#include <stdio.h>
void exchange(int *a,int *b) {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

void exchange1(int *a,int *b) {
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main() {
    int a=1;
    int b=2;
    exchange1(&a,&b);
    printf("a=%d,b=%d\n",a,b );
    return 0;
}