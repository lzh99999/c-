//递归解决输入一个非负整数，返回组成它的数字之和，
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

//非递归解决输入一个非负整数，返回组成它的数字之和
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
