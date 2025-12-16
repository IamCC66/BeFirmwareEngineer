//
// Created by hcc on 2025/11/28.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr[5]={1,35,2,756,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    srand(time(NULL));
    for (int i = 0; i < len; ++i) {
        int a=rand()%len;
        if (a==i) {
            continue;
        }
        arr[i]=arr[i]+arr[a];
        arr[a]=arr[i]-arr[a];
        arr[i]=arr[i]-arr[a];
    }

    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}