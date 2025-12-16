//
// Created by hcc on 2025/12/1.
//


#include <stdio.h>

int main() {
    //创建short数组
    short nums[]={1,2,3,4,5};
    //定义数组长度
    const int LEN=5;
    // 利用指针自增遍历数组元素
    // 创建指针并指向数组第一个元素的地址
    short *pointer=&nums[0];
    for (int i=0;i<LEN;i++) {
        printf("元素索引：%d, 元素地址：%p, 元素值：%d \n", i, pointer, *pointer);
        pointer++;
    }
    // 利用指针自减再次遍历数组
    // 此时指针超出数组界限，需先自减一次
    for (int i = LEN-1; i>=0; --i) {
        pointer--;
        printf("元素索引：%d, 元素地址：%p, 元素值：%d \n", i, pointer, *pointer);
    }
    return 0;
}