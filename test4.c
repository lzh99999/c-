void main(){
int num = 1; 
int sum = 0; 
// 外层循环负责求阶乘的和 
while (num <= 5) {     int factorResult = 1; 
 int tmp = 1;     // 里层循环负责完成求阶乘的细节
 while (tmp <= num) {        
 factorResult *= tmp;         
 tmp++;     
}
    sum += factorResult;     
 num++; 
} 
System.out.println("sum = " + sum); 
}