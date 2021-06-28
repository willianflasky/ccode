#include <stdio.h>
#include <string.h>

//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main() {
//	// new 一个结构体对象
//	struct Book b1 = { "clang", 55 };
//	printf("book: %s\n", b1.name);
//	printf("price: %d\n", b1.price);
//
//	// 修改结构体的值
//	b1.price = 100;
//	strcpy(b1.name, "c++");   // name是数组, 不是变量，所以要用strcpy。
//	printf("price: %d\n", b1.price);
//	printf("price: %s\n", b1.name);
//
//	// 存指针
//	struct Book* pb = &b1;
//	// 两种指针使用方法
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	
//	return 0;
//}


/*
#define Max 100

int main() 
{
	const int a = 10;
	printf("%d--%d", a, Max);
	return 0;
}
*/

// 枚举
/*

enum Color 
{
	RED,
	YELLOW,
	BLUE
};

int main() {

	enum Color color = BLUE;
	printf("%d\n", color);
	return 0;
}

*/

/*
	1. 字面常量
	2. const常变量
	3. #define常量
	4. 枚举常量
*/

// 字符串

/*
int main() {
	// 字符串的结束标志: \0 = 0
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', '\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
*/

//int main() {
//
//	printf("%c\n", '\132');
//	return 0;
//}

//int main() {
//	int input = 0;
//	printf("你要好好学习吗? :> [1/0]");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("good offer\n");
//	else
//		printf("sale apple\n");
//	return 0;
//}

//int main() {
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("敲一行代码, %d\n", line);
//		line++;
//	}
//
//	if (line <= 20000)
//		printf("good offer!");
//	else
//		printf("sale apple!");
//	return 0;
//}

//int Add(int x, int y) 
//{
//	int z = x + y;
//		return z;
//}
//
//int main() {
//	int x = 10;
//	int y = 20;
//	int sum = 0;
//
//	sum = Add(x, y);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int cnt = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i<cnt; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	int a = 5 % 2;
//	printf("%d\n", a);
//	int b = 1;
//	int c = b << 3;
//	printf("%d\n", c);
//	return 0;
//}


//int main() {
//	int a = (int)3.14;
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//int main() {
//	//unsigned int a = -10;
//	typedef unsigned int uint;
//	uint num = 20;
//	printf("%d\n", num);
//	return 0;
//}


//void test() {
//	static int a = 1; // 1. static让局部变量生命周期变长;  2. 让全局变量的作用域变成文件内部使用; 3. 让函数变成文件内部使用;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main() {
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main() {
//	extern int g;
//	printf("%d\n", g);
//	return 0;
//}

//#define max(x, y) (x>y?x:y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int m = max(a, b);
//	printf("%d\n",m);
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	int* p = &a;
//	printf("%p\n",&a);
//	printf("%p\n",p);
//
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main() {
//	int  ch = 10;
//	int* p=&ch;
//	printf("%d\n", sizeof ch);
//	printf("%d\n", sizeof p);
//	return 0;
//}

