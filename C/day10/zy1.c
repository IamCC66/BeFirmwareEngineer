#include <stdio.h>
typedef union {
    double score;
    char course[20];
}score_course;
typedef struct {
    char name[10];
    int id;
    char gender;
    char profession;
    score_course sc;
}Person;
int main() {
    Person p[4];
    for (int i = 0; i < 4; ++i) {
        printf("输入第%d个人的信息\n",i+1);
        printf("名字：");
        scanf("%s",p[i].name);
        printf("ID：");
        scanf("%d",&p[i].id);
        getchar();
        printf("性别（女生输入f，男生输入m）：");
        scanf("%c",&p[i].gender);
        getchar();
        printf("职业（老师输入t，学生输入s）：");
        scanf("%c",&p[i].profession);
        if (p[i].profession=='t') {
            printf("教学科目：");
            scanf("%s",p[i].sc.course);
        }else {
            printf("分数：");
            scanf("%lf",&p[i].sc.score);
        }
    }
    printf("Name\tId\tGender\tProfession\tScore/Course\n");
    for (int j = 0; j < 4; ++j) {
        printf("%s\t%d\t%s\t%s\t",p[j].name,p[j].id,p[j].gender=='f'?"女":"男",p[j].profession=='t'?"老师":"学生");
        if (p[j].profession=='t') {
            printf("\t%s\n",p[j].sc.course );
        }else {
            printf("\t%.2lf\n",p[j].sc.score );
        }
    }
    return 0;
}