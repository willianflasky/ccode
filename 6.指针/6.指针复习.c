#include <stdio.h>

int Add(int x, int y){
    return x+y;
}

int main(){
    // 1. 指针数组
    int* arr[10];
    // 2. 数组指针
    int* (*pa)[10] = &arr;
    // 3. 函数指针
    int (*pAdd)(int, int) = Add;  // &Add也可以;
    // int sum = (*pAdd)(1,2);
    int sum = pAdd(1,2);
    // 4. 函数指针的数组
    int (*pArr[5])(int, int); // 首先是个数组，里面能存5个函数指针;
    // 5. 指向函数指针数组的指针
    int(*(*ppArr)[5])(int,int)=&pArr;  // 首先是个指针，其次是指向函数指针数组，函数指针数组：里面存的是函数指针: int(*)(int,int)

    return 0;
}