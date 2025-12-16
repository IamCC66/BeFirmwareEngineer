#include <stdio.h>

int main() {
    int a=10,b=20;
    int * const ptr=&a;
    const int* ptr2=&b;

    return 0;
}