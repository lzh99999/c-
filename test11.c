//һ��������ֻ��һ�������ǳ���һ�Σ������������ֶ����������Ρ��ҳ���һ��ֻ����һ�ε����֣����ʵ�֡�//��һ��ֻ����һ�ε���
int fun(int data[], int len)
{
	if (len< 2)
		return;
	int ret = 0;
	for (int i = 0; i < len; ++i)
		ret^= data[i];//���������ε�������ͬ��������������0�����ֻʣ������һ�ε�����һ������������0�����Ǳ���
	return  ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3  };
	int len = sizeof(arr) / sizeof(arr[0]);
	 printf("%d\n", fun(arr, len));
	return 0;
}