//异或法
void find_data2(int arr[], int len){
	int res = arr[0];
	int i = 1;
	int flag = 1;
	int x = 0, y = 0;
	//tep 1
	for (; i < len; i++){
		res ^= arr[i];//两个单独数的异或结果，下面该解决怎么把这两个数求出来
	}

	//tep 2
	for (i = 0; i < 32; i++){
		if (res & (flag <<= i))//
			break;
	}

	//tep 3
	for (i = 0; i < len; i++){
		if (flag & arr[i])
			x ^= arr[i];
		else
			y ^= arr[i];
	}
	printf("%d , %d \n", x, y);
}
int main(){
	int arr[] = { 1, 2, 3, 1, 2, 3, 4, 5, };
	int len = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	find_data1(arr, len);
	find_data2(arr, len);
	
	return 0;
}