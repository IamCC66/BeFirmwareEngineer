#include <stdio.h>
#include <stdlib.h>

int main() {
    int len=5;
    int *ptr=calloc(len,sizeof(int));
    if (ptr==NULL) {
        return 1;
    }
    for (int i = 0; i < len; ++i) {
        printf("%d ",ptr[i] );
    }
    free(ptr);
    return 0;
}
