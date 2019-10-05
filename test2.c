 x的n次方 递归实现
#include <stdio.h>
#include <stdlib.h>
//递归解决x的n次方
int f(int x,int n){
if(n==0){
return 1;
}
else
return x*f(x,n-1);
}

int main()
{
int x;
int n;
scanf("%d%d",&x,&n);
int a=f(x,n);
printf("%d\n",a);
return 0;
}
2， x的n次方 非递归实现
#include <stdio.h>
#include <stdlib.h>
//非递归解决n的k次方
int f(int x,int n){
int i=0;
int s=1;
for(i=0;i<n;i++){
s*=x;
}
return s;
}
int main()
{
int x;
int n;
scanf("%d%d",&x,&n);
int a=f(x,n);
printf("%d\n",a);
return 0;
}
