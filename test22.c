//1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
char* ZuoXuan(char *p, int n)
{
	int len = strlen(p) - 1;
	int i = 0;
	int j = 0;
	for (i = 0; i < n; ++i)
	{
		char tmp = p[0];//����һ����ʱ�������ѵ�һ���ַ���ֵ��tmp��
		for (j = 0; j < len; ++j)
		{
			p[j] = p[j + 1];//�ַ�����ǰ��һ��λ��
		}
		p[len] = tmp;//����ʱ������ֵ�����һ��λ��
	}
	return p;
}

int main(){

	int k = 0;
	char a[] = "ABCDEF";
	printf("�ַ�Ϊ%s\n", a);
	printf("���������������ַ���(���������С��6)\n");
	scanf("%d", &k);
	ZuoXuan(a, k);
	printf("%s\n", a);
	return 0;
}