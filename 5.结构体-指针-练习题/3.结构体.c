#include <stdio.h>
#include <stdlib.h>


// 结构是一些值的集合，值是成员变量，他们是不同的类型。

// 结构体
//struct Stu 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3; // s1, s2, s3是三个合局变量;
//
//
//int main() {
//	struct Stu s = {"张三",20, "18400988004","男"};  //局部结构体变量;
//	printf("%d", s.age);
//	return 0;
//}

//struct S 
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main() {
//	char arr[] = "hello tom";
//	struct T t = { "hehe", {10, "A", "world", 3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

/*
	栈区：1.局部变量， 2. 函数的形式参数， 3. 函数调用也开辟空间
	堆区：1. 动态内存分配， 2. malloc/free 3. realloc, 4. calloc
	静态区：1. 全局变更， 2. 静态变量。
*/


// 结构体传参
//typedef struct Stu {
//	char name[20];
//	int age;
//}Stu;
//
//void print1(Stu s) {
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//}
//void print2(Stu* ps) {
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//}
//
//int main() {
//	Stu s = { "tom", 40 };
//	print1(s);
//	print2(&s);
//	return 0;
//}