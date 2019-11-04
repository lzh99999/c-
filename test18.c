//memccpy函数：以字节为单位对字符串的拷贝
void* my_memcpy(void* dst, const void* src, size_t num)
{
	assert(dst&&src);
	char* str1 = (char*)dst;
	const char* str2 = (char*)src;
	while (num--)
	{
		*str1++ = *str2++;
	}
	return str1;
}
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];
	my_memcpy(arr2, arr1, sizeof(int)* 5);
  
	/*char arr1[5] = "ancde";
	char arr2[5];
	my_memcpy(arr2, arr1, sizeof(char)* 5);
    printf("%d\n", my_memcpy(arr2, arr1, sizeof(int)* 5));*/
	return 0;
}