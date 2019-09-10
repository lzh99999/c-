#include <stdio.h>
#include <stdlib.h>
//判断是不是闰年

int main()
{
int year;
scanf("%d",&year);
if((year%40&&year%100!=0)||year%4000){
printf(“the year is leap year”);
}
else
printf(“the year is not leap year”);
return 0;
}
