
package nyp_quiz2;

import java.util.Scanner;
import java.lang.Math;


public class NYP_quiz2 {
    
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int sayac=0,rastgeleSayi=0,tahmin=0,basSayac=0;
        
        rastgeleSayi=(int)((Math.random() * ((9999 - 1000) + 1)) + 1000);
        
        
        System.out.println("4 Basamaklı sayıyı tahmin ediniz.");
        
        
        do{
            do{
                tahmin=sc.nextInt();
            }while(tahmin < 1000 || tahmin > 10000);
            sayac++;
            if(tahmin < rastgeleSayi){
                String rSayi=Integer.toString(rastgeleSayi);
                String tSayi=Integer.toString(tahmin);
                for (int i = 0; i < 4; i++) {
                    if(rSayi.charAt(i) == tSayi.charAt(i))
                        basSayac++;
                }
                System.out.println(basSayac + " basamak doğru");
                System.out.println("Daha büyük bir sayi giriniz");
                basSayac=0;
            }
            else if(tahmin > rastgeleSayi){
                String rSayi=Integer.toString(rastgeleSayi);
                String tSayi=Integer.toString(tahmin);
                for (int i = 0; i < 4; i++) {
                    if(rSayi.charAt(i) == tSayi.charAt(i))
                        basSayac++;
                }
                System.out.println(basSayac + " basamak doğru");
                System.out.println("Daha küçük bir sayi giriniz");
                basSayac=0;
            }
        }while(tahmin!=rastgeleSayi);
        
        System.out.println(sayac + ". denemede sayı bulundu");
    }
}
