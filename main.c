#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
////1.ʵ��һ�����������������ַ����е�k���ַ��� 
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
//char* ZuoXuan(char *p, int n)
//{
//	int len = strlen(p) - 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; ++i)
//	{
//		char tmp = p[0];//����һ����ʱ�������ѵ�һ���ַ���ֵ��tmp��
//		for (j = 0; j < len; ++j)
//		{
//			p[j] = p[j + 1];//�ַ�����ǰ��һ��λ��
//		}
//		p[len] = tmp;//����ʱ������ֵ�����һ��λ��
//	}
//	return p;
//}
//
//int main()
//{
//	int k = 0;
//	char a[] = "ABCDEF";
//	printf("�ַ�Ϊ%s\n", a);
//	printf("���������������ַ���(���������С��6)\n");
//	scanf("%d", &k);
//	ZuoXuan(a, k);
//	printf("%s\n", a);
//	return 0;
//}




////.2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
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
//		printf("����ת֮���\n");
//	}
//	else {
//		printf("������ת֮��\n");
//	}
//	return 0;
//}
//



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
 
//#include<stdio.h>
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;//�����ڵĿ�ƿ�ӿ��Ի���ƿ
//		empty = empty / 2 + empty % 2;//���ж��ٿ�ƿ��
//	}
//	printf("%d\n", total);
//	return 0;
//}


//һ��������ֻ��һ�������ǳ���һ�Σ������������ֶ����������Ρ��ҳ���һ��ֻ����һ�ε����֣����ʵ�֡�//��һ��ֻ����һ�ε���
int fun(int data[], int len)
{
	if (len< 2)
		return;
	int ret = 0;
	for (int i = 0; i < len; ++i)
		ret^= data[i];//���������ε�������ͬ��������������0�����ֻʣ������һ�ε�����һ������������0�����Ǳ���
	return  ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3  };
	int len = sizeof(arr) / sizeof(arr[0]);
	 printf("%d\n", fun(arr, len));
	return 0;
}
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ��ҳ�������ֻ����һ�ε����֣����ʵ�֡�//������ֻ����һ�ε���
//��������
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

//���
void find_data2(int arr[], int len){
	int res = arr[0];
	int i = 1;
	int flag = 1;
	int x = 0, y = 0;
	//tep 1
	for (; i < len; i++){
		res ^= arr[i];//�����������������������ý����ô���������������
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
