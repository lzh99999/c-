package com.Test;
import java.util.Scanner;  //�����
public class Test {  
    //������
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);  //����Scanner��Ķ���
        System.out.println("����������Ҫ��ѯ������:");  //��ʾ��Ϣ
        int num = in.nextInt();  //����nextInt()����
        if (num <= 18){  //��numС�ڵ���18
            System.out.println("����");  //������
        }
        else if (19 <= num && num <= 28){
            System.out.println("����");
        }
        else if (29 <= num && num <= 55){
            System.out.println("����");
        }
        else {  //��num����55
            System.out.println("����");
        }
    }
}
