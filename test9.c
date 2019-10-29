//.2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

int isRotate(char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2) {
		return 0;
	}
	char* s;
	int i;
	for (i = 0; i <= len1; ++i) {
		s = s1;
		LeftRotate(s, i);
		if (strcmp(s, s2) == 0) {
			return 1;
		}
		s = s1;
RightRotate(s, i);
		if (strcmp(s, s2) == 0) {
			return 1;
		}
	}
	return 0;
}
int main() {
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	if (isRotate(s1, s2) == 1) {
		printf("是旋转之后的\n");
	}
	else {
		printf("不是旋转之后\n");	}
	return 0;
}
