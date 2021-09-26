#include <stdio.h>
#include <string.h>

// 练习题

int main(){
    // 整形数组
//    int a[] = {1,2,3,4};
//    printf("%d\n", sizeof(a));   // 4*4=16
//    printf("%d\n", sizeof(a+0)); // 32bit=4  64bit=8; 因为是首元素地址+0;
//    printf("%d\n", sizeof(*a));  // 首元素地址的解引用就是1， 1的长度就是4;
//    printf("%d\n", sizeof(a+1)); // 4
//    printf("%d\n", sizeof(a[1]));// 4
//    printf("%d\n", sizeof(&a));  // 4/8
//    printf("%d\n", sizeof(*&a));  // 16
//    printf("%d\n", sizeof(&a+1));  // 4/8
//    printf("%d\n", sizeof(&a[0]));  // 4/8
//    printf("%d\n", sizeof(&a[0]+1));  // 4/8

    // 字符数组
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    printf("%d\n", sizeof(arr));  // 6
//    printf("%d\n", sizeof(arr+0)); // 4/8
//    printf("%d\n", sizeof(*arr)); // 1
//    printf("%d\n", sizeof(arr[1])); // 1
//    printf("%d\n", sizeof(&arr)); // 4/8
//    printf("%d\n", sizeof(&arr+1)); // 4/8, 跳过整个数组的地址;
//    printf("%d\n", sizeof(&arr[0]+1)); // 4/8, 第二个元素的内存地址;

//    printf("%d\n", strlen(arr)); // 随机
//    printf("%d\n", strlen(arr+0)); // 随机
//    printf("%d\n", strlen(*arr)); // err; 97
//    printf("%d\n", strlen(arr[1])); // err; 98
    printf("%d\n", strlen(&arr)); // 随机
    printf("%d\n", strlen(&arr+1)); // 随机
    printf("%d\n", strlen(&arr[0]+1)); // 随机

    return 0;
}


/*
 * 数组名是首元素的地址,有两个例外：
 * 1. sizeof(数组名),表示整个数组;
 * 2. &数组名, 表示整数数组;
 *
 * */