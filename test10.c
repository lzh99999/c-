//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
 
#include<stdio.h>
int main()
{
	int money = 20;
	int total = money;
	int empty = money;
	while (empty > 1)
	{
		total += empty / 2;//�����ڵĿ�ƿ�ӿ��Ի���ƿ
		empty = empty / 2 + empty % 2;//���ж��ٿ�ƿ��
	}
	printf("%d\n", total);
	return 0;
}