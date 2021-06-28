#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


// 关机
//int main() {
//	// shutdown -s -t 60
//	// shutdown -a
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("电脑在1分钟后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}

// goto语句;
//int main() {
//
//again:
//	printf("helloworld\n");
//	goto again;
//	return 0;
//}

// 猜数字游戏;
//void menu() {
//	printf("****************************\n");
//	printf("*****1.play game; 0. exit; *\n");
//	printf("****************************\n");
//}
//void game() {
//	printf("猜数字\n");
//	int guess = 0;
//	// 1. 生成随机数;
//	// 2. 猜数字;
//	int ret = rand()%100+1; // 1-100
//	//printf("%d\n", ret);
//	while (1) {
//		printf("请猜数字: ");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了");
//		}
//		else {
//			printf("恭喜你\n");
//			break;
//		}
//	}
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	do {
//		menu();
//		scanf("%d", &input);
//		switch (input) {
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}


// 乘法口诀
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d * %d = %2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 找到最大值;
//int main() {
//	int arr[] = { 1,2,3,4,5,600,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// 1/1-1/2+1/3-1/4..100;
//int main() {
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++) {
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


// 1-100找出带9的数字;
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 9)  // 说明个位数是9;
//			count++;
//		if (i / 10 == 9)  //说明10位数是9;
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++) {
//		if (b >= 20)
//			break;
//		if (b % 3 == 1) {
//			printf("%d\n", b);
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// 打印素数
//int main() {
//	for (int i = 101; i <= 200; i+=2) {
//		//素数：除了1和它本身外，不能被其它数据整除。
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j>sqrt(i)) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
// }

// 打印闰年;
//int main() {
//
//	int count =0;
//	for (int year = 1000; year <= 2000; year++) {
//		// 1. 被4整除并且不能被100整除的是闰年；
//		// 2. 能被400整除的也是闰年;
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("闰年: %d\n", year);
//			count++;
//		}
//	}
//	printf("\ncount: %d\n", count);
//	return 0;
//}

// 求最大公约数
//int main() {
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//
//	while (r =m % n) {
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

// 输入密码三次
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else {
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3) {
//		printf("三次密码错误，退出程序");
//	}
//	return 0;
//}


// 打印欢迎;
//int main() {
//	char arr1[] = "welcome to kid !!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(200);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



// 二分查找算法;
//int main() {
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			printf("find 下标: %d  值为: %d\n", mid, arr[mid]);
//			break;
//		}
//	}
//
//	if (left > right) 
//	{ 
//		printf("找不到了\n"); 
//	}
//	return 0;
//}


// 遍历数组
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}



// 阶乘：(1*1) + (1*2) + (1*2*3) = sum
// 1 + 2 + 6
//int main() {
//	int ret = 1;
//	int sum =0;
//
//	for (int n = 1; n <= 3; n++) {
//		// 1. ret: 1 = 1 * 1
//		//    sum: 1 = 0 + 1
//		
//		// 2. ret: 2 = 1 * 2
//		//    sum: 3 = 1 + 2
//		
//		// 3. ret: 6 = 2 * 3
//		//	  sum: 9 = 3 + 6
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//计算N的阶乘
//int main() {
//	int ret = 1;
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}



//int main() {
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} 	
//	while (i <= 10);
//
//	return 0;
//}
//

// k = 0为假，不进循环， 0次。
//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) {
//		k++;
//		printf("xxx");
//	}
//	return 0;
//}

//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("%d %d\n", x, y);
//	}
//}


// 不要在for 循环体内改变循环变量; 防止循环失去控制;
//int main() {
//	for (int i = 1; i < 10; i++) {
//		if (i = 5)  // 这是赋值, 不是判断
//			printf("aa %d\n", i);
//		printf("bb");
//	}
//	return 0;
//}

// 除了5都会打印，不会死循环， 如果换成while的话，会出现死循环;
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}



// 第一次循环，就把j = 9了，第二次之后循环成立了。
//int main() {
//	int i = 0;
//	int j = 0;  
//	for (; i < 10; i++)  
//	{
//		for (; j < 10; j++) { 
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

// 死循环; 
//int main() {
//	for (;;) {
//		printf("haha\n");
//	}
//	return 0;
//}

// 只打印ascii < 0 or >9的字符;
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



// 清空输入缓存区的问题
//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	
//	printf("请输入密码:");
//	scanf("%s", &password);
//
//	// 将输入缓存区清空
//	while ((ch = getchar()) != '\n') {
//		;
//	}
//
//	printf("请确认（Y/N）");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("放弃确认\n");
//	}
//	return 0;
//}


// EOF = ctrl + z
//int main() {
	// EOF end of file: -1  = ctrl + z
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//return 0;
//}

//int main() {
//
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//
//		if (i == 5) 
//			continue;
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day) {
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//		default:
//			printf("超出范围(1-7).\n");
//			break;
//	}
//	return 0;
//}

//int main() {
//
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("未成\n");
//	else if (age > 18 && age < 40)
//		printf("青年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main() {
//	// for loop
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 0){
//			printf("偶数: %d\n", i);
//		}
//		else {
//			printf("奇数: %d\n", i);
//		}
//	} 
//
//	// while loop
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 0) {
//			printf("偶数: %d\n", i);
//		}
//		else {
//			printf("奇数: %d\n", i);
//		}
//		i++;
//	}
//	// 没有判断
//	int x = 1;
//	while (x <= 100)
//	{
//		printf("%d\n", x);
//		x += 2;
//	}
//	return 0;
//}