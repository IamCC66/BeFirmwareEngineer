#include <stdio.h>
#include <string.h>

int main() {
    float a=1;
    double b=1;

    printf("%f\n",a );
    printf("%f\n",b );
    printf("%lf\n",b );
    char str[]="hello";
    printf("%zu\n",sizeof(str) );
    printf("%zu\n",strlen(str) );

    return 0;
}