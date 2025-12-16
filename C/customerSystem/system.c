#include <stdio.h>
#include <string.h>
typedef struct {
    char name[20];
    char sex;
    int age;
    char phone[20];
    char email[50];
}Customer;
Customer c[100];
//记录录入人数
int m=0;
//主菜单
void menu() {
    printf("------------客户信息管理系统------------\n");
    printf("|\t\t\t1 添加客户\t\t\t\t|\n");
    printf("|\t\t\t2 修改客户\t\t\t\t|\n");
    printf("|\t\t\t3 删除客户\t\t\t\t|\n");
    printf("|\t\t\t4 客户列表\t\t\t\t|\n");
    printf("|\t\t\t5 退出\t\t\t\t\t|\n");
    printf("-------------------------------------\n");
    printf("请选择（1-5）:");
}
//添加客户
void add() {
    m++;
    printf("---------------添加客户----------------\n");
    printf("姓名：");
    scanf("%s",c[m-1].name);

    printf("性别（男：m或女：f）：");
    scanf(" %c",&c[m-1].sex);

    printf("年龄：");
    scanf("%d",&c[m-1].age);

    printf("电话：");
    scanf("%s",c[m-1].phone);

    printf("邮箱：");
    scanf("%s",c[m-1].email);

    printf("添加成功\n");
}
//修改客户
void modify() {
    printf("---------------修改客户----------------\n");
    printf("编号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t邮箱\n");
    for (int i=0;i<m;i++) {
        printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\n",i+1,c[i].name,c[i].sex=='m'?"男":"女",c[i].age,c[i].phone,c[i].email);
    }
    printf("输入要修改的用户的编号（输入-1退出）：");
    int n=0;
    char str[50];
    scanf("%d",&n);
    if (n!=-1) {
        printf("姓名(%s)：",c[n-1].name);
        getchar();
        fgets(str,sizeof str,stdin);
        if (*str!='\n') {
            sscanf(str,"%s",c[n-1].name);
        }
        printf("性别（男：m或女：f）：%s",c[n-1].sex=='m'?"男":"女");
        fgets(str,sizeof str,stdin);
        if (*str!='\n') {
            sscanf(str,"%c",&c[n-1].sex);
        }
        printf("年龄(%d):",c[n-1].age);
        fgets(str,sizeof str,stdin);
        if (*str!='\n') {
            sscanf(str,"%d",&c[n-1].age);
        }
        printf("电话(%s):",c[n-1].phone);

        fgets(str,sizeof str,stdin);
        if (*str!='\n') {
            sscanf(str,"%s",c[n-1].phone);
        }
        printf("邮箱(%s):",c[n-1].email);

        fgets(str,sizeof str,stdin);
        if (*str!='\n') {
            sscanf(str,"%s",c[n-1].email);
        }
        printf("\n修改成功\n");
    }
}
//删除客户
void delete(){
    printf("---------------删除客户----------------\n");
    printf("编号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t邮箱\n");
    for (int i=0;i<m;i++) {
        printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\n",i+1,c[i].name,c[i].sex=='m'?"男":"女",c[i].age,c[i].phone,c[i].email);
    }
    printf("输入要删除的用户的编号（输入-1退出）：");
    int n=0;
    char p='m';
    scanf("%d",&n);
    if (n!=-1) {
        printf("再次确认删除（y/n）：");
        scanf(" %c",&p);
        if (p=='n') {
            printf("取消删除\n");
        }else {
            for (int i = n-1; i <=m-n; ++i) {
                c[i]=c[i+1];
            }
            m--;
            printf("删除成功\n");
        }
    }
}
//客户列表
void query() {
    printf("---------------客户列表----------------\n");
    printf("编号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t邮箱\n");
    for (int i=0;i<m;i++) {
        printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\n",i+1,c[i].name,c[i].sex=='m'?"男":"女",c[i].age,c[i].phone,c[i].email);
    }
}
int main() {
    setbuf(stdout,NULL);
    while (1) {
        menu();
        int n;
        scanf("%d",&n);
        switch (n) {
            case 1:
                add();
                break;
            case 2:
                modify();
                break;
            case 3:
                delete();
                break;
            case 4:
                query();
                break;
            case 5:
                return 0;
            default:
                printf("非法选项\n");
        }
    }
    return 0;
}