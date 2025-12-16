#include <stdio.h>
#include <string.h>
char *strlong(char *str1,char *str2) {
    return strlen(str1)>strlen(str2)?str1:str2;
}
int main() {
    char str1[50];
    char *ptr1=str1;
    char str2[50];
    printf("请输入第一个字符串：");
    scanf("%s",str1);
    printf("\n请输入第二个字符串：");
    scanf("%s",str2);
    char *str3=strlong(ptr1,str2);
    printf("%s\n",str3 );
    return 0;
}