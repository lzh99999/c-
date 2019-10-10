package com.Test;
import java.util.Scanner;  //导入包
public class Test {  
    //主函数
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);  //创建Scanner类的对象
        System.out.println("请输入您想要查询的年龄:");  //提示信息
        int num = in.nextInt();  //调用nextInt()方法
        if (num <= 18){  //若num小于等于18
            System.out.println("少年");  //输出结果
        }
        else if (19 <= num && num <= 28){
            System.out.println("青年");
        }
        else if (29 <= num && num <= 55){
            System.out.println("中年");
        }
        else {  //若num大于55
            System.out.println("老年");
        }
    }
}
