//�ݹ�������һ���Ǹ����������������������֮�ͣ�
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n){

if(n<10){

return n;

    1

}

return (n%10)+DigitSum(n/10);
}

int main()
{ int n;
scanf("%d",&n);
int a=DigitSum(n);
printf("%d\n",a);
return 0;
}

//�ǵݹ�������һ���Ǹ����������������������֮��
int DigitSum(int n){
int sum=0;

 while(n%10){
    sum+=n%10;
    n/=10;
 }

    1
    2
    3
    4

return sum;
}

int main()
{ int n;
scanf("%d",&n);
int a=DigitSum(n);
printf("%d\n",a);
return 0;
}
