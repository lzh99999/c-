//strstr函数：字符串匹配
const char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* src = str1;
	const char* sub = str2;

	// 依次跟原串进行比较
	while (*src) {
		// sub跟src的一部分进行匹配
		const char* start = src;
		while (*src == *sub && *sub != '\0'){
			++src;
			++sub;
		}

		if (*sub == '\0'){ // 匹配成功
			return start;
		}
		else{ // 没有匹配，往回退
			src = start + 1;
			sub = str2;
		}
	}

	return NULL;
}