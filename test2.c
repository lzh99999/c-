 x��n�η� �ݹ�ʵ��
#include <stdio.h>
#include <stdlib.h>
//�ݹ���x��n�η�
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
2�� x��n�η� �ǵݹ�ʵ��
#include <stdio.h>
#include <stdlib.h>
//�ǵݹ���n��k�η�
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
