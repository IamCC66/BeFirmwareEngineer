#include <stdio.h>
#include <stdlib.h>
int main() {
    //动态申请数组空间（类型double，长度5）
    double *ptr=malloc(5*sizeof(double));





    free(ptr);
    return 0;
}