#include <stdio.h>
#include <string.h>
struct Dog {
    char *name;
    int age;
    double weight;
};
char* say(struct Dog d) {
    static char info[100];
    sprintf(info,"小狗的名字是%s 小狗的年龄是%d 小狗的体重是%lf",d.name,d.age,d.weight);
    return info;
}
int main() {
    struct Dog dog={"xiaolan",2,10.1};
    char* str=say(dog);
    printf("%s\n",str );
    return 0;
}