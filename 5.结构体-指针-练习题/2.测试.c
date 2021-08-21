#include <stdio.h>
#include <stdlib.h>

//int main() {
//	// 按位与：a & b  0 and 0 = 0 ;  1 and 0 = 0; 1 and 1 = 1;
//	// 按位或：a | b  有一个是1的就是1;
//	// 按位异或： a ^ b 相同为0， 相异为1;
//	
//
//	// 两个变量交换，不能用第三个变量;
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main() {
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num) {
//		if (num % 2 == 1) {
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("num=%d  count=%d \n", num,count);
//	return 0;
//}

//int main() {
//	//int arr[10] = {0};
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int [10]));
//
//	short s = 0;
//	int a = 10;
//	
//	printf("%d\n", sizeof(s = a + 5)); // sizeof里的表达式不进行运算的;
//	printf("%d\n", s);
//	return 0;
//}

//int main() {
//
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//  ++a 先++再使用; 
//  a++ 先使用后++;

//int main() {
//
//	int a = (int)3.14; //  强制转换;
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//
//	// 函数接入参数是数组的时候：传递的是数组首元素地址，函数默认是指针的方式接收， 32位的系统会用4字节接收， 64位系统会用8字节接收;
//
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//
//	return 0;
//}

//int main() {
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;  // &&:左边为假，右边都不计算了. ||:左为真，后面都不计算了.
//	printf("%d\n", i);
//	printf("%d %d %d %d\n", a, b, c, d); // 
//	return 0;
//}

// 条件操作符
//int main() {
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	// 方法一：
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	// 方法二：
//	max = (a > b ? a : b);
//	return 0;
//}

// 逗号表达式
//int main() {
//	// 最后一个结果是结果 
//	return 0;
//}

// 创建一个结构体类型struct Stu;
//struct Stu
//{
//	// 成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main() {
//	// 创建个对象;
//	struct Stu s1 = { "张三", 20, "20200101" };
//	struct Stu* ps1 = &s1;
//
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//
//	printf("%s\n", ps1->name);
//	printf("%s\n", (*ps1).name);
//	
//	return 0;
//}

// 隐式类型转换;
//int main() {
//	char a = 3; 
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	int  i = 1;
//	int b = 0;
//	b = (++i) + (++i) + (++i);
//	printf("%d\n", b);
//	return 0;
//}