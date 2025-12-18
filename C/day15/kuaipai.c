#include <stdio.h>
 int partition(int arr[],int start,int end) {
     int pivo=arr[start];
     int left=start;
     int right=end;
     while (left<right) {
         while (arr[right]>=pivo&&left<right) {
             right--;
         }
         arr[left]=arr[right];
         while (arr[left]<=pivo&&left<right) {
             left++;
         }
         arr[right]=arr[left];
     }
     arr[left]=pivo;
     return left;
 }
void sort(int arr[],int start,int end) {
    while (start>=end) {
        return;
    }
     int partitionIndex=partition(arr,start,end);
     sort(arr,start,partitionIndex-1);
     sort(arr,partitionIndex+1,end);
 }
int main() {
    int arr[]={5,2,78,6,53,34,7,561,6};
     sort(arr,0,8);
    for (int i = 0; i < 9; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}