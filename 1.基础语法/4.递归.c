#include <stdio.h>
#include <string.h>


// 1.最简单的递归;
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}

/*
	内存：
		栈区：1.局部变量; 2.函数参数;
		堆区：1.动态开辟; 2.malloc calloc;
		静态区：1. 全局变量; 2.static修饰的变量;
*/

// 2.递归打印数字; 输入1234， 打印1，2，3，4
//void print(int n) {
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d ",n);
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



// 3. 递归实现strlen;
//int mystrlen(char ss[]) {
//	//printf("内存地址: %p %d\n", ss, *ss);
//	if (*ss != '\0')
//		return 1 + mystrlen(ss + 1);
//	else
//		return 0;
//}
//
//int main() {
//	char arr[] = "abc";
//	int len = mystrlen(arr); //数组传递的是首元素的内存地址;
//	printf("%d\n", len);
//	return 0;
//}

// 4. 求N的阶乘;
//int fac1(int n) {
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac1(n - 1);
//}
//
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}

// 5. 斐波那契数列
//int fib(int n) {
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//int fib(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}