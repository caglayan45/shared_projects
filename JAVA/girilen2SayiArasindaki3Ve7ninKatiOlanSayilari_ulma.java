package ders1_30.pkg09.pkg2019;

import java.util.Scanner;


public class Ders1_30092019 {
    
    public static void main(String[] args) {
        
        /*
        a ve b al 2 sayı arasındaki 3 e ve 7 e tam bölünenleri listele
        */
        
        Scanner sc = new Scanner(System.in);
        
        int a=0,b=0,buyuk=0,kucuk=0;
        
        System.out.println("1. Sayı : ");
        a=sc.nextInt();
        
        System.out.println("2. Sayı : ");
        b=sc.nextInt();
        
        if(a<b)
        {
            kucuk=a;
            buyuk=b;
        }else if(b<a){
            kucuk=b;
            buyuk=a;
        }else{
            System.out.println("0");
        }
        
        System.out.println("3 ve 7'nin katları;");
        for (int i = kucuk; i <= buyuk; i++)
            if(i%3==0 && i%7==0) 
                System.out.println(i);
    }
}
