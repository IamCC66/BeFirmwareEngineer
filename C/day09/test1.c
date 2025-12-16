#include <stdio.h>
void func(int *);
int main() {
    int n=10;
    int*p=&n;
    func(p);
    printf("%d\n",n );
    func(p);
    printf("%d\n",n );
    return 0;
}
void func(int *p) {
    *p+=1;
}