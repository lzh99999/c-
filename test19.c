//strncpy 指定几个字节的字符拷贝
char* my_strncpy(char* dst, const char* src,size_t num)
{
	assert(dst);
	assert(src);
	assert(num > 0);
	char* str1 = dst;
	while(*dst++ = *src++)
	{
		num--;
	}
	while (num--)
	{
		*dst= '0';
	}
	return str1;
}

int main()
{
	char* p1 = "abc";
	char p2[10]; 
	my_strncpy(p2, p1,5);
	printf("%s\n", p2);

	return 0;
}