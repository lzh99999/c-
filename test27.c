#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	assert(str);
//
//	int count = 0;
//	//while (*str != '\0')
//	while (*str)
//	{
//		++count;
//		++str;
//	}
//
//	return count;
//}

//int my_strlen(const char* str)
//{
//	assert(str);
//
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen(str + 1);
//	}
//}

//int my_strlen(const char* str)
//{
//	assert(str);
//
//	const char* end = str;
//	while (*end)
//		++end;
//
//	return end - str;
//}
//int main()
//{
//	printf("%d\n", my_strlen(p));
//	return 0;
//}

//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//
//	char* ret = dst;
//	while (*dst++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char* p1 = "hello";
//	char p2[10]; // Խ���ǳ��
////	p2[10] = 1;
////	p2[11] = 2;
////	p2[12] = 3;
////	p2[20] = 3;
//	my_strcpy(p2, p1);
//	printf("%s\n", p2);
//
//	return 0;
//}

//char* my_strcat(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//
//	char* ret = dst;
//
//	while (*dst)
//		++dst;
//
//	while (*dst++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char* p1 = "hello";
//	char p2[20];
//	strcpy(p2, "wor\0ld");
//
//	my_strcat(p2, p1);
//
//	printf("%s\n", p2);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 && *str2)
//	{
//		if (*str1 > *str2)
//		{
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//		else
//		{
//			++str1;
//			++str2;
//		}
//	}
//	if (*str1 == '\0' && *str2 == '\0')
//	{
//		return 0;
//	}
//	else if (*str1 == '\0')
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char* p1 = "hello";
//	char* p2 = "hello1";
//
//	printf("%d\n", strcmp(p1, p2));
//	printf("%d\n", my_strcmp(p1, p2));
//
//	return 0;
//}

//strstr�������ַ���ƥ��
//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* src = str1;
//	const char* sub = str2;
//
//	// ���θ�ԭ�����бȽ�
//	while (*src) {
//		// sub��src��һ���ֽ���ƥ��
//		const char* start = src;
//		while (*src == *sub && *sub != '\0'){
//			++src;
//			++sub;
//		}
//
//		if (*sub == '\0'){ // ƥ��ɹ�
//			return start;
//		}
//		else{ // û��ƥ�䣬������
//			src = start + 1;
//			sub = str2;
//		}
//	}
//
//	return NULL;
//}

//int main()
//{
//	char* p1 = "hello world";
//	char* p2 = "wor";
//
//	const char* match1 = my_strstr(p1, p2);
//	printf("%s\n", match1);
//
//	p2 = "word";
//	const char* match2 = my_strstr(p1, p2);
//	printf("%s\n", match2);
//
//	p1 = "aaabbc";
//	p2 = "aab";
//	const char* match3 = my_strstr(p1, p2);
//	printf("%s\n", match3);
//
//	return 0;
//}
//

////memccpy���������ֽ�Ϊ��λ���ַ����Ŀ���
//void* my_memcpy(void* dst, const void* src, size_t num)
//{
//	assert(dst&&src);
//	char* str1 = (char*)dst;
//	const char* str2 = (char*)src;
//	while (num--)
//	{
//		*str1++ = *str2++;
//	}
//	return str1;
//}
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5];
//	my_memcpy(arr2, arr1, sizeof(int)* 5);
//   
//	/*char arr1[5] = "ancde";
//	char arr2[5];
//	my_memcpy(arr2, arr1, sizeof(char)* 5);
//    printf("%d\n", my_memcpy(arr2, arr1, sizeof(int)* 5));*/
//	return 0;
//}


////menmove���������memcpy�������ܽ�����ڴ��ص�����
//void* my_memmove(void* dst, const void* src, size_t num)
//{
//	assert(dst&&src);
//	char* str2 = (char*)dst;
//	const char* str1= (char*)src;
//	
//	if (str2 >str1 && str2 < str1+ num)//ǰ��������濽��
//	{
//		// �Ӻ���ǰ����
//		for (int i = num - 1; i >= 0; --i)
//		{
//			str2[i] = str1[i];
//		}
//	}
//	else
//	{
//		// ��ǰ���󿽱�
//		for (int i = 0; i < num; ++i)
//		{
//			str2[i] = str1[i];
//		}
//	}
//	return dst;
//}
//int main()
//{
//	int a1[9] = { 1, 2, 3, 4, 5 };
//	my_memcpy(a1 + 4, a1, sizeof(int)* 5);//ǰ��������濽�������ܰ��ڴ��ص������ȿ������µ�ֵ ������ֿ�����Ŀ�ĵ�ַ��������µ�ֵ����ͬ��ֵ���ˣ�
//	//����Ҫ�Ľ���� 1��2��3��4��1��2��3��4��5     �˽��ȷ��1��2��3��4��1��2��3��4��1       �����ڴ��ص��Ĳ��ֵ�5�ȱ���������1 ����󿽱���ȥ��Ҳ����1������5    ����������ǴӺ���ǰ��ʼ�������Ͳ�������������֮ǰ����ǰ�����ɱ��ֵ��
//	//���Ծ�Ҫ��memmove���������memcpy�������ܽ�����ڴ��ص�����
//	printf("%d\n", my_memcpy(a1 + 4, a1, sizeof(int)* 5));
//	
//
//	my_memmove(a1 + 4, a1, sizeof(int)* 5);
//	printf("%d\n", my_memmove(a1 + 4, a1, sizeof(int)* 5));
//
//
//	int a2[9] = {-1,-1,-1, -1,1, 2, 3, 4, 5 };
//	my_memcpy(a2, a2 + 4, sizeof(int)* 5);
//	printf("%d\n", my_memcpy(a2, a2 + 4, sizeof(int)* 5));
//
//	my_memmove(a2, a2 + 4, sizeof(int)* 5);//�������ǰ�濽�� ���������������ֱ�Ӵ�ǰ���󿽱�����
//	printf("%d\n", my_memmove(a2, a2 + 4, sizeof(int)* 5));
//	return 0;
//}