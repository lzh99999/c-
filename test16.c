
//menmove���������memcpy�������ܽ�����ڴ��ص�����
void* my_memmove(void* dst, const void* src, size_t num)
{
	assert(dst&&src);
	char* str2 = (char*)dst;
	const char* str1= (char*)src;
	
	if (str2 >str1 && str2 < str1+ num)//ǰ��������濽��
	{
		// �Ӻ���ǰ����
		for (int i = num - 1; i >= 0; --i)
		{			
    str2[i] = str1[i];
		}
	}
	else
	{
		// ��ǰ���󿽱�
		for (int i = 0; i < num; ++i)
		{
			str2[i] = str1[i];
		}
	}
	return dst;
}