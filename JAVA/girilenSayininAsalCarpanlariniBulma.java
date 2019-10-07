package girilensayininasalcarpanlarinibulma;

import java.util.Scanner;

public class GirilenSayininAsalCarpanlariniBulma {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n=0,sayac=0;
        
        do{
        System.out.println("2'den büyük bir sayı giriniz : ");
        n=sc.nextInt();
        }while(n<2);
        
        int asalSayilar[] = new int[n];
        
        for (int i = 2; i <= n; i++) {
            for (int j = 2; j <= i; j++) {
                if(i%j==0 && j<i)
                    break;
                else if(i%j==0 && j==i){
                    asalSayilar[sayac]=i;
                    //System.out.println(asalSayilar[i]);
                    sayac++;
                }
            }   
        }
        for (int i = 0; i < sayac; i++) {
            if(n%asalSayilar[i]==0)
                System.out.println(asalSayilar[i]);
        }
    }
}
