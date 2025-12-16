#include <stdio.h>
#include <stdlib.h>
void initArray(int* arr,int len,int (*rd)()) {
    for (int i = 0; i < len; ++i) {
        *arr=rd();
        arr++;
    }
}
int main() {
    int arr[10];
    initArray(arr,10,rand);
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i] );
    }
    return 0;
}