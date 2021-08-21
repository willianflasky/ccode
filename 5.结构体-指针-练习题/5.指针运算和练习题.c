#include <stdio.h>

// 指针运算
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr; // 数组名字就是首元素地址;
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", *p);
//		// p = p + 1;
//		p++;
//	}
//	return 0;
//}

// 指针减指针 
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[9] - arr[0]);  // 9
//	return 0;
//}



// my strlen 
//int my_strlen(char* str) {
//	// str是数组最元素地址
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//int main() {
//
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


// 不推荐
//int main() {
//	float values[5];
//	float* vp;
//	for (vp = &values[5 - 1]; vp >= &values[0]; vp--) {
//		*vp = 0;
//	}
//	return 0;
//}

//int main() {
//	float values[5];
//	float* vp;
//	for (vp = &values[5]; vp > &values[0];) {
//		--vp; // 先减再使用
//		*vp = 0;
//		printf("%d\n", *vp);
//	}
//	return 0;
//}


// 证明数组名==首元素地址指针==&arr[0]
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr + 1);  // 首元素地址;
//	printf("%p\n", &arr + 1); //整个数据的地址;
//	printf("%p\n", &arr[0]);  // 首元素地址;
//
//	// 以下这两种方式代表是整个数组的地址: 
//	// &arr
//	// sizeof(arr)
//	return 0;
//}

// 下标和指针都可以访问数组数据
//int main() {
//
//	int arr[10] = {0};
//	int* p = arr;
//	for (int i = 0; i < 10; i++) {
//		printf("值: %d  指针地址(计算): %p   指针地址(下标): %p\n", *(p + i), p + i, &arr[i]);
//	}
//	return 0;
//}

// 二级指针
//int main() {
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;  // 二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}

// 指针数组
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = {&a, &b, &c};  // 指针数组：强调是数组，里面存的都是指针;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main() {
//	char a[] = "hello bit";
//	printf("%d %d \n", sizeof(a), strlen(a));
//
//	char c[] = "abcdef";
//	char d[] = { 'a', 'b', 'c', 'd','e','f' };
//	printf("%d %d \n", sizeof(c), strlen(c));
//	printf("%d %d \n", sizeof(d), strlen(d));
//}


// 练习题
//void Init(int arr[], int sz) {
//	for (int i = 0; i < sz; i++) {
//		arr[i] = i;
//	}
//}
//
//void Print(int arr[], int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

// 两个数组数据调换
//int main() {
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 7,8,9,0 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++) {
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr1[i]);	
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//  答案: 0,0,3,4,5
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	for (int i = 0; i < 4; i++) {
//		*(p + i) = 0;
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// 答案: 11223300
//int main() {
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


// 
//int i;  // 全局变量，不初始化，默认是0;
//int main() {
//	i--;
//	if (i > sizeof(i)) {  // sizeof是个无符号数， i是-1，需要换成无符号数来对比，此时i是个很大的数字来对比;
//		printf(">\n");
//		printf("%d\n", i);
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}


//int main() {
//	int a, b, c;
//	a = 5; 
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}