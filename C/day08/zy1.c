#include <stdio.h>

int main() {
    int arr[5]={10,20,30,40,50};
    int (*p)[5]=&arr;
    //打印第三个元素
    printf("%d\n",(*p)[2]);
    //数组和
    int sum=0;
    for (int i = 0; i < 5; ++i) {
        sum+=(*p)[i];
    }
    printf("%d\n",sum );
    //数组元素*2
    for (int i = 0; i < 5; ++i) {
        (*p)[i]*=2;
        printf("第%d个元素为：%d\n",i+1,(*p)[i]);
    }
    return 0;
}