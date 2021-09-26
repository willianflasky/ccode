#include <stdio.h>
#include <string.h>

int main() {
	//    char arr[] = "abcdef";
	//
	//    //    printf("%d\n", strlen(arr));  //6个字节;
	//    //    printf("%d\n", strlen(arr+0));  //6个字节;
	//    //    printf("%d\n", strlen(*arr));  // a-->97-->97当成内存地址了，非法访问, error;
	//    //    printf("%d\n", strlen(arr[1])); // b --> 98 --> 98当成内存地址了，非法访问, error;
	//    //    printf("%d\n", strlen(&arr)); // 6; have warning;
	//    //    printf("%d\n", strlen(&arr+1)); // 随机值;
	//    //    printf("%d\n", strlen(&arr[0]+1)); // 5;
	//
	//
	//    //    printf("%d\n", sizeof(arr)); // sizeof(arr)计算是数组的大小，所以是7, 尾部有个\0;
	//    //    printf("%d\n", sizeof(arr+0));  // 4/8 首元素地址;
	//    //    printf("%d\n", sizeof(*arr));  // a是1字节;
	//    //    printf("%d\n", sizeof(arr[1])); // 1;
	//    //    printf("%d\n", sizeof(&arr)); // 4/8
	//    //    printf("%d\n", sizeof(&arr+1)); // 4/8
	//    //    printf("%d\n", sizeof(&arr[0]+1)); // 4/8
	//
	//
	//    //    char* p = "abcdef";
	//    //
	//    //    printf("%d\n", strlen(p)); // 6;
	//    //    printf("%d\n", strlen(p+1)); // 5;
	//    //    printf("%d\n", strlen(*p)); // err;
	//    //    printf("%d\n", strlen(p[0])); // err;
	//    //    printf("%d\n", strlen(&p)); // 随机值;
	//    //    printf("%d\n", strlen(&p+1)); // 随机值;
	//    //    printf("%d\n", strlen(&p[5]+1)); // 5;
	//
	//    //    printf("%d\n", sizeof(p)); // 4/8 a的内存地址;
	//    //    printf("%d\n", sizeof(p+1)); // 4/8 b的内存地址;
	//    //    printf("%d\n", sizeof(*p)); // 1;
	//    //    printf("%d\n", sizeof(p[0])); // a, 1;
	//    //    printf("%d\n", sizeof(&p));  // 4/8
	//    //    printf("%d\n", sizeof(&p+1));  // 4/8
	//    //    printf("%d\n", sizeof(&p[0]+1);



	int a[3][4] = {0};
    printf("%d\n", sizeof(a)); //
    return 0;
}


