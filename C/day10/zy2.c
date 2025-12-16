#include <stdio.h>
typedef struct {
    int id;
    char name[20];
    int age;
    double score;
}Student;
typedef struct {
    int id;
    double score;
}ids;
int main() {
    Student s[5];
    ids is[6];
    for (int i = 0; i < 5; ++i) {
        is[i].id=i;
        printf("输入第%d个人的信息\n",i+1);
        printf("学号：");
        scanf("%d",&s[i].id);
        getchar();
        printf("姓名：");
        scanf("%s",s[i].name);
        printf("年龄：");
        scanf("%d",&s[i].age);
        printf("分数：");
        scanf("%lf",&s[i].score);
        is[i].score=s[i].score;
    }
    //排序 1,2,3,4,5
    /*for (int i = 0; i < 5; ++i) {
        for (int j=0;j<4-i;j++) {
            if (is[j].score>is[j+1].score) {
                is[5]=is[j];
                is[j]=is[j+1];
                is[j+1]=is[5];
            }
        }
    }*/

    for (int i = 0; i < 5; ++i) {
        for (int j=0;j<4-i;j++) {
            if (is[j].score>is[j+1].score) {
                is[5]=is[j];
                is[j]=is[j+1];
                is[j+1]=is[5];
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        int index=is[i].id;
        printf("%d %s %d %.1lf\n",s[index].id,s[index].name,s[index].age,s[index].score );
    }
    return 0;
}