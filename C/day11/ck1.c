#include <stdio.h>
struct Student {
    int id;
};
int main() {
    struct Student s;
    struct Student *p=&s;
    p->id=1;
    printf("%d",s.id);
    return 0;
}