#include <stdio.h>
#include <string.h>
#include <math.h>


// https://www.cplusplus.com/
// https://zh.cppreference.com/w/cpp
//	char arr1[] = "bit";
//	char arr2[] = "#######";
//	strcpy(&arr2, &arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() {
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int getmax(int x, int y) {
//	if (x > y)
//		return x;
//	return y;
//}
//
//// 指针实现变量交换。
//void Swap (int* x, int* y) {
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



// 写函数，打印素数;
//int is_prime(int n) {
//	for (int i = 2; i<=sqrt(n); i++) {
//		if (n % i == 0) {
//			return 0; // 不是素数
//		}
//	}
//	return 1; // 是素数
//}
//
//
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		if (is_prime(i) == 1) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int is_leap_year(int y) {
//	if ((y % y == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	return 0;
//}
//
//int main() {
//	for (int year = 1000; year <= 2000; year++) {
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}


// int arr[]本质是个指针
//int binary_search(int arr[], int k, int sz) {
//	
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 传递过去的数组是首元素的地址;
//	int ret = binary_search(&arr, k, sz);
//	if (ret == -1) {
//		printf("not found!\n");
//	}
//	else {
//		printf("is %d\n", ret);
//	}
//	return 0;
//}


// 函数调用一次加1; 使用指针;
//void add(int* p) {
//	(*p)++;
//
//}
//
//int main() {
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}


// printf返回值是打印字符的个数;
//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


// 函数声明的正常用法;
//#include "add.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}