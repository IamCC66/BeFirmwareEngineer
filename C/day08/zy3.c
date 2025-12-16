#include <stdio.h>
int get_avg(int *arr,int len) {
    int sum=0;
    for (int i = 0; i < len; ++i) {
        sum+=*(arr+i);
    }
    return sum/len;
}
int main() {
    int arr[]={1,2,3,4,5};
    printf("avg=%d\n",get_avg(arr,5) );
    return 0;
}