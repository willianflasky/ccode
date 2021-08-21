#include <stdlib.h>
#include <stdio.h>

// 统计二进制数中有多少个1;
//int count_bit_one( int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}


//int get_diff_bit(int m, int n) {
//	int tmp = m^n;
//	int count = 0;
//	while (tmp) {
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	printf("%d\n",count);
//}
//
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	get_diff_bit(m, n);
//	return 0;
//}
//void print(int m) {
//	printf("奇数位:\n");
//	for (int i = 30; i >= 0; i-=2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n"); 
//	for (int i = 31; i >= 1; i -= 2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main() {
//	int m = 10;
//	print(m);
//	return 0;
//}


// 指针遍历数组;
//void print(int* p, int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,3,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);  //数组名是首元素地址;
//}

// 递归案例
//int fun(int n) {
//	if (n == 5) {
//		return 2;
//	}
//	else {
//		return 2 * fun(n + 1);
//	}
//}
//
//int main() {
//	int ret = fun(2);
//	printf("%d\n", ret);
//	return 0;
//}

//void print_table(int n) {
//	for (int i = 1; i < n; i++) {
//	
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


// reverse反转数组
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	
//	return count;
//}
//
//void reverse_string(char arr[]) {
//	int left = 0;
//	int right = my_strlen(arr) - 1;
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
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


// 反向
//int reverse_string(char* arr) {
//	char tmp = arr[0];		// 1. 第一个字母存到tmp
//	int len = strlen(arr);	// 获取数组长度;
//	arr[0] = arr[len - 1];	// 2. 将尾字母存到首字母位置;
//	arr[len - 1] = '\0';	// 3. 尾部填充\0; 
//	if (strlen(arr + 1) >= 2) {  // 指针+1，前移算下长度， 如果大于2，就自调，重复这个函数的步骤，小于2就结束了。 
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main() {
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


// 实现1729之和
//int DigitSum(unsigned int num) {
//	if (num > 9) {
//		return DigitSum(num / 10) + num % 10;
//	}
//	else {
//		return num;
//	}
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}


// n^k次方 = n * n^(k-1)
//double Pow(int n, int k) {
//	if (k < 0){
//		return (1.0 / (Pow(n, -k)));
//	}
//	else if (k==0){
//		return 1;
//	}
//	else {
//		return n * Pow(n, k - 1);
//	}
//}
//
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}
