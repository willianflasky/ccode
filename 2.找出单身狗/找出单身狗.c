#include <stdio.h>
#include <time.h>


// 找出单身狗
//int main() {
//	int arr[] = { 1,2,3,4,5,5,7,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//int start = time((time_t*)NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++) {
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗： %d\n", arr[i]);
//		}
//	}
//	return 0;
//}

// 
// 找出单身狗(异或版)
int main() {

	int arr[] = { 1,2,3,4,7,1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (int i = 0; i < sz; i++) {
		ret = ret ^ arr[i];

	}
	printf("单身狗：%d\n", ret);
	return 0;
}