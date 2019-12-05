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
//	char p2[10]; // 越界是抽查
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

//strstr函数：字符串匹配
//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* src = str1;
//	const char* sub = str2;
//
//	// 依次跟原串进行比较
//	while (*src) {
//		// sub跟src的一部分进行匹配
//		const char* start = src;
//		while (*src == *sub && *sub != '\0'){
//			++src;
//			++sub;
//		}
//
//		if (*sub == '\0'){ // 匹配成功
//			return start;
//		}
//		else{ // 没有匹配，往回退
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

////memccpy函数：以字节为单位对字符串的拷贝
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


////menmove函数：解决memcpy函数不能解决的内存重叠问题
//void* my_memmove(void* dst, const void* src, size_t num)
//{
//	assert(dst&&src);
//	char* str2 = (char*)dst;
//	const char* str1= (char*)src;
//	
//	if (str2 >str1 && str2 < str1+ num)//前面的往后面拷贝
//	{
//		// 从后往前拷贝
//		for (int i = num - 1; i >= 0; --i)
//		{
//			str2[i] = str1[i];
//		}
//	}
//	else
//	{
//		// 从前往后拷贝
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
//	my_memcpy(a1 + 4, a1, sizeof(int)* 5);//前面的往后面拷贝，可能把内存重叠部分先拷贝成新的值 再最后又拷贝给目的地址就是这个新的值（不同的值）了，
//	//本来要的结果是 1，2，3，4，1，2，3，4，5     此结果确是1，2，3，4，1，2，3，4，1       其中内存重叠的部分的5先被拷贝成了1 ，最后拷贝过去的也就是1而不是5    解决方法就是从后往前开始拷贝，就不会在自身拷贝走之前被提前拷贝成别的值了
//	//所以就要用memmove函数来解决memcpy函数不能解决的内存重叠问题
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
//	my_memmove(a2, a2 + 4, sizeof(int)* 5);//后面的往前面拷贝 不存在上述情况，直接从前往后拷贝即可
//	printf("%d\n", my_memmove(a2, a2 + 4, sizeof(int)* 5));
//	return 0;
//}