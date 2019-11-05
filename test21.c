//指定几个字符比较大小
char* my_strncmp(const char* dst, const char* src, size_t num)
{
	assert(dst);
	assert(src);
	assert(num > 0);
	/*char* str1 = dst;
	char* str2 = src;*/
	int ret = 0; 
	while (num--)
	{
	   ret = *dst - *src;
		if (ret > 0)
		{
			return 1;
		}
		else if(ret < 0)
		{
			return  -1;
		}
		else
		{
			src++;
			dst++;
		}
	}
	if (ret==0)
		{
			return 0;
		}
		
		
}	
int main(){
	char* p1 = "hello";
	char* p2 = "hello1";
	printf("%d\n", my_strncmp(p1, p2,4));
	return 0;
}
