#include <stdio.h>

int main() {
    int nums[3][4]={10,20,30,40,100,200,300,400,1000,2000,3000,4000};
    int (*ptr6)[4]=nums;
    printf("%d\n",**ptr6);

    int* ptr=nums;
    for (int i = 0; i < 3; ++i) {
        for (int i = 0; i < 4; ++i) {
            printf("%d ",*ptr );
            ptr++;
        }
        printf("\n" );
    }
    printf("\n" );

    int(*ptr2)[3][4]=&nums;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ",(*ptr2)[i][j] );
        }
        printf("\n" );
    }
    printf("\n" );

    int* ptr3=nums[1];
    for (int i = 0; i < 4; ++i) {
        printf("%d ",*ptr3 );
        ptr3++;
    }
    printf("\n\n");

    int (*ptr4)[4]=&nums[1];
    for (int i = 0; i < 4; ++i) {
        printf("%d ",(*ptr4)[i] );
    }
    printf("\n\n");

    int *ptr5=&nums[1][1];
    printf("%d\n",*ptr5 );
    return 0;
}