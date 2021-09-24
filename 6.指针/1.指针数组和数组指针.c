#include <stdio.h>

/*
    1. 指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
    2. 指针的大小是固定的4/8个字节（32、64平台）
    3. 指针是有类型，指针的类型闷在定了指针的+-整数步长，指针解引用操作的时候的权限。
    4. 指针的运算。
*/

//void test(int arr[]){
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    printf("%d\n", sz);
//}
//
//int main(){
//    int arr[10] = { 0 };
//    test(arr);
//    return 0;
//}

//int main(){
//    char ch = 'w';
//    char* pc = &ch;
//    return 0;
//}

//int main(){
//    char arr[] = "abcdef";
//    char* pc = arr;
//    printf("%s\n", arr);
//    printf("%s\n", pc);
//
//    return 0;
//}

//int main(){
//    const char* p = "abcdef";   // 将a的地址存到指针中; 加const不能修改;
//    printf("%c\n", *p);   // 所以是a;
//    printf("%s\n", p);
//    return 0;
//}

//int main(){
//    char arr1[] = "abcdef";
//    char arr2[] = "abcdef";
//    char* p1 = "abcdef";   // 常量字符串
//    char* p2 = "abcdef";   // 常量字符串 两个地址地址是一样的;
//
//
//    //if (arr1 == arr2) {
//    if (p1 == p2) {
//        printf("ok\n");
//    }else{
//        printf("fail\n");
//    }
//}

// 指针数组: 是数组
//int main(){
//    int arr[10] = {0 };
//    char ch[5] = {0};
//    int* parr[4];
//    char* pch[5];
//    return 0;
//}

//int main(){
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int d = 40;
//    int* arr[4] = {&a, &b, &c, &d};
//
//    for(int i =0; i<4; i++){
//        printf("%d  ", *(arr[i]));
//    }
//}

//int main(){
//    int arr1[] = {1,2,3,4,5};
//    int arr2[] = {1,2,3,4,6};
//    int arr3[] = {1,2,3,4,7};
//    int* parr[] = {arr1, arr2, arr3};
//
//    for(int i = 0; i < 3; i++){
//        for(int j = 0;j < 5; j++){
//            printf("%d ", *(parr[i] + j));
//        }
//        printf("\n");
//    }
//    return 0;
//}

// 数组指针：是指针,是来存放数组地址的指针;
//int main(){
//    // int* p = NULL;    // 整形指针:
//    // char* pc = NULL;  // 数组指针:
//
//    // int arr[10] = { 0 };
//    // arr 首元素地址;
//    // &arr[0] 首元素地址;
//    // &arr 数组的地址;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int (*p)[10] = &arr;  // 数组指针
//
//    return 0;
//}

//int main(){
//    char* arr[5];
//    char* (*pa)[5] = &arr;
//
//    int arr2[10] = {0};
//    int (*pa2)[10] = &arr2;
//
//    return 0;
//}

//void print2(int (*p)[5], int x, int y){
//    for(int i = 0; i<x; i++){
//        for(int j= 0; j<y; j++){
//            printf("%d ", p[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main(){
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int (*pa)[10] = &arr;
//    for (int i = 0; i < 10; i++){
//        printf("%d ", (*pa)[i]);
//    }
//    int arr[3][5] = {{1,2,3,4,5}, {11,12,13,14,15}, {21,22,23,24,25}};
//    print2(arr, 3,5);
//    return 0;
//}

/*
    1. int arr[5];               // arr是一个5个元素的整形数组;
    2. int* parr1[10];           // parr1是一个数组, 数组有10个元素，每个元素的类型是int*, parr1是个指针数组;
    3. int (*parr2)[10];         // parr2是一个指针，该指针指向一个数组，数组有10个元素，每个元素类型是int, parr2是数据指针;
    4. int (*parr3[10])[5];      // paar3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int;
*/

//int main(){
//    // 1. 字符指针
//    char ch = 'w';
//    char* p = &ch;
//    const char* p2 = "abcdefg";  // p2中存第是a的内存地址, 常量字符串，最合理是加const，不可修改;
//
//    // 2. 指针数组：是个数组，存放指针;
//    int* arr[10];
//    char* ch[5];
//
//    // 3. 数组指针
//    int *p3;  // 整形指针
//    char *p4; // 字符指针
//
//    int arr2[5];  // 这一个整形数组
//    int (*pa)[5] = &arr2;  // pa首先是个指针：取出数组arr2的地址存放到pa, pa就是一个数组指针，即存放数组内存地址的指针;
//                           // pa是个指针, 存放5个元素的数组内存地址,元素是int类型;
//                           // pa是一个指针，指向一个数组的内存地址，数据有5个元素，元素是int类型;
//
//    // 终级：parr3[10]数组中存放的是数组指针;
//    int (*parr3[10])[5];  // parr3是个数组, 可以10个元素; 里面存的是5个元素的数组指针，每个元素是int;
//    return 0;
//}