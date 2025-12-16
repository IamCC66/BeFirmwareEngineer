#include <stdio.h>
int max(int a,int b) {
    return a>b?a:b;
}
int main() {
    int (*maxp)(int,int)=max;
    int max=(*maxp)(9,2);
    printf("%d\n",max );
    return 0;
}