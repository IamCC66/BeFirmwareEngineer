#include <stdio.h>
#define b 1
#if defined a
#define x 1

#elif defined b
#define x 2
#endif


int main() {
    printf("%d\n",x );
    return 0;
}