#include <stdio.h>
#include <stdlib.h>
//打印乘法口诀
int main()
{
int a=0;
int b=0;
int n;
scanf("%d",&n);
for(a=1;a<=n;a++){

for(b=1;b<=a;b++){
    printf("%d*%d=%d ",a,b,a*b);
}
printf("\n");
}
return 0;
}
