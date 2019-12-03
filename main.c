#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
////1.实现一个函数，可以左旋字符串中的k个字符。 
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//char* ZuoXuan(char *p, int n)
//{
//	int len = strlen(p) - 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; ++i)
//	{
//		char tmp = p[0];//创建一个临时变量并把第一个字符赋值到tmp中
//		for (j = 0; j < len; ++j)
//		{
//			p[j] = p[j + 1];//字符依次前进一个位置
//		}
//		p[len] = tmp;//将临时变量赋值到最后一个位置
//	}
//	return p;
//}
//
//int main()
//{
//	int k = 0;
//	char a[] = "ABCDEF";
//	printf("字符为%s\n", a);
//	printf("请输入左旋几个字符？(输入的数字小于6)\n");
//	scanf("%d", &k);
//	ZuoXuan(a, k);
//	printf("%s\n", a);
//	return 0;
//}




////.2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
//
//int isRotate(char* s1, char* s2) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	char* s;
//	int i;
//	for (i = 0; i <= len1; ++i) {
//		s = s1;
//		LeftRotate(s, i);
//		if (strcmp(s, s2) == 0) {
//			return 1;
//		}
//		s = s1;
//		RightRotate(s, i);
//		if (strcmp(s, s2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	if (isRotate(s1, s2) == 1) {
//		printf("是旋转之后的\n");
//	}
//	else {
//		printf("不是旋转之后\n");
//	}
//	return 0;
//}
//



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
 
//#include<stdio.h>
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;//你现在的空瓶子可以换几瓶
//		empty = empty / 2 + empty % 2;//你有多少空瓶子
//	}
//	printf("%d\n", total);
//	return 0;
//}


//一个数组中只有一个数字是出现一次，其他所有数字都出现了两次。找出这一个只出现一次的数字，编程实现。//找一个只出现一次的数
int fun(int data[], int len)
{
	if (len< 2)
		return;
	int ret = 0;
	for (int i = 0; i < len; ++i)
		ret^= data[i];//（出现两次的数）相同的两个数异或等于0，最后只剩（出现一次的数）一个单独的数与0异或就是本身
	return  ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3  };
	int len = sizeof(arr) / sizeof(arr[0]);
	 printf("%d\n", fun(arr, len));
	return 0;
}
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。找出这两个只出现一次的数字，编程实现。//找两个只出现一次的数
//遍历方法
void find_data1(int arr[], int len){
	int i = 0, j = 0;
	int flag = 0;
	printf("data is : ");
	for (; i < len; i++){
		flag = 0;
		for (j = 0; j < len; j++){
			if (arr[j] == arr[i] && i != j)
				flag = 1;
		}
		if (0 == flag)
			printf(" %d  ", arr[i]);

	}
	printf("\n");
}

//异或法
void find_data2(int arr[], int len){
	int res = arr[0];
	int i = 1;
	int flag = 1;
	int x = 0, y = 0;
	//tep 1
	for (; i < len; i++){
		res ^= arr[i];//两个单独数的异或结果，下面该解决怎么把这两个数求出来
	}

	//tep 2
	for (i = 0; i < 32; i++){
		if (res & (flag <<= i))//
			break;
	}

	//tep 3
	for (i = 0; i < len; i++){
		if (flag & arr[i])
			x ^= arr[i];
		else
			y ^= arr[i];
	}
	printf("%d , %d \n", x, y);
}
int main(){
	int arr[] = { 1, 2, 3, 1, 2, 3, 4, 5, };
	int len = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	find_data1(arr, len);
	find_data2(arr, len);
	
	return 0;
}
