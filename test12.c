//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ��ҳ�������ֻ����һ�ε����֣����ʵ�֡�//������ֻ����һ�ε���
//��������
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
