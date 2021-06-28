#include <stdio.h>


//int main() {
//
//	// 创建数组;
//	//int arr[10] = {0}; // 不完全初始化，剩下的元素默认是0;
//	//int arr1 = 0;
//	//char ch = "A";
//	//char arr2[10] = { 'a','b' };
//	//char arr3[10] = "abc";
//	//char arr4[] = "abcdef";
//	//printf("%d\n", sizeof(ch));
//	//printf("%d\n", sizeof(arr1));
//	//printf("%d\n", sizeof(arr4));
//	//printf("%d\n", strlen(arr4));
//
//	char arr1[] = "abc";   // 尾部有 \0
//	char arr2[] = { 'a', 'b', 'c' }; // 尾部没有\0
//	printf("%d\n", sizeof(arr1)); // 4字节
//	printf("%d\n", sizeof(arr2)); // 3字节
//	printf("%d\n", strlen(arr1)); // len=3,只求\0之前的数字;
//	printf("%d\n", strlen(arr2)); // len=大数字，没有\0原因;
//	return 0;
//
//	/*
//	
//	strlen and sizeof区别：
//		1. strlen只能求字符串的长度。
//		2. sizeof计算变量、数组、类型的大小，单位是字节。
//
//	*/
//}

// 一维数组
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++) {
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}


// 二维数组;
//int main() {
//	int arr[][4] = { {1,2,3,4}, {5,6,7,8} };
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 4; j++){
//			printf("arr[%d][%d] = %p ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 冒泡算法
//void bubble_sort(int arr[], int sz) {
//	for (int i = 0; i < sz; i++) {
//		for (int j = 0; j < (sz - 1 - i) ; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void bubble_sort_tune(int arr[], int sz) {
//	for (int i = 0; i < sz; i++) {
//		int flag = 1;  //假设是有序的
//		for (int j = 0; j < (sz - 1 - i); j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //有过交换，就不是完全有序的;
//			}
//		}
//		if (flag == 1){  // 说明是有序的，不需要再排序了，直接跳出;
//			break;
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,1,2,8,6,4,3,7,10,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort_tune(arr, sz); // 数组arr是传的首元素地址;&arr[0]
//
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 数组名就是首元素地址; 但是有两个例外
// 1.sizeof(arr), sizeof是计算整个数组的大小，单位是字节。
// 2.&arr此时是代表的整个数组名字;

int main() {
	int arr[] = { 9,1,2,8,6,4,3,7,10,0 };
	printf("%p\n", arr);  // 首元素地址
	printf("%p\n", &arr[0]); // 首元素地址
	printf("%d\n", *arr);  // 首元素地址
	printf("%d\n", &arr); // 整个数组的地址;

	return 0;
}