//
// Created by willian on 2021/9/16.
//

#include <stdio.h>


// 一维数组
//int main(){
//    // 1. 一维数组传参：
//    int arr[10] = {0};
//    test(arr);
//    // void test(int arr[]){};
//    // void test(int arr[10]){};
//    // void test(int *arr){};
//
//    // 2. 一维数组传参：
//    int *arr2[20] = {0};
//    test2(arr2);
//    // void test2(int *arr[20]){};
//    // void test2(int **arr){};
//
//    return 0;
//}

// 二维数组传参
//int main(){
//    int arr[3][5] = {0};
//    // test(arr);
//    // void test(int arr[3][5]){};  // 只能省略行，不能省略列;
//    // void test(int (*arr)[5]){};  // 指针，是指向数组的指针;
//
//    return 0;
//}

// 一级指针传参
//void test1(int *p){}
//int main(){
//    int a = 10;
//    int* pa = &a;
//    test1(&a);
//    test1(pa);
//    return 0;
//}

// 二级指针传参
//void test1(int** ptr){}
//int main(){
//    int n = 10;
//    int* p = &n;
//    int** pp = &p;
//    test1(pp);
//    test1(&p);
//    return 0;
//    /*
//    二级指针传参：
//        1. 可以接受指针的地址； &p
//        2. 可以接受存储指针的指针； pp
//        3. 可以接受存放指针的数据中的元素;
//
//    */
//}

