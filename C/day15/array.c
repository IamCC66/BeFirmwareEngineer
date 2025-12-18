#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    size_t size;
    size_t length;
}DynamicArray;
//初始化动态数组
void initDynamicArray(DynamicArray *array,size_t capacity) {
    array->data  = malloc(capacity*sizeof(int));
    array->size=0;
    array->length=capacity;
}
//释放动态数组内存
void destroyDynamicArray(DynamicArray *array) {
    free(array->data);
    array->size=0;
    array->length=0;
}
//调整动态数组内存大小
void resizeDynamicArray(DynamicArray *array) {
    array->data=realloc(array->data,array->length*2*sizeof(int));
    array->length=array->length*2;
}
//获取动态数组长度（元素个数）
int getLength(DynamicArray *array) {
    return array->size;
}
//在指定位置插入新元素
void insertAt(DynamicArray *array,size_t index,int element) {
    if (index>array->size) {
        return;
    }
    if (index==array->size) {
        if (array->length==array->size) {
            resizeDynamicArray(array);
        }
        array->data[array->size]=element;
        array->size++;
        return;
    }
    if (array->length==array->size) {
        resizeDynamicArray(array);
    }
    for (size_t i = array->size; i >index; --i) {
        array->data[i]=array->data[i-1];
    }
    array->data[index]=element;
    array->size++;
}
//在末尾插入新元素
void insertAtEnd(DynamicArray *array,int element) {
    insertAt(array,array->size,element);
}
//删除指定位置的元素并返回被删除的元素
//删除末尾的元素并返回被删除的元素
//打印数组
void printArray(DynamicArray *array) {
    for (int i = 0; i < array->size; ++i) {
        printf("%d ", array->data[i]);
    }
    printf("\n");
}
int main() {
    DynamicArray array;
    initDynamicArray(&array,10);
    printf("创建数组，容量为10\n");
    // resizeDynamicArray(&array);
    // printf("扩容数组，现在数组容量为：%zu\n",array.length);
    insertAtEnd(&array,1);
    insertAtEnd(&array,2);
    insertAtEnd(&array,3);
    insertAtEnd(&array,4);
    insertAtEnd(&array,5);
    insertAt(&array,1,6);
    printf("打印数组：");
    printArray(&array);
    destroyDynamicArray(&array);
    printf("销毁数组\n");
    return 0;
}