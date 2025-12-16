//
// Created by hcc on 2025/11/30.
//


#include <stdio.h>
int peach(int day) {
    if (day<10) {
        return (peach(day+1)+1)*2;
    }
    return 1;
}

int sum(int arr[],int len) {
    if (len==1) {
        return arr[len-1];
    }
    return arr[len-1]+sum(arr,len-1);



}
int main() {
   // printf("%d",peach(1));
    int arr[]={1,2,3,4,5};
    printf("%d",sum(arr,5));
    return 0;
}