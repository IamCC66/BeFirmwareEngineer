#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p=(int*)malloc(sizeof(int));
    if (p==NULL) { // 判断是否分配成功
        printf("失败");
        return 1;
    }
    *p=20;
    printf("%p\n",p );
    printf("%d\n",*p );
    free(p);

    int *p1=(int*)malloc(5*sizeof(int));
    if (p1==NULL) {
        printf("失败");
        return 1;
    }
    for (int i = 0; i < 5; ++i) {
        p1[i]=i;
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ",p1[i]);
    }
    free(p1);

    return 0;
}