#include <stdio.h>
#include <stdlib.h>
int* randArr() {
    static int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i]=rand()%100;
    }
    return arr;
}

int main() {
    int* p=randArr();
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",*p++);
    }
    return 0;
}