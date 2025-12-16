#include <stdio.h>

int main() {
    int nums[]={1,2,3,4,5};
    int *ptr=&nums[0];

    printf("%p,%d\n",nums,*nums);//输出：0x16b7cf1f0,1
    printf("%p, %d \n", ptr, *ptr);//输出：0x16b7cf1f0, 1

    if (nums==ptr) {
        printf("相等\n");
    }else {
        printf("不相等\n");
    }
    // 数组名与真正的指针存在差
    // 1. sizeof 运算符返回的是整个数组的大小，而指针返回的是本身的大小
    printf("%zu,%zu",sizeof(nums),sizeof(ptr));//输出：20,8

    return 0;
}