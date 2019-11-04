
//menmove函数：解决memcpy函数不能解决的内存重叠问题
void* my_memmove(void* dst, const void* src, size_t num)
{
	assert(dst&&src);
	char* str2 = (char*)dst;
	const char* str1= (char*)src;
	
	if (str2 >str1 && str2 < str1+ num)//前面的往后面拷贝
	{
		// 从后往前拷贝
		for (int i = num - 1; i >= 0; --i)
		{			
    str2[i] = str1[i];
		}
	}
	else
	{
		// 从前往后拷贝
		for (int i = 0; i < num; ++i)
		{
			str2[i] = str1[i];
		}
	}
	return dst;
}