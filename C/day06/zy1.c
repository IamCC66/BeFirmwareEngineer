//
// Created by hcc on 2025/11/28.
//


#include <stdio.h>
#include <stdbool.h>
double max(double a,double b) {
    return a>b?a:b;
}

int sum(int a,int b,int c) {
    return a+b+c;
}

bool isPrime(int n) {
    if (n<=1) {
        return 0;
    }
    else if (n==2) {
        return 1;
    }else {
        for (int i=2;i<n;i++) {
            if (n%i==0) {
                return 0;
            }
        }
        return 1;
    }

}

int arrarySum(int arr[],int len) {
    int sum=0;
    for (int i=0;i<len;i++) {
        sum+=arr[i];
    }
    return sum;
}

bool isLeapyear(int year) {
    if (year%4==0&&year%100!=0) {
        return 1;
    }
        return 0;
}

void inversion(int arr[],int len) {
        for (int i=0;i<len/2;i++) {
            arr[i]=arr[i]+arr[len-1-i];
            arr[len-1-i]=arr[i]-arr[len-1-i];
            arr[i]=arr[i]-arr[len-1-i];
        }
}

int search(int arr[],int len,int key) {
    for (int i = 0; i < len; ++i) {
        if (key==arr[i]) {
            return i;
        }
    }
    return -1;
}
int destination[99];
int copy(int source[],int len) {
    for (int i=0;i<len;i++) {
        destination[i]=source[i];
    }
    return len;
}

int main() {
    int source[]={4,1,35,4,5,6};
    int len=sizeof(source)/sizeof(source[0]);

    int n=copy(source,len);
    int len2=sizeof(destination)/sizeof(destination[0]);
    printf("%d\n",n);
    for (int i = 0; i < len2; ++i) {
        printf("%d ",destination[i]);
    }
    /*int arr[]={4,1,35,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int a=search(arr,len,7);
    printf("%d",a);*/

    /*int arr[]={4,1,35,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    inversion(arr,len);
    for (int i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }*/

    /*int year=2024;
    int flag=isLeapyear(year);
    if (flag) {
        printf("闰年");
    }else {
        printf("不是闰年");
    }*/

    /*double a=3.2;
    double b=2.2;
    double c=max(a,b);
    printf("%lf",c);*/

    /*int a=1,b=2,c=3;
    printf("%d",sum(a,b,c));*/

    /*int n;
    while (1) {
        printf("请输入一个数：");
    scanf("%d",&n);
    bool flag=isPrime(n);
    if (flag) {
        printf("质数\n");
    }else {
        printf("不是质数\n");
    }
    }*/

    /*int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("%d",arrarySum(arr,len));*/


    return 0;
}