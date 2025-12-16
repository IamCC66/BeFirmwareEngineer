#include <stdio.h>
union SC {
    double score;
    char course[10];
};
struct Person {
    char name[20];
    int num;
    char sex;
    char profession;
    union SC sc;
};

int main() {
    struct Person p1={"孙二娘",501,'f','s',89.5};
    struct Person p2={"cc",9,'m','t',.sc.course="math"};
    return 0;
}