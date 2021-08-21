#include <stdio.h>
#include <stdlib.h>

//int main() {
//	for (int i = 0; i < 100; i++) {
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

// 阶乘
//int main() {
//	// 1!+2!+3! = 1+2+6=9
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		ret = 1;
//		for (int j = 1; j <= i; j++) {
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 越界，死循环
//int main() {
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++) {
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	system("pause");
//	return 0;
//}


// 字符串复制函数 (满分版)
#include <assert.h>
//char* my_strcpy(char* dest,const char* src) {  
//	/*
//		1. while条件中写*dest++ = *src++;
//		2. 后置++;
//		3. 增加assert
//		4. 增加const的意思：*src不能被改变的;
//		5. 返回指针char*;
//	*/
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	// 将src指向的字符串拷贝到dest指向的空间，包含'\0'字符;
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//
//int main() {
//	char arr1[] = "#########";
//	char arr2[] = "hello";
//	int ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

// 求字符串长度函数 (满分版)
int my_strlen(const char* str) {
	int count = 0;
	assert(str != NULL);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

int main() {
	char arr[] = "abcefg";
	int len = my_strlen(arr);
	printf("%d\n", len);
}
