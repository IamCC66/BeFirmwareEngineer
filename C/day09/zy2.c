#include <stdio.h>
struct Box {
    int lenth;
    int width;
    int high;;
};
 int volume(struct Box *box) {
        return box->lenth * box->width * box->high;
    }
int main() {


    struct Box box1;
    printf("输入长:");
    scanf("%d",&box1.lenth);
    printf("输入宽:");
    scanf("%d",&box1.width);
    printf("输入高:");
    scanf("%d",&box1.high);
    struct Box *p=&box1;

    int v=volume(p);
    printf("%d\n",v );
    return 0;
}