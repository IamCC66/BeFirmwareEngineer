#include <stdio.h>
void arr1(int *arr,int size) {
    for (int i=0;i<size;i++) {
        printf("%d\n",*arr );
        arr++;
    }
}
int main() {
    int arr[]={1,2,3,4,5};
    int *ptr=&arr[0];
    arr1(arr,5);
    return 0;
}