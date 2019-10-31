//一个数组中只有一个数字是出现一次，其他所有数字都出现了两次。找出这一个只出现一次的数字，编程实现。//找一个只出现一次的数
int fun(int data[], int len)
{
	if (len< 2)
		return;
	int ret = 0;
	for (int i = 0; i < len; ++i)
		ret^= data[i];//（出现两次的数）相同的两个数异或等于0，最后只剩（出现一次的数）一个单独的数与0异或就是本身
	return  ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3  };
	int len = sizeof(arr) / sizeof(arr[0]);
	 printf("%d\n", fun(arr, len));
	return 0;
}