#include <stdio.h>


// 1. 指向函数指针数组的指针
//int Add(int x, int y){
//    return x + y;
//}
//
//int main(){
//    int arr[10] = {0};
//    int (*p)[10] = &arr;
//
//    int (*pfarr[4])(int, int);  // 存放函数指针的数组;
//    // 指向函数指针数组的指针
//    int (*(*ppfarr)[4])(int, int) = &pfarr;  // ppfarr是一个数组指针， 指针指向的数组有4个元素,
//    // 指向的数组的每个元素的类型是一个函数指针: int(*)(int,int);
//    return 0;
//}

// 2. 回调函数
int print(char *str){
    printf("hehe:%s\n", str);
}
void test(void (*p)(char*)){
    printf("test\n");
    (*p)("bit");
}
int main(){
    test(print);
    return 0;
}