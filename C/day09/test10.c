#include <stdio.h>
#include <string.h>
int main() {
    struct Visitor {
        char name[10];
        int age;
    };
    while (1) {
        struct Visitor v;
        printf("请输入名字：");
        scanf("%s",v.name);
        if (!strcmp(v.name,"n")) {
            break;
        }
        printf("请输入年龄：");
        scanf("%d",&v.age);
        if (v.age>18) {
            printf("20元\n");
        }else {
            printf("免费\n");
        }
    }
    return 0;
}