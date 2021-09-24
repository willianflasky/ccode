#include <stdio.h>

// 函数指针
//int Add(int x, int y){
//    int z =0;
//    z = x+y;
//    return z;
//}
//int main(){
//    int a = 10;
//    int b = 20;
//    // &函数名 和 函数名都是函数地址;
//    printf("%p\n", &Add);
//    printf("%p\n", Add);
//    // 函数指针是个地址，是存放函数内存地址的地方;
//    int (*pa)(int,int) = Add;
//    printf("%d\n", (*pa)(200, 100));
//    printf("%d\n", pa(200, 100));  // 函数指针调用的时候，可以不解引用;
//    return 0;
//}

// (*(void (*)())0))()  // 把0强制类型转换成：函数指针，再解引用和调用;

// signal是一个函数声明, signal函数的参数有2个，第一个是int, 第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void;
// signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int,返回类型是void;
// void(*signal(int, void(*)(int)))(int)
// 简化版: typedef void(*myfunc)(int)
//        myfunc signal(int, myfunc)



// 函数指针数组
//int main(){
//    int* arr[5];
//    int (*pa)(int, int) = Add;
//    int(*parr[4])(int, int) = {Add, Sub,Mul, Div}; //函数指针数组;
//
//    for(int i =0; i<4; i++){
//        printf("%d\n", parr[i](2,3));
//    }
//    return 0;
//}

// char* my_strcp(char* dest, const char* src);
// char* (*pf)(char*, const char*) = my_strcp;
// char* (*pfArr[4])(char*, const char*) = {my_strcp, my_strcp, my_strcp, my_strcp};


