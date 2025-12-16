#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int x, y, maxVal;
    int (*pmax)(int, int) = max;

    printf("Input first number:");
    scanf("%d", &x);
    printf("Input second number:");
    scanf("%d", &y);

    maxVal = (*pmax)(x, y);
    printf("Max value: %d\n", maxVal);
    printf("pmax’s value is %p, pmax’s address is %p\n", pmax, &pmax);
    printf("max’s value is %p, max’s address is %p\n", max, &max);
    return 0;
}
