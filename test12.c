//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。找出这两个只出现一次的数字，编程实现。//找两个只出现一次的数
//遍历方法
void find_data1(int arr[], int len){
	int i = 0, j = 0;
	int flag = 0;
	printf("data is : ");
	for (; i < len; i++){
		flag = 0;
		for (j = 0; j < len; j++){
			if (arr[j] == arr[i] && i != j)
				flag = 1;
		}
		if (0 == flag)
			printf(" %d  ", arr[i]);

	}
	printf("\n");
}
