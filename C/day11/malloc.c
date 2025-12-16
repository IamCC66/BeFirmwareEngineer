#include <stdio.h>
#include <stdlib.h>
int main() {
    //向堆内存申请10个字节的内存
    size_t size=10;
    void *ptr1=malloc(size);
    int *p=ptr1;
    //如果内存分配失败，值为NULL
    free(p);
    return 0;
}