#include <stdio.h>
typedef struct {
    int id;
    char name[20];
    int age;
    double score;
}Student;

int main() {
    Student s[5];
    s[0] = (Student){
        .name = "Zhang San",
        .id = 101,
        .score = 92.5,
        .age = 18
    };
    s[1] = (Student){
        .name = "Zhang San",
        .id = 102,
        .score = 72.5,
        .age = 18
    };
    s[2] = (Student){
        .name = "Zhang San",
        .id = 103,
        .score = 62.5,
        .age = 18
    };
    s[3] = (Student){
        .name = "Zhang San",
        .id = 104,
        .score = 23.5,
        .age = 18
    };
    s[4] = (Student){
        .name = "Zhang San",
        .id = 105,
        .score = 9.5,
        .age = 18
    };
    /*for (int i = 0; i < 5; ++i) {
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
    }*/

    for (int i = 0; i < 5; ++i) {
        for (int j=0;j<4-i;j++) {
            if (s[j].score>s[j+1].score) {
                Student temp=*(s+j);
                *(s+j)=*(s+j+1);
                *(s+j+1)=temp;
            }
        }
    }
    for (int i = 0; i < 5; ++i) {

        printf("%d %s %d %.1lf\n",s[i].id,s[i].name,s[i].age,s[i].score );
    }
    return 0;
}