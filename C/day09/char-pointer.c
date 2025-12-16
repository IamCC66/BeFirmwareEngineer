#include <stdio.h>

int main() {
    char c1='a';
    char *c1Ptr=&c1;

    char str[]="hello";
    char *strElePtr=str;
    char *str2="hello";
    printf("%c\n",*c1Ptr );

    char str3[10]="hello";
    char *ptr=str3;
    printf("%p\n",ptr );
    printf("%s\n",ptr );
    ptr="helloworld";
    printf("%s\n",ptr );
}