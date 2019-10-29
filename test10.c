//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
 
#include<stdio.h>
int main()
{
	int money = 20;
	int total = money;
	int empty = money;
	while (empty > 1)
	{
		total += empty / 2;//你现在的空瓶子可以换几瓶
		empty = empty / 2 + empty % 2;//你有多少空瓶子
	}
	printf("%d\n", total);
	return 0;
}