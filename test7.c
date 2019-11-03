#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("ÈòÄêÊÇ£º\n");
	for(i=2000;i<=3000;i++)
		fun(i);
	system("pause");
	return 0;
}
int fun(int n)
{
	if(n%4!=0)
		return 0;
	else if(n%100!=0)
		printf("%d ",n);
		  else if(n%400!=0)
			return 0;		
			else
			  printf("%d ",n);
 
	return 0;
}
