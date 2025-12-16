#include <stdio.h>
typedef struct {
    int id;
    double score;
}ids;
int main() {
    ids is[6];
    is[0].id=1;
    is[1].id=2;
    is[2].id=3;
    is[3].id=4;
    is[4].id=5;
    is[0].score=8.3;
    is[1].score=2.3;
    is[2].score=5.3;
    is[3].score=4.3;
    is[4].score=7.3;
    for (int i = 0; i < 5; ++i) {
        for (int j=0;j<4-i;j++) {
            if (is[i].score>is[i+1].score) {
                is[5]=is[i];
                is[i]=is[i+1];
                is[i+1]=is[5];
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ",is[i].id);
    }
    return 0;
}