#include <stdio.h>
union Test {
    char c;
    int i;
    double d;
};
int main() {
    union Test t={'6'};
    printf("%c\n",t.c );
    printf("%d\n",t.i );
    return 0;
}