void main(){
int num = 1; 
int sum = 0; 
// ���ѭ��������׳˵ĺ� 
while (num <= 5) {     int factorResult = 1; 
 int tmp = 1;     // ���ѭ�����������׳˵�ϸ��
 while (tmp <= num) {        
 factorResult *= tmp;         
 tmp++;     
}
    sum += factorResult;     
 num++; 
} 
System.out.println("sum = " + sum); 
}