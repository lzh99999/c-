//strstr�������ַ���ƥ��
const char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* src = str1;
	const char* sub = str2;

	// ���θ�ԭ�����бȽ�
	while (*src) {
		// sub��src��һ���ֽ���ƥ��
		const char* start = src;
		while (*src == *sub && *sub != '\0'){
			++src;
			++sub;
		}

		if (*sub == '\0'){ // ƥ��ɹ�
			return start;
		}
		else{ // û��ƥ�䣬������
			src = start + 1;
			sub = str2;
		}
	}

	return NULL;
}