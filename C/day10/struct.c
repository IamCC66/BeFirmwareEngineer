#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[20];
    int age;
};
int main() {
    struct Student stu1;
    stu1.id=1;
    strcpy(stu1.name,"ccc");
    printf("%d %s\n",stu1.id,stu1.name );
    return 0;
}