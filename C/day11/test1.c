#include <stdio.h>
typedef struct {
    char *name;
}S;
int main() {
    S s1={.name = "cc"};
    S s2=s1;
    printf("%s\n", s2.name);
    s2.name="aa";
    printf("%s\n",s2.name );
    printf("%s\n",s1.name );
    return 0;
}