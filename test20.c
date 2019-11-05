//strcat 指定拼接几个字符
char* my_strncat(char* dst, const char* src, size_t num)
{
	assert(dst);
	assert(src);
	assert(num > 0);
	char* str1 = dst;
	while (*dst)
	{
		dst++;
	}
	while (num--)
	{
		*dst++ = *src++;
	}
	return str1;

}
int main()
{
	char* p1 = "abc";
	char p2[10]="qwe"; 
	my_strncat(p2, p1,1);
	printf("%s\n", p2);

	return 0;
}