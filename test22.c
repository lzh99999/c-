//1.实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
char* ZuoXuan(char *p, int n)
{
	int len = strlen(p) - 1;
	int i = 0;
	int j = 0;
	for (i = 0; i < n; ++i)
	{
		char tmp = p[0];//创建一个临时变量并把第一个字符赋值到tmp中
		for (j = 0; j < len; ++j)
		{
			p[j] = p[j + 1];//字符依次前进一个位置
		}
		p[len] = tmp;//将临时变量赋值到最后一个位置
	}
	return p;
}

int main(){

	int k = 0;
	char a[] = "ABCDEF";
	printf("字符为%s\n", a);
	printf("请输入左旋几个字符？(输入的数字小于6)\n");
	scanf("%d", &k);
	ZuoXuan(a, k);
	printf("%s\n", a);
	return 0;
}