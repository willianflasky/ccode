#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 冒泡排序、qsort排序

//void bubble_sort(int arr[], sz){
//    for(int i = 0; i < sz - 1; i++)
//    {
//        for(int j = 0; j < sz - 1 - i; j++){
//            if(arr[j] > arr[j+1]){
//                int tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//            }
//        }
//    }
//}

int cmp_int(const void* e1, const void* e2){
    return *(int*)e1 - *(int*)e2;
}

void test1(){
    int arr[10] = {1,3,5,2,4,6,3,5,9,1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // bubble_sort(arr, sz);  // 方法一
    qsort(arr, sz, sizeof(arr[0]), cmp_int); // 方法二

    for(int i = 0; i < sz; i++){
        printf("%d  ", arr[i]);
    }
}

int cmp_float(const void* e1, const void* e2){
    return ((int)(*(float*)e1 - *(float*)e2));
}

void test2(){
    float f[] = {1.0, 9.0, 3.0, 4.0};
    int sz = sizeof(f) /sizeof(f[0]);
    qsort(f, sz, sizeof(f[0]), cmp_float);

    for(int j = 0; j < sz; j++){
        printf("%f ", f[j]);
    }
}
struct Stu {
    char name[20];
    int age;
};
int cmp_stu_by_age(const void* e1, const void* e2){
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;

}
int cmp_stu_by_name(const void* e1, const void* e2){
    // 字符串不能用>,<,=来比较，应该用strcmp;
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3(){
    struct Stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    // 第一个参数: 待排序数组的首元素地址;
    // 第二个参数：待排序数组的元素个数;
    // 第三个参数：待排序数组的元素的大小（单位字节）
    // 第三个参数：是函数指针，比较两个元素的所用函数的地址，这个函数使用者自己实现; 函数两个参数是将要比较的两个元素地址;
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

    for(int j = 0; j < sz; j++){
        printf("%d %s, ", s[j].age, s[j].name);
    }
}

void Swap(char* buf1, char* buf2, int width){
    for(int i = 0; i<width; i++){
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2)){
    for(int i =0; i < sz - 1; i++){
        for (int j = 0; j < sz - 1 - i ; j++){
            if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
            {
                Swap((char*)base + j*width, (char*)base + (j+1)*width, width);
            }
        }
    }
}

void test4(){
    int arr[10] = { 9, 8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    for (int i=0; i < sz; i++){
        printf("%d\n", i);
    }
}

void test5(){
    struct Stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    // bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);

    for(int j = 0; j < sz; j++){
        printf("%d %s, ", s[j].age, s[j].name);
    }
}
int main(){
//    test1();
//    printf("\n");
//    test2();
//    printf("\n");
//    test3();
//    test4();
    test5();
    return 0;
}


// void* 类型的指针，可以接收任意类型的地址;
// void* 类型的指针，不能进行解引用操作;
// void* 也不能+-整数的运算;
